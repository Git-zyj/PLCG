/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206227
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
    var_11 = ((/* implicit */long long int) (+(4101770044U)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_8 [0ULL] [i_2] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (signed char)-55)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-84))) : (7068786588237422075LL)))))), (15779149082468902619ULL)));
                    var_12 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((1303799932U), (var_10))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2991167364U)))))))) && (((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) 193197254U))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        for (short i_4 = 3; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [10] [i_1 + 1] [6U] [i_3]))) <= (-994455458799808008LL))))));
                                arr_13 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((int) min((12ULL), (var_9))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned int i_5 = 2; i_5 < 12; i_5 += 2) 
                    {
                        var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 193197270U))));
                        arr_17 [i_2] [i_1] [0LL] [i_2 + 1] = ((/* implicit */long long int) (+(max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_0] [i_2] [(short)9])) : (7ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)49431)), (4294967276U))))))));
                        var_15 = ((/* implicit */unsigned char) (~(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_16 [i_2] [i_5 + 2]))))));
                    }
                    for (short i_6 = 3; i_6 < 13; i_6 += 4) 
                    {
                        arr_21 [i_2 + 1] [i_2] [i_2 - 1] [i_2] = ((/* implicit */signed char) ((((((-500211041) + (2147483647))) >> (((2147483648U) - (2147483630U))))) % (((1434291990) | (((/* implicit */int) var_1))))));
                        arr_22 [i_0] [(short)3] [i_2] [(unsigned char)12] = ((/* implicit */short) min((((arr_20 [i_0] [i_1 - 1] [1] [(short)4] [i_0] [i_6 - 1]) - (arr_20 [(signed char)3] [i_1] [i_2] [i_6] [i_2] [i_6 - 1]))), (((((/* implicit */_Bool) var_1)) ? (arr_20 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_6 + 1]) : (arr_20 [(unsigned char)9] [(signed char)5] [(short)2] [i_6] [(unsigned char)9] [i_6 + 1])))));
                        arr_23 [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 193197246U))))), (((((/* implicit */_Bool) arr_18 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)89))) : (arr_15 [(signed char)4] [i_1 + 2] [7LL] [i_2] [i_6]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-6341))))) ? (((((/* implicit */_Bool) arr_3 [i_2] [i_0])) ? (((/* implicit */int) (unsigned short)60394)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_3 [i_6 - 1] [i_0])))))));
                    }
                    /* vectorizable */
                    for (short i_7 = 2; i_7 < 13; i_7 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            var_16 = ((/* implicit */_Bool) ((long long int) arr_6 [10LL] [i_8 - 1] [i_2]));
                            var_17 ^= ((/* implicit */unsigned char) (+(((arr_11 [i_0] [9ULL] [i_0] [i_0] [i_0] [9ULL] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0] [5ULL] [(unsigned short)4] [(unsigned short)4] [i_8])))))));
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */unsigned long long int) var_4)) : ((~(var_5)))));
                        }
                        var_19 ^= ((/* implicit */unsigned int) (_Bool)1);
                    }
                    for (int i_9 = 3; i_9 < 12; i_9 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * ((+(((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128)))))))));
                        var_21 = ((/* implicit */unsigned int) -2072039831);
                        var_22 = ((/* implicit */unsigned char) 502811048U);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                        {
                            arr_37 [i_0] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_15 [i_0] [i_1] [i_2] [i_2] [i_10])) * (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) -500211054)) : (arr_14 [i_10] [i_1] [i_2] [i_9])))));
                            arr_38 [i_0] [i_2] [i_2] [i_9] = ((/* implicit */unsigned long long int) ((arr_15 [i_0] [i_2] [i_2] [i_2] [i_10 + 1]) | (((/* implicit */unsigned int) (+(((/* implicit */int) arr_30 [i_10 + 1] [i_9 + 2] [(_Bool)1] [i_1 - 1] [i_1 - 1] [i_0])))))));
                            var_23 = ((/* implicit */signed char) arr_24 [(unsigned char)7] [i_1 - 1] [i_2]);
                            arr_39 [i_0] [(short)8] [i_2] [(_Bool)1] [i_2] = ((/* implicit */short) (-(((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [i_0]))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned char) arr_3 [4U] [i_11]);
                            arr_42 [i_2] [i_9] [i_2] = (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)46)) & (((/* implicit */int) (signed char)-65))))));
                            arr_43 [i_11] [i_2] [i_2] [10U] = ((/* implicit */int) arr_0 [4] [i_2]);
                        }
                        arr_44 [i_9 - 2] [i_2] [i_2] [i_2] [i_1] [(signed char)10] = ((/* implicit */unsigned short) (((+(((13ULL) >> (((-4361640590155652462LL) + (4361640590155652499LL))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_12 = 1; i_12 < 12; i_12 += 2) 
                    {
                        for (short i_13 = 1; i_13 < 13; i_13 += 2) 
                        {
                            {
                                var_25 += ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1 + 3] [(unsigned char)6] [i_0])) ? (((/* implicit */int) (short)-12424)) : (((/* implicit */int) (unsigned short)25349))))), (max((((/* implicit */long long int) max((var_0), (((/* implicit */int) var_8))))), (((var_4) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)133)))))))));
                                arr_50 [i_0] [i_1] [i_0] [5U] [i_2] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_26 [i_13] [i_13] [i_13 + 1] [i_2 - 1] [i_1 + 2])) & (((/* implicit */int) arr_26 [11ULL] [i_13] [i_13 - 1] [i_2 - 1] [i_1 - 1]))))));
                                var_26 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)252)) % (((/* implicit */int) ((unsigned short) -815080768733408837LL)))));
                                var_27 ^= ((/* implicit */unsigned char) var_1);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
