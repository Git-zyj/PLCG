/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203373
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
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((unsigned short) var_1)))));
    var_19 = ((/* implicit */unsigned long long int) var_11);
    var_20 &= ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                var_21 = ((((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_0 [i_0])))), ((+(((/* implicit */int) var_11))))))) / (((((/* implicit */_Bool) arr_2 [i_1 + 3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) : (((/* implicit */int) var_9))))) : (((unsigned long long int) 8614407600458183LL)))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_2 = 3; i_2 < 22; i_2 += 1) 
                {
                    var_22 += ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_4 [(short)22] [(short)22] [(short)22])))) ? (arr_6 [i_1 + 3] [(signed char)4] [i_2 + 1]) : (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) & (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))));
                    arr_7 [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2]))));
                    arr_8 [(short)4] [i_1] [(signed char)1] [i_2] = ((short) arr_4 [i_1] [i_1 + 2] [i_2 + 3]);
                    var_23 &= ((/* implicit */signed char) 8614407600458183LL);
                }
                /* vectorizable */
                for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    var_24 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) var_15))));
                    arr_13 [i_1] [i_1] [i_1] = var_1;
                    arr_14 [i_1] = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_12 [i_0] [i_1 + 2] [i_3])) : (((/* implicit */int) arr_12 [i_0] [i_1 + 3] [i_1 + 3])));
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 2; i_4 < 23; i_4 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((arr_18 [i_0] [i_3] [(signed char)3] [i_3] [i_4 - 2] [i_4 - 2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                        arr_19 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 69485955)) ? (((((/* implicit */_Bool) -69485956)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_18 [i_0] [i_0] [i_1] [i_3] [i_3] [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                    }
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned int) ((var_5) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                    var_27 |= ((/* implicit */unsigned short) arr_4 [(_Bool)0] [(_Bool)0] [i_5]);
                    var_28 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-95))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    var_29 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_1 + 2] [i_1 + 1] [(short)8])) ? (((/* implicit */int) arr_20 [(short)18] [i_1 + 1] [16U])) : (((/* implicit */int) arr_20 [i_0] [i_1 - 1] [4LL])))))));
                    var_30 = arr_11 [i_0] [i_1 - 1] [i_6] [i_6];
                    /* LoopSeq 3 */
                    for (short i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_18 [i_0] [i_0] [i_1] [i_1 + 2] [i_1 + 2] [i_7]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((int) arr_25 [i_1] [9U])) : ((~(((/* implicit */int) var_9))))))) != (min((((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) (-(((/* implicit */int) arr_22 [i_1] [i_6] [i_7])))))))));
                        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) var_8))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 3; i_8 < 21; i_8 += 2) 
                        {
                            var_33 = ((/* implicit */_Bool) max((var_33), (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) >= (((((-8614407600458184LL) + (9223372036854775807LL))) << (((((-8614407600458177LL) + (8614407600458204LL))) - (27LL)))))))) > (((/* implicit */int) arr_2 [i_1 + 1]))))));
                            var_34 = ((/* implicit */unsigned int) (_Bool)1);
                            var_35 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [(short)10] [i_8 + 2])) ? (arr_25 [(unsigned short)8] [i_8 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) -69485956)))) : ((-(arr_25 [22ULL] [i_8 + 2]))));
                            var_36 ^= ((/* implicit */unsigned long long int) 8614407600458177LL);
                            arr_30 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_8 + 2]), (((/* implicit */unsigned short) (short)-4075)))))) != (((((/* implicit */unsigned long long int) arr_6 [11ULL] [i_1] [i_8 + 3])) ^ (arr_27 [i_0] [i_1] [i_1] [i_6] [i_1] [i_8 + 4])))));
                        }
                    }
                    for (unsigned long long int i_9 = 2; i_9 < 24; i_9 += 1) /* same iter space */
                    {
                        var_37 ^= ((/* implicit */unsigned short) var_5);
                        arr_33 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) arr_22 [i_1] [(_Bool)1] [i_1])))))), (var_7)));
                        var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) (-(max((((/* implicit */int) (unsigned short)65512)), ((-(((/* implicit */int) (signed char)6)))))))))));
                        var_39 = ((/* implicit */unsigned short) (-(((arr_16 [i_0] [i_1] [i_1 + 2]) | (((/* implicit */int) arr_28 [i_0] [i_1] [i_1 - 1]))))));
                        var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)15809)))))));
                    }
                    for (unsigned long long int i_10 = 2; i_10 < 24; i_10 += 1) /* same iter space */
                    {
                        var_41 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((-8614407600458183LL) % (((7702667323242404678LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))))) & (((unsigned long long int) 18446744073709551615ULL))));
                        var_42 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_10 [i_1]))));
                        var_43 -= (signed char)39;
                    }
                    arr_37 [i_1] [i_1 + 2] [i_6] = ((short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_11 [i_0] [i_1 + 1] [i_6] [i_6]))));
                }
                arr_38 [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)0))))) ? ((-(((/* implicit */int) (unsigned short)17907)))) : (((/* implicit */int) min(((short)0), (((/* implicit */short) (_Bool)1))))))));
            }
        } 
    } 
    var_44 = ((/* implicit */unsigned short) var_16);
}
