/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49273
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
    var_14 = ((/* implicit */unsigned int) max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_0] [(unsigned short)3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2333726850U)) ? (13073665057661152643ULL) : (((/* implicit */unsigned long long int) 2333726844U))));
                arr_7 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((int) var_4)) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_1 [i_1])))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    var_15 = ((/* implicit */unsigned short) arr_2 [i_2]);
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 2; i_3 < 11; i_3 += 2) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) arr_8 [i_0] [i_0]))));
                        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) (-(var_1)))) : ((+(var_0))))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1]))))))));
                        var_18 = ((/* implicit */long long int) (~(var_12)));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 2; i_4 < 13; i_4 += 2) /* same iter space */
                        {
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_13)), ((unsigned short)37968)))) ? (((((/* implicit */unsigned long long int) min((arr_5 [i_0] [i_1] [i_1]), (((/* implicit */unsigned int) 1243808058))))) - (var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_8 [i_4] [i_1]), (((/* implicit */unsigned int) var_9))))) ? (((/* implicit */long long int) (+(var_12)))) : (var_0)))))))));
                            var_20 = ((/* implicit */long long int) 33554400);
                            var_21 = ((long long int) ((((/* implicit */_Bool) min((var_9), (var_10)))) ? (((unsigned int) 5373079016048398972ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                            arr_17 [i_0] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */int) var_5);
                        }
                        for (signed char i_5 = 2; i_5 < 13; i_5 += 2) /* same iter space */
                        {
                            arr_20 [i_0] [(short)8] [i_1] [i_3] [i_5 - 1] = ((/* implicit */int) arr_14 [i_1]);
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_5] [i_0] [i_1] = ((/* implicit */signed char) (+(2726667878U)));
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) 13073665057661152643ULL))));
                        }
                    }
                    for (unsigned char i_6 = 2; i_6 < 11; i_6 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */long long int) max((var_1), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (((/* implicit */int) arr_15 [i_0] [i_2] [i_2] [(short)13] [i_6]))))) ? (((/* implicit */int) arr_9 [i_1] [i_1])) : (((/* implicit */int) var_13)))))));
                        arr_25 [i_0] [i_1] = ((/* implicit */int) ((short) arr_0 [i_0] [i_0]));
                        var_24 = ((/* implicit */int) ((unsigned int) min(((+(arr_1 [i_0]))), (((/* implicit */long long int) arr_9 [i_1] [i_1])))));
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            var_25 = ((/* implicit */int) (+(((((/* implicit */_Bool) -2147483640)) ? (min((13073665057661152643ULL), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_26 [i_1] [(unsigned short)5] [i_2] [i_1] [i_7])) - ((-9223372036854775807LL - 1LL)))))))));
                            arr_28 [i_0] [i_1] [i_2] [i_1] [i_1] = var_1;
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_8 = 2; i_8 < 11; i_8 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -771336376)) ? (((/* implicit */int) arr_29 [i_8] [i_2] [i_1] [i_0])) : (-1435918931))))));
                        var_27 ^= ((/* implicit */long long int) var_3);
                        /* LoopSeq 4 */
                        for (short i_9 = 1; i_9 < 11; i_9 += 4) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) / (arr_31 [i_0] [i_0] [i_1] [i_2] [i_8] [i_8] [i_9]))));
                            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((arr_4 [i_0] [i_1] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32767)))))));
                            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) arr_16 [i_2] [i_8]))));
                        }
                        for (short i_10 = 1; i_10 < 11; i_10 += 4) /* same iter space */
                        {
                            var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) var_12))));
                            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) var_5))));
                            var_33 ^= ((/* implicit */long long int) arr_19 [i_8 + 1] [i_8] [i_8] [i_8] [i_8] [(signed char)7] [5]);
                            var_34 = ((/* implicit */unsigned char) var_5);
                            var_35 = ((/* implicit */unsigned short) -9223372036854775807LL);
                        }
                        for (short i_11 = 1; i_11 < 11; i_11 += 4) /* same iter space */
                        {
                            arr_40 [i_1] [i_1] [i_0] [i_1] [i_11] = ((/* implicit */long long int) var_12);
                            var_36 = ((/* implicit */unsigned int) ((278738842) != ((~(((/* implicit */int) var_10))))));
                        }
                        for (short i_12 = 1; i_12 < 11; i_12 += 4) /* same iter space */
                        {
                            arr_43 [i_1] [i_8] [i_1] = ((/* implicit */long long int) var_3);
                            arr_44 [i_1] [i_1] = ((/* implicit */long long int) var_3);
                            arr_45 [i_1] [i_1] = ((/* implicit */signed char) arr_31 [i_0] [i_1] [i_2] [i_8] [i_1] [i_1] [i_0]);
                        }
                    }
                }
                /* vectorizable */
                for (unsigned int i_13 = 0; i_13 < 14; i_13 += 2) 
                {
                    arr_49 [(signed char)6] [i_1] [i_1] = ((/* implicit */unsigned int) arr_32 [i_1] [i_1]);
                    var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) var_11))));
                    /* LoopSeq 2 */
                    for (unsigned int i_14 = 2; i_14 < 13; i_14 += 3) /* same iter space */
                    {
                        var_38 = ((/* implicit */signed char) ((long long int) ((long long int) arr_31 [2U] [i_1] [i_13] [i_14] [i_14 - 1] [i_1] [i_14])));
                        var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) ? (5757911500633323592LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [9LL] [i_13] [i_14] [i_14]))))) == (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-122))))))))));
                    }
                    for (unsigned int i_15 = 2; i_15 < 13; i_15 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_16 = 1; i_16 < 13; i_16 += 1) 
                        {
                            arr_56 [i_0] [i_1] [i_1] [i_15] [i_16 - 1] = ((/* implicit */signed char) 2333726844U);
                            var_40 = ((/* implicit */unsigned short) (+(var_5)));
                            var_41 ^= ((/* implicit */unsigned short) 5757911500633323594LL);
                        }
                        arr_57 [i_1] [i_15] = arr_9 [i_1] [i_1];
                    }
                    arr_58 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_46 [i_0] [10] [i_0]))) ? (((/* implicit */unsigned long long int) ((int) var_4))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_0)) : (var_5)))));
                }
                for (short i_17 = 1; i_17 < 12; i_17 += 2) 
                {
                    /* LoopSeq 2 */
                    for (int i_18 = 0; i_18 < 14; i_18 += 4) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_19 = 0; i_19 < 14; i_19 += 1) /* same iter space */
                        {
                            var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) ((unsigned short) ((signed char) var_9))))));
                            var_43 = ((/* implicit */unsigned short) var_13);
                            arr_69 [i_0] [(unsigned char)6] [i_1] = ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
                            var_44 = ((/* implicit */unsigned int) arr_36 [i_1] [i_17] [i_19]);
                        }
                        for (int i_20 = 0; i_20 < 14; i_20 += 1) /* same iter space */
                        {
                            arr_72 [i_1] = ((/* implicit */unsigned long long int) var_6);
                            arr_73 [i_0] [i_1] [i_18] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [6ULL] [i_1] [i_18] [i_1])) ? (((/* implicit */int) arr_33 [i_20])) : (((((/* implicit */int) arr_10 [i_1] [i_0])) * (((/* implicit */int) var_6))))));
                        }
                        for (int i_21 = 0; i_21 < 14; i_21 += 1) /* same iter space */
                        {
                            arr_77 [i_17] [(unsigned char)7] [i_17] [i_1] [i_1] = ((/* implicit */unsigned short) arr_18 [i_0] [i_1] [(signed char)12] [i_18] [i_0]);
                            arr_78 [i_0] [i_1] [i_17 + 2] [i_17 + 2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)1321)) ? (((((unsigned int) var_13)) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [i_21])) ? (-633423978) : (((/* implicit */int) var_7))))))) : (((/* implicit */unsigned int) min(((-(((/* implicit */int) var_7)))), (((/* implicit */int) arr_39 [i_0] [i_1] [i_1] [3] [i_21] [i_1] [i_17])))))));
                        }
                        arr_79 [i_1] [i_17] [i_1] [i_1] = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-72)) ? (2333726850U) : (17U)))) ? (((((/* implicit */_Bool) arr_67 [i_0] [i_1] [i_17] [i_0] [i_0])) ? (var_3) : (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_13))))))));
                        arr_80 [i_1] [i_18] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 2333726844U)) ? (((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_6))))))));
                        arr_81 [i_1] = ((/* implicit */unsigned int) var_2);
                    }
                    /* vectorizable */
                    for (short i_22 = 0; i_22 < 14; i_22 += 1) 
                    {
                        var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) * (((/* implicit */int) (signed char)-122))));
                        var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) 523776))));
                    }
                    var_47 *= ((/* implicit */signed char) (+(min((((((/* implicit */_Bool) var_0)) ? (arr_1 [i_0]) : (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) ((unsigned int) arr_71 [i_0] [i_0] [i_0] [i_1] [i_17] [i_17])))))));
                }
            }
        } 
    } 
}
