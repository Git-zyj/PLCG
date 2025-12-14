/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206934
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 6; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    var_14 -= ((((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1])) ? (arr_4 [i_0 + 4] [1U]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (arr_2 [i_0 + 2] [i_0]) : (((/* implicit */unsigned int) arr_8 [i_0 + 1] [8ULL] [(short)8]))))));
                    var_15 ^= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 2])))), (((3494148841U) ^ (800818455U)))));
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        for (int i_5 = 4; i_5 < 9; i_5 += 1) 
                        {
                            {
                                var_16 += ((/* implicit */short) (!(((/* implicit */_Bool) arr_10 [i_5 - 1] [i_4] [i_1] [i_1]))));
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) -4196762357859866511LL)) ? (3494148841U) : (((/* implicit */unsigned int) -67108864))));
                            }
                        } 
                    } 
                    arr_17 [i_1] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_12))) - (var_1)));
                }
                /* LoopSeq 1 */
                for (signed char i_6 = 2; i_6 < 9; i_6 += 3) 
                {
                    /* LoopSeq 4 */
                    for (short i_7 = 1; i_7 < 9; i_7 += 3) 
                    {
                        arr_22 [i_7] [i_7] [i_6] [i_1] = ((/* implicit */long long int) max((((/* implicit */short) ((800818455U) > ((+(3494148841U)))))), (((short) (unsigned char)52))));
                        arr_23 [i_0] [2ULL] [i_0] [i_0] [i_0 + 2] |= ((/* implicit */short) ((_Bool) max((800818455U), (800818458U))));
                    }
                    for (unsigned char i_8 = 1; i_8 < 8; i_8 += 2) /* same iter space */
                    {
                        arr_26 [i_1] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0 - 1])) || (((/* implicit */_Bool) arr_15 [i_1]))))) < (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0 + 3])) >= (((/* implicit */int) arr_7 [i_0 - 1])))))));
                        var_18 &= ((/* implicit */unsigned long long int) var_0);
                    }
                    for (unsigned char i_9 = 1; i_9 < 8; i_9 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned int) min((var_19), ((~(arr_29 [(unsigned char)8] [4LL] [i_6] [i_6 - 2] [i_9] [i_9])))));
                        /* LoopSeq 3 */
                        for (short i_10 = 0; i_10 < 10; i_10 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_0))));
                            arr_33 [i_1] [i_1] [i_6] [i_9] [i_9 - 1] [9LL] [i_10] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) (short)32767))) < (549755812864LL))) ? (((/* implicit */int) (signed char)1)) : (min((((/* implicit */int) (unsigned char)52)), ((-2147483647 - 1))))))), ((-9223372036854775807LL - 1LL))));
                        }
                        for (signed char i_11 = 4; i_11 < 9; i_11 += 2) 
                        {
                            arr_37 [5LL] [i_1] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((arr_15 [i_1]) % (((/* implicit */unsigned long long int) arr_35 [i_0] [i_0] [i_1 - 1] [i_6] [i_6 - 2] [i_9] [i_11])))))))), (((((/* implicit */int) arr_28 [i_0] [i_1] [4LL] [i_1] [i_6])) / (((/* implicit */int) arr_28 [i_1 - 1] [i_9] [i_9] [i_1] [2LL]))))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((arr_15 [i_1]) % (((/* implicit */unsigned long long int) arr_35 [i_0] [i_0] [i_1 - 1] [i_6] [i_6 - 2] [i_9] [i_11])))))))), (((((/* implicit */int) arr_28 [i_0] [i_1] [4LL] [i_1] [i_6])) * (((/* implicit */int) arr_28 [i_1 - 1] [i_9] [i_9] [i_1] [2LL])))))));
                            arr_38 [i_11] [i_11 - 2] [i_11 - 2] [i_11 - 2] [i_1] = ((/* implicit */_Bool) ((unsigned char) ((unsigned char) arr_4 [i_1 - 1] [i_11])));
                        }
                        for (unsigned int i_12 = 1; i_12 < 7; i_12 += 3) 
                        {
                            arr_41 [i_1] [i_1] [i_6] [i_9 + 1] [i_12 - 1] = ((/* implicit */signed char) var_3);
                            var_21 *= ((((/* implicit */_Bool) arr_7 [i_6 + 1])) ? (((((/* implicit */_Bool) arr_34 [(_Bool)1] [i_1 - 1] [i_9 + 2] [6U] [i_12] [i_12 - 1])) ? (arr_16 [(_Bool)1] [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_6]) : (arr_16 [i_0] [(unsigned char)7] [i_0] [i_0 + 1] [i_0] [i_6 - 2] [i_6]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_7 [i_6 - 1])), (arr_34 [(unsigned short)6] [i_6] [i_9 + 2] [i_9] [i_12] [i_12 + 3]))))));
                            var_22 += ((/* implicit */unsigned long long int) arr_5 [i_6 - 1]);
                            arr_42 [i_0] [i_1] [i_1] [i_6] [i_9] [i_1] = ((/* implicit */signed char) min((min((arr_34 [i_1] [i_6] [i_6] [i_9] [i_9] [i_9]), (((unsigned short) -8984435175734083606LL)))), (((/* implicit */unsigned short) (!((_Bool)1))))));
                        }
                        var_23 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_9 [i_1] [i_9])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_1] [i_1 + 1]))))));
                        /* LoopSeq 2 */
                        for (short i_13 = 0; i_13 < 10; i_13 += 4) 
                        {
                            arr_45 [i_0] [i_9] [i_1] [i_1] [i_1 - 1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2))) : (1643692262498076642ULL)));
                            arr_46 [i_1] = ((/* implicit */long long int) min((max((((short) 12822404577590999537ULL)), (((/* implicit */short) min(((unsigned char)237), (((/* implicit */unsigned char) (signed char)1))))))), (((/* implicit */short) min((((/* implicit */signed char) var_6)), ((signed char)-32))))));
                            arr_47 [7] [(_Bool)1] [i_1] = (((~(arr_30 [i_0 + 3] [i_1] [i_6 + 1] [i_9] [i_1]))) <= (arr_30 [i_0] [i_0 + 4] [i_0 + 4] [i_0 - 1] [i_1]));
                            arr_48 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_11 [i_0] [i_0 - 1]))) ? (((((/* implicit */_Bool) ((long long int) 18446744073709551615ULL))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)9), ((unsigned char)18))))) : (var_4))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                            var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)52))))) ? (((/* implicit */int) (short)32767)) : (((((/* implicit */int) (short)21275)) << (((((/* implicit */int) (short)21295)) - (21291)))))));
                        }
                        for (unsigned long long int i_14 = 1; i_14 < 9; i_14 += 2) 
                        {
                            var_25 = ((/* implicit */signed char) ((short) ((((/* implicit */int) (short)-1)) / (((/* implicit */int) var_10)))));
                            var_26 = ((/* implicit */signed char) arr_16 [i_0] [i_0 + 4] [i_0 + 2] [i_0 + 4] [i_0] [5ULL] [i_0]);
                        }
                        var_27 = ((/* implicit */long long int) min((var_27), (((long long int) max((((/* implicit */unsigned int) ((-8363859754889126821LL) != (((/* implicit */long long int) arr_20 [i_0] [0LL] [0LL] [i_0] [i_0] [8U]))))), (1246773028U))))));
                    }
                    for (unsigned char i_15 = 1; i_15 < 8; i_15 += 2) /* same iter space */
                    {
                        var_28 += ((/* implicit */int) ((9674198185642253107ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))));
                        var_29 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) 1246773028U)), (9ULL)));
                    }
                    arr_54 [i_0] [(signed char)6] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (((/* implicit */int) arr_3 [i_1 - 1])) : ((-2147483647 - 1)))) < (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_0 - 1] [i_1] [i_1] [i_1 - 1] [i_1] [i_6] [i_6 - 2])))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_44 [(_Bool)1] [(_Bool)1] [i_1] [9LL] [i_1] [i_1] [9LL]))))))))));
                    arr_55 [i_0] [(_Bool)0] [i_1] = ((/* implicit */long long int) (~(arr_15 [i_1])));
                    var_30 = ((/* implicit */short) (~(((((/* implicit */_Bool) (~(285388665U)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_1]))) > (arr_53 [(unsigned short)5] [i_0] [(signed char)0] [3U] [i_1] [i_6])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
                    var_31 = ((/* implicit */unsigned long long int) (unsigned short)0);
                }
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned long long int) var_0);
}
