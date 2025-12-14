/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24834
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
    var_18 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_17)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (unsigned short i_3 = 1; i_3 < 18; i_3 += 2) 
                {
                    {
                        var_19 = arr_9 [i_3 + 1] [i_3 - 1] [i_3] [i_3 + 1];
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) 3930301002705919849LL))));
                        arr_12 [i_3] [i_2] [i_1] [i_0] [i_3] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_10 [i_0] [12ULL] [i_2] [i_3 + 1])))) || ((!(((/* implicit */_Bool) var_2))))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_14), (((/* implicit */unsigned short) var_15)))))))));
        arr_14 [i_0] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_15))))) : (((((/* implicit */long long int) 2038447922)) / (-3930301002705919861LL))))));
    }
    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned short i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    {
                        var_21 ^= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 3930301002705919852LL)) ? (-3930301002705919842LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14867)))))));
                        arr_25 [i_7] [i_6] [i_6] [i_4] = ((/* implicit */signed char) (unsigned char)255);
                        /* LoopSeq 3 */
                        for (signed char i_8 = 0; i_8 < 23; i_8 += 4) 
                        {
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (unsigned short)20080))));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_20 [21ULL]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_4] [i_4] [i_4]))) : (((unsigned int) arr_18 [i_4]))));
                            arr_29 [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_15 [i_5] [i_8])) - (((/* implicit */int) arr_15 [i_4] [i_8])))) <= (((((/* implicit */_Bool) arr_15 [i_5] [i_8])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_15 [i_4] [(short)10]))))));
                            var_24 = ((/* implicit */short) var_1);
                        }
                        /* vectorizable */
                        for (unsigned short i_9 = 1; i_9 < 22; i_9 += 1) 
                        {
                            var_25 = ((/* implicit */int) var_6);
                            var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_18 [i_9 + 1]))));
                        }
                        for (unsigned int i_10 = 1; i_10 < 20; i_10 += 3) 
                        {
                            var_27 = ((/* implicit */long long int) min((((/* implicit */int) var_3)), (((((/* implicit */int) ((unsigned short) var_11))) & (((/* implicit */int) min((var_16), (var_16))))))));
                            arr_35 [i_4] [i_5] [i_5] [i_5] [i_6] [i_7] [i_6] = ((/* implicit */unsigned char) -273301479);
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 2) 
                        {
                            var_28 = ((/* implicit */int) ((unsigned long long int) ((((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_17)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_18 [i_4])))));
                            var_29 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_39 [i_4] [(unsigned char)18] [(signed char)12] [i_6] [i_7] [i_11])) ? (arr_30 [i_4] [i_5]) : (arr_34 [7LL] [7LL] [7LL] [i_6] [i_7] [(short)12] [7LL]))), (((int) 3930301002705919849LL))));
                            arr_40 [i_4] [i_5] [i_6] [(unsigned short)20] [i_11] = ((/* implicit */unsigned long long int) ((signed char) arr_16 [i_4] [i_4]));
                            arr_41 [i_4] [i_6] [(unsigned short)5] [18ULL] [(unsigned short)5] [i_11] = ((/* implicit */unsigned short) arr_37 [i_7] [i_7] [i_7] [i_4] [i_5] [i_4]);
                        }
                        for (unsigned char i_12 = 0; i_12 < 23; i_12 += 2) 
                        {
                            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) 244875274)) ? (((((((/* implicit */_Bool) -3930301002705919858LL)) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) arr_19 [8LL] [i_5] [i_5])))) << (((arr_24 [i_4] [i_5] [i_6] [i_7] [i_5]) - (7277611811427447484LL))))) : (((((/* implicit */_Bool) arr_28 [i_4] [i_4] [i_5] [i_6] [i_7] [i_12])) ? (((/* implicit */int) arr_20 [i_4])) : (((/* implicit */int) arr_20 [i_6]))))));
                            var_31 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_16 [i_5] [i_12])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_39 [i_4] [20U] [i_4] [i_4] [i_4] [i_4]))))) : (((((/* implicit */_Bool) ((long long int) (signed char)-10))) ? (arr_38 [i_4] [i_5] [i_6] [(unsigned short)5] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_13))))))));
                            var_32 = ((/* implicit */unsigned long long int) (!((_Bool)1)));
                        }
                        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_4] [i_4] [i_6] [i_7] [1LL])) ? (((/* implicit */int) arr_36 [i_7] [3U] [i_6] [3U] [i_4])) : (((/* implicit */int) arr_36 [i_4] [i_4] [i_4] [(signed char)15] [i_4]))))) - (((unsigned long long int) arr_36 [i_4] [i_4] [i_4] [i_4] [i_4])))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_13 = 1; i_13 < 22; i_13 += 3) 
        {
            arr_47 [i_4] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (arr_30 [i_13 + 1] [(signed char)20]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_13 - 1] [i_13 - 1])))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_15 = 3; i_15 < 19; i_15 += 2) 
                {
                    for (unsigned int i_16 = 4; i_16 < 22; i_16 += 2) 
                    {
                        {
                            var_34 = ((/* implicit */int) (-((-(3930301002705919857LL)))));
                            arr_59 [i_4] [i_13] [16U] [i_15] [i_16] = ((unsigned short) ((((/* implicit */int) arr_27 [i_16 - 2] [8ULL] [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_4])) == (arr_34 [i_4] [i_13 - 1] [i_14] [i_13 - 1] [i_16] [(unsigned short)22] [(short)3])));
                            var_35 = ((/* implicit */signed char) (unsigned short)56941);
                            arr_60 [i_4] [i_4] [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_17 [i_15])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_14))))));
                            arr_61 [i_4] [i_13] [i_14] [i_13] [i_16] [i_16] [3LL] = ((/* implicit */long long int) var_3);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_17 = 1; i_17 < 21; i_17 += 4) 
                {
                    var_36 = ((/* implicit */unsigned long long int) min((var_36), (((((/* implicit */_Bool) arr_49 [i_13 + 1] [i_13 + 1] [i_17 + 2] [i_17])) ? (arr_49 [i_13 + 1] [i_13 + 1] [i_17 + 2] [i_13 + 1]) : (arr_49 [i_13 - 1] [(unsigned char)6] [i_17 - 1] [i_17 + 1])))));
                    /* LoopSeq 1 */
                    for (unsigned char i_18 = 0; i_18 < 23; i_18 += 1) 
                    {
                        var_37 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) -3930301002705919853LL)) >= (arr_51 [i_17 + 2] [i_13 + 1])));
                        arr_66 [i_14] [i_18] [i_14] [i_18] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_63 [i_13] [i_13 - 1] [i_13 + 1] [i_13 + 1]))));
                        var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) -244875275)) <= (arr_48 [i_14])));
                    }
                }
            }
            for (unsigned long long int i_19 = 0; i_19 < 23; i_19 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_20 = 1; i_20 < 21; i_20 += 2) 
                {
                    for (unsigned short i_21 = 0; i_21 < 23; i_21 += 2) 
                    {
                        {
                            var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) != (((unsigned long long int) var_12)))) ? (2596008870555906759ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-108))) / (3930301002705919849LL))) > (((/* implicit */long long int) ((/* implicit */int) arr_58 [i_20 + 1] [(_Bool)1] [17LL]))))))))))));
                            var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) var_7))));
                        }
                    } 
                } 
                arr_76 [i_19] [i_19] [i_13] [i_4] |= (-(((/* implicit */int) (signed char)99)));
                /* LoopSeq 2 */
                for (signed char i_22 = 0; i_22 < 23; i_22 += 3) 
                {
                    var_41 = ((/* implicit */unsigned short) var_16);
                    arr_79 [i_22] [i_22] [i_22] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
                }
                for (unsigned char i_23 = 0; i_23 < 23; i_23 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_24 = 1; i_24 < 22; i_24 += 2) 
                    {
                        var_42 = ((/* implicit */unsigned long long int) ((int) ((unsigned long long int) arr_24 [i_13 + 1] [i_13] [i_13] [i_13] [i_13])));
                        arr_86 [i_4] [i_13 + 1] [i_19] [i_23] [i_24 - 1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [11] [i_4] [i_4])) ? (arr_23 [(unsigned char)1] [i_13 - 1] [(unsigned char)1] [i_23] [i_23] [i_24]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))) ? (((/* implicit */int) ((unsigned short) arr_20 [i_24 - 1]))) : (((/* implicit */int) var_15))));
                        arr_87 [i_4] [i_4] = (!(((/* implicit */_Bool) var_5)));
                    }
                    for (long long int i_25 = 1; i_25 < 20; i_25 += 1) /* same iter space */
                    {
                        var_43 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) min((15850735203153644856ULL), (((/* implicit */unsigned long long int) arr_70 [(unsigned short)0] [i_13] [i_13 + 1] [(unsigned short)0])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61082))))) : (((/* implicit */int) arr_27 [i_4] [i_13] [i_13 + 1] [i_13] [i_23] [(unsigned short)5]))));
                        arr_90 [i_4] [i_13] [i_13] [i_23] [i_13] &= arr_15 [i_4] [(signed char)0];
                    }
                    for (long long int i_26 = 1; i_26 < 20; i_26 += 1) /* same iter space */
                    {
                        var_44 = ((/* implicit */unsigned long long int) arr_88 [i_4] [i_13 + 1] [i_19] [(signed char)5] [i_26 + 2]);
                        arr_94 [i_26] [(signed char)13] [i_23] [i_19] [i_19] [i_13] [i_26] = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) (!(((((/* implicit */int) var_14)) >= (((/* implicit */int) (unsigned short)7))))))), (((signed char) var_14))));
                    }
                    arr_95 [i_4] [i_13 + 1] [i_4] [i_23] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_54 [i_13 - 1] [i_13 - 1] [i_13 + 1] [i_13 + 1] [i_13 + 1])) ? (arr_67 [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))));
                }
            }
            /* LoopSeq 2 */
            for (unsigned short i_27 = 0; i_27 < 23; i_27 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_28 = 0; i_28 < 23; i_28 += 1) 
                {
                    arr_100 [i_4] [i_4] [i_27] [i_28] [i_28] = ((/* implicit */unsigned short) arr_80 [(unsigned short)11] [i_13] [i_13 - 1] [i_13] [i_13] [i_13]);
                    arr_101 [i_4] [i_4] [i_13] [i_27] [1U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_10) : (var_10)))) ? (arr_16 [i_13 + 1] [i_13 - 1]) : (((((/* implicit */_Bool) arr_83 [i_4] [i_13 - 1] [i_27])) ? (((/* implicit */unsigned long long int) var_8)) : (var_1)))));
                }
                var_45 = ((/* implicit */unsigned short) (-(((long long int) var_8))));
                /* LoopSeq 1 */
                for (unsigned short i_29 = 0; i_29 < 23; i_29 += 3) 
                {
                    var_46 = ((/* implicit */unsigned int) (-(3930301002705919852LL)));
                    var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) ((((/* implicit */_Bool) arr_26 [(unsigned short)14] [(unsigned short)18] [(unsigned short)18] [i_4] [i_29])) ? (((/* implicit */long long int) ((arr_67 [i_4] [i_13] [i_27] [i_29]) * (((/* implicit */unsigned int) (+(((/* implicit */int) var_17)))))))) : ((-(arr_24 [i_13] [i_13 - 1] [(short)19] [i_13 + 1] [i_13]))))))));
                    var_48 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) arr_19 [i_4] [14] [(unsigned short)13])), (arr_42 [i_4] [i_13] [i_27] [i_29] [i_13 - 1]))) | (min((arr_42 [i_4] [i_13] [i_27] [i_29] [i_13 + 1]), (arr_42 [15LL] [i_13] [i_13] [i_29] [i_13 + 1])))));
                }
            }
            for (long long int i_30 = 1; i_30 < 22; i_30 += 1) 
            {
                arr_106 [i_4] [i_4] &= ((/* implicit */unsigned short) ((-244875274) ^ (-1973961022)));
                var_49 = ((/* implicit */int) var_0);
                arr_107 [i_4] [i_13] = arr_33 [i_30 + 1] [i_30 - 1] [i_30 - 1] [i_30 + 1] [i_30] [i_30];
            }
            var_50 = ((/* implicit */_Bool) var_16);
        }
        var_51 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_78 [i_4] [i_4] [i_4] [i_4]), (arr_78 [i_4] [i_4] [i_4] [i_4]))))));
        var_52 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_82 [i_4] [i_4] [i_4] [i_4])))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_19 [i_4] [i_4] [15ULL]))))));
    }
}
