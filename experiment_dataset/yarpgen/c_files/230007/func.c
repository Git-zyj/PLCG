/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230007
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
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned long long int) min(((+(arr_0 [i_1]))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_1]))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    arr_9 [i_1] [i_2] = ((/* implicit */unsigned long long int) (+(arr_8 [i_2] [i_1] [i_1] [i_2])));
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 10; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [(signed char)6] [i_2] [i_4] = ((/* implicit */_Bool) arr_11 [i_2] [i_3] [i_2] [i_0] [i_0] [i_2]);
                                arr_15 [i_0] [2LL] [i_2] [i_1] [i_4] &= ((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_3 + 1] [i_3 + 2] [i_3 + 1] [i_0]);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        arr_18 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_13 [i_0] [10] [i_2] [i_2] [i_2] [i_2]);
                        arr_19 [i_0] [i_0] [i_0] = arr_3 [i_0];
                    }
                    for (unsigned long long int i_6 = 1; i_6 < 8; i_6 += 2) 
                    {
                        arr_24 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) arr_16 [i_6 + 3] [i_2] [i_2] [i_2] [i_6 + 3] [i_6]);
                        arr_25 [i_0] [i_2] [i_0] [i_6 + 1] = ((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_1] [i_2] [i_2]);
                    }
                    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        arr_29 [i_0] [i_0] [i_2] [i_2] [i_7] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_2]))));
                        arr_30 [i_0] [i_2] [i_2] [0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_1] [(short)11] [i_7]))));
                        arr_31 [i_1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                        arr_32 [i_7] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) arr_11 [i_0] [i_2] [(unsigned short)6] [(unsigned char)3] [i_2] [i_2]);
                    }
                    for (short i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 4) 
                        {
                            arr_38 [i_9] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? (arr_8 [i_1] [i_2] [(unsigned char)7] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_2] [i_2] [i_8] [i_2] [i_8])))));
                            arr_39 [i_2] [i_8] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((arr_37 [i_2] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_8] [i_1] [i_9] [i_9] [i_9] [i_2] [i_0]))) : (arr_7 [i_0] [i_2] [i_9])));
                        }
                        for (unsigned short i_10 = 0; i_10 < 12; i_10 += 2) /* same iter space */
                        {
                            arr_42 [i_2] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */int) arr_21 [7ULL] [i_2] [7ULL] [3LL]);
                            arr_43 [i_0] [i_0] [i_0] [i_8] [i_0] [i_10] = ((((/* implicit */_Bool) arr_23 [i_1] [i_0] [i_0] [i_8])) ? (arr_23 [i_0] [i_1] [i_2] [i_1]) : (arr_23 [i_0] [i_0] [i_0] [i_0]));
                        }
                        for (unsigned short i_11 = 0; i_11 < 12; i_11 += 2) /* same iter space */
                        {
                            arr_46 [i_2] [i_2] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_8] [i_2]);
                            arr_47 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-23))));
                            arr_48 [i_2] [i_1] [i_2] [i_8] [i_11] [i_11] = ((/* implicit */_Bool) arr_45 [(short)2] [i_1] [(_Bool)1] [i_8] [i_2]);
                            arr_49 [6ULL] [i_0] [i_0] [i_0] &= ((/* implicit */long long int) arr_3 [i_0]);
                        }
                        arr_50 [4ULL] [i_1] [i_0] [i_0] [i_0] &= ((/* implicit */long long int) arr_2 [i_1]);
                        arr_51 [i_0] [i_1] [(_Bool)1] [i_2] = ((/* implicit */_Bool) arr_33 [i_2] [i_1]);
                        arr_52 [i_0] [i_8] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_40 [i_1] [i_0]))));
                    }
                    arr_53 [i_0] [i_2] [(signed char)11] = ((/* implicit */signed char) (!(((/* implicit */_Bool) -1379497656))));
                }
                /* vectorizable */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_13 = 0; i_13 < 12; i_13 += 4) 
                    {
                        for (long long int i_14 = 1; i_14 < 11; i_14 += 4) 
                        {
                            {
                                arr_60 [i_13] [i_12] [i_12] [i_12] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_14] [i_12] [i_14 - 1] [i_14] [i_14] [i_12] [(unsigned char)6]))));
                                arr_61 [i_12] [i_1] [i_12] [i_12] [i_12] [2LL] = ((/* implicit */_Bool) arr_44 [i_14 + 1] [i_14 - 1] [i_14] [i_14 - 1] [i_14 - 1] [i_14] [i_14]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_15 = 1; i_15 < 11; i_15 += 4) 
                    {
                        arr_64 [i_15] [i_12] [i_0] = arr_7 [i_1] [i_12] [i_15];
                        arr_65 [i_0] [i_0] [i_12] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [7LL] [i_1])) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_12] [i_12] [1U] [i_15 + 1])) ? (arr_8 [i_0] [i_1] [i_12] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0] [i_0] [i_12] [i_15 + 1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [6ULL] [8LL] [(_Bool)1] [i_12])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_45 [i_0] [i_1] [i_12] [i_12] [i_12])))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_16 = 0; i_16 < 12; i_16 += 2) 
                        {
                            arr_68 [i_0] [(signed char)5] [i_12] [i_12] [i_1] [i_0] [i_0] = (~(((/* implicit */int) arr_13 [i_0] [i_0] [i_12] [7ULL] [7ULL] [i_12])));
                            arr_69 [i_12] [i_1] [i_12] [i_12] [(unsigned short)8] [i_12] = ((/* implicit */signed char) (+(arr_7 [i_15 + 1] [(signed char)1] [(signed char)1])));
                            arr_70 [i_12] [i_12] [i_12] = arr_54 [i_12];
                        }
                        for (unsigned char i_17 = 0; i_17 < 12; i_17 += 2) 
                        {
                            arr_73 [i_0] [i_0] [i_0] [2LL] = ((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_15] [i_1]);
                            arr_74 [i_0] [i_0] [i_0] [i_12] [i_0] = ((/* implicit */_Bool) arr_35 [i_15 - 1] [i_12] [i_12] [i_15 + 1]);
                        }
                        arr_75 [i_12] [i_12] [(_Bool)1] [i_12] = ((/* implicit */unsigned char) arr_36 [i_0] [i_12] [i_0] [i_0] [i_0]);
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 12; i_18 += 2) 
                    {
                        for (long long int i_19 = 0; i_19 < 12; i_19 += 4) 
                        {
                            {
                                arr_80 [i_0] [4LL] [i_12] [i_0] [i_12] = ((/* implicit */signed char) arr_57 [i_12] [i_1] [i_12] [i_19]);
                                arr_81 [i_12] [i_12] [i_19] [i_12] [i_19] [i_18] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_36 [i_0] [i_12] [i_12] [i_12] [i_19]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_20 = 0; i_20 < 12; i_20 += 4) 
                    {
                        for (int i_21 = 0; i_21 < 12; i_21 += 2) 
                        {
                            {
                                arr_90 [i_21] [i_20] [i_12] [i_12] [i_1] [i_0] = arr_54 [i_12];
                                arr_91 [i_12] [i_20] [i_12] [i_1] [i_12] = ((/* implicit */long long int) arr_58 [i_0] [i_1] [i_12] [i_20] [i_21] [i_21] [i_20]);
                                arr_92 [i_20] [i_1] [i_1] = (-(arr_63 [i_0] [i_1]));
                            }
                        } 
                    } 
                }
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
                {
                    arr_97 [(_Bool)1] [i_1] [(_Bool)1] = arr_17 [i_0] [i_0] [i_1] [i_1] [i_22] [i_22];
                    arr_98 [i_1] [i_22] = ((/* implicit */signed char) (-(((/* implicit */int) arr_56 [i_0] [i_0] [i_1] [i_0]))));
                }
                /* LoopNest 3 */
                for (long long int i_23 = 2; i_23 < 11; i_23 += 4) 
                {
                    for (unsigned char i_24 = 0; i_24 < 12; i_24 += 2) 
                    {
                        for (int i_25 = 0; i_25 < 12; i_25 += 2) 
                        {
                            {
                                arr_106 [i_0] [i_0] [i_23] [i_24] [i_23] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-128))));
                                arr_107 [i_0] [i_1] [i_1] [i_23] [7U] [i_24] [i_23] = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_101 [i_23 + 1] [i_23 + 1] [i_23 + 1]))))));
                                arr_108 [7] [i_1] [i_23 - 2] [(short)3] [i_25] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 0U)))) ? (5776019801056550022ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_25] [i_1] [i_23] [(_Bool)1] [i_24] [i_24])) ? (1379497656) : (((/* implicit */int) (_Bool)1)))))));
                                arr_109 [3] [i_24] [i_1] [i_1] [(unsigned char)5] &= ((/* implicit */unsigned long long int) arr_100 [(signed char)9] [(signed char)9]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) (+(var_1)));
    var_15 = ((/* implicit */unsigned long long int) min((var_0), (((/* implicit */unsigned short) var_8))));
}
