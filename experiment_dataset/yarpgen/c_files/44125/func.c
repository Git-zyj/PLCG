/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44125
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
    var_12 = ((/* implicit */long long int) var_7);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0] [0LL]))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_14 += ((/* implicit */short) arr_6 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
                                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_3] [i_2])) ? (arr_13 [i_4] [i_4] [i_3 - 1] [i_3 + 2] [i_2] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0])))));
                                var_16 = arr_14 [i_0] [i_3 + 3] [i_0] [i_1] [i_0];
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
    {
        arr_20 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_5] [i_5] [i_5])) ? (arr_3 [i_5] [i_5]) : (arr_13 [i_5] [i_5] [i_5] [i_5] [(unsigned char)1] [i_5] [i_5])));
        arr_21 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_5] [i_5] [(short)7] [i_5] [i_5])) ? (((/* implicit */unsigned int) arr_16 [i_5])) : (arr_5 [1ULL] [1ULL] [i_5])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_5])) ? (((/* implicit */int) arr_6 [1U])) : (((/* implicit */int) arr_14 [i_5] [10] [i_5] [i_5] [(_Bool)0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned short)4] [i_5]))) : (((arr_17 [i_5] [i_5]) ? (arr_5 [i_5] [i_5] [1LL]) : (arr_5 [i_5] [i_5] [i_5])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */long long int) arr_16 [4LL])) : (arr_10 [10LL])))) ? (arr_10 [(short)0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(signed char)4])))))));
    }
    var_17 = var_11;
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (short i_7 = 0; i_7 < 14; i_7 += 1) 
        {
            {
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_6] [i_7]))) : (8646911284551352320LL)))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_6] [i_7])))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_22 [i_6] [12]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 3; i_9 < 13; i_9 += 3) 
                    {
                        arr_31 [i_6] [i_7] = ((/* implicit */unsigned int) arr_25 [8U] [i_7]);
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) arr_22 [i_6] [0LL]))));
                        arr_32 [i_9 - 2] [i_6] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [(short)9])) ? (((((/* implicit */_Bool) arr_28 [(short)3] [i_7] [i_8])) ? (arr_28 [i_6] [i_7] [i_8]) : (((/* implicit */unsigned int) arr_24 [i_6] [i_6] [i_6])))) : (arr_26 [i_9])));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [11ULL] [i_6])) ? (arr_26 [i_7]) : (((/* implicit */unsigned int) arr_24 [i_6] [(_Bool)0] [i_6]))))) ? (arr_23 [i_6]) : (((/* implicit */long long int) arr_30 [i_7] [i_8] [i_7] [i_6]))));
                    }
                    /* LoopSeq 3 */
                    for (long long int i_10 = 0; i_10 < 14; i_10 += 3) 
                    {
                        var_22 = ((/* implicit */signed char) arr_35 [i_6] [i_6] [i_8] [i_8] [i_10] [i_6]);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_11 = 3; i_11 < 11; i_11 += 1) 
                        {
                            arr_39 [13ULL] [i_6] [i_8] = ((/* implicit */short) arr_35 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]);
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_6] [i_6])) ? (((/* implicit */int) arr_35 [i_10] [i_10] [i_10] [5LL] [i_10] [i_6])) : (((/* implicit */int) arr_25 [i_6] [i_7]))))) ? (((/* implicit */long long int) arr_28 [i_10] [(short)4] [i_6])) : (((((/* implicit */_Bool) arr_36 [i_6] [i_6] [i_6])) ? (arr_23 [i_6]) : (((/* implicit */long long int) arr_28 [4] [i_7] [i_7]))))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 14; i_12 += 3) 
                        {
                            var_24 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_41 [i_6] [i_6] [i_6] [i_6] [i_6]) ? (((/* implicit */int) arr_36 [i_10] [i_7] [i_6])) : (((/* implicit */int) arr_27 [(signed char)12] [6ULL]))))) ? (((((/* implicit */_Bool) arr_40 [i_6] [(_Bool)1] [i_8] [i_10] [i_12] [3LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_6] [i_7] [i_8] [i_12] [i_10]))) : (arr_28 [i_12] [i_8] [i_7]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_6] [i_12] [i_8] [i_10])))));
                            var_25 = ((/* implicit */signed char) arr_30 [i_6] [i_7] [i_6] [i_10]);
                        }
                        /* LoopSeq 2 */
                        for (long long int i_13 = 0; i_13 < 14; i_13 += 2) /* same iter space */
                        {
                            arr_46 [i_13] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_13])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_8] [i_10] [i_13])) ? (arr_24 [i_7] [i_8] [i_8]) : (((/* implicit */int) arr_29 [i_10] [i_7] [i_10] [i_10]))))) : (arr_30 [i_8] [i_6] [i_7] [i_13])));
                            arr_47 [i_6] [i_7] [i_6] [i_13] [4U] |= arr_37 [i_6] [i_6] [i_8] [i_10] [i_13] [i_7] [i_10];
                            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) arr_42 [i_13] [6U]))));
                            arr_48 [i_13] [i_6] [(_Bool)1] [i_8] [i_6] [i_6] = ((/* implicit */unsigned short) arr_27 [i_13] [i_6]);
                        }
                        for (long long int i_14 = 0; i_14 < 14; i_14 += 2) /* same iter space */
                        {
                            var_27 = arr_24 [i_6] [(_Bool)1] [i_14];
                            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) arr_24 [i_6] [i_6] [i_6]))));
                        }
                        arr_52 [i_6] [i_6] [i_7] [i_7] [i_6] = arr_43 [i_6] [i_7] [i_7] [i_7] [11] [i_10] [i_10];
                    }
                    for (unsigned short i_15 = 2; i_15 < 13; i_15 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (short i_16 = 0; i_16 < 14; i_16 += 2) /* same iter space */
                        {
                            var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) ? (arr_43 [i_6] [i_6] [i_8] [i_8] [i_15] [i_15] [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_6] [i_16])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_7] [i_7] [i_6] [i_15 + 1] [i_16] [i_8]))) : (((((/* implicit */_Bool) arr_40 [i_6] [i_6] [2U] [i_6] [i_6] [i_6])) ? (((/* implicit */long long int) arr_49 [i_16] [i_16] [(unsigned short)2] [i_8] [i_7] [i_7] [i_6])) : (arr_22 [(short)9] [i_6]))));
                            var_30 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_6] [i_7] [i_15] [i_16]))) : (arr_44 [i_6] [i_7] [i_7] [i_8] [i_8] [i_15 + 1] [i_16])));
                            arr_57 [(short)12] [i_7] [i_8] [i_15 - 2] [i_6] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_8] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_6] [i_6] [i_6] [i_6] [(unsigned short)9] [i_6] [i_6]))) : (((((/* implicit */_Bool) arr_26 [i_7])) ? (((/* implicit */unsigned int) arr_37 [(unsigned short)9] [i_15] [i_8] [i_8] [i_8] [i_7] [i_16])) : (arr_26 [i_8])))));
                            var_31 = ((/* implicit */signed char) arr_30 [i_6] [i_8] [12U] [i_16]);
                            arr_58 [(short)8] [i_7] [i_8] [i_15] [i_6] = ((/* implicit */_Bool) arr_44 [i_7] [i_7] [13LL] [13LL] [i_7] [i_7] [i_16]);
                        }
                        for (short i_17 = 0; i_17 < 14; i_17 += 2) /* same iter space */
                        {
                            var_32 |= ((/* implicit */_Bool) arr_49 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]);
                            var_33 = ((/* implicit */long long int) arr_56 [i_6] [(unsigned short)8] [6] [(unsigned char)3] [i_17]);
                        }
                        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_6] [i_6] [(signed char)0] [i_8] [i_8] [(signed char)0] [i_15])) ? (((/* implicit */int) arr_60 [i_6] [i_6] [i_7] [i_7] [i_8] [i_8] [i_15 - 2])) : (arr_50 [i_6] [i_15 - 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_6] [(short)3] [i_8] [i_15 - 2]))) : (((((/* implicit */_Bool) arr_43 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) arr_37 [i_15] [i_15] [i_8] [12U] [i_7] [1U] [i_6])) : (arr_61 [(short)2] [i_8] [i_7] [i_6] [i_6])))));
                        var_35 -= ((/* implicit */long long int) arr_55 [i_6] [i_6] [(short)6] [i_8] [i_8]);
                        var_36 = ((/* implicit */long long int) arr_41 [i_6] [i_8] [12] [i_7] [12]);
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_6] [i_6])) ? (((/* implicit */unsigned long long int) arr_50 [9ULL] [i_6])) : (arr_63 [i_6])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_6] [i_7] [i_8] [0LL] [i_18]))) : (((arr_33 [i_6] [i_6] [i_8] [i_6]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_18] [i_8] [i_7] [i_6]))) : (arr_26 [i_18])))));
                        /* LoopSeq 2 */
                        for (unsigned int i_19 = 1; i_19 < 10; i_19 += 3) 
                        {
                            var_38 |= ((/* implicit */_Bool) arr_27 [i_6] [(unsigned char)10]);
                            var_39 |= ((((/* implicit */_Bool) arr_62 [i_6] [i_7] [(short)5] [i_8])) ? (((/* implicit */unsigned long long int) arr_24 [i_8] [(signed char)13] [i_7])) : (arr_61 [i_19] [i_7] [i_8] [i_19] [(short)4]));
                            var_40 = ((/* implicit */_Bool) arr_36 [i_19] [i_18] [i_7]);
                            var_41 = ((/* implicit */int) arr_35 [(_Bool)1] [i_18] [i_8] [i_7] [i_6] [(_Bool)1]);
                            var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) ((((/* implicit */_Bool) -8646911284551352320LL)) ? (((/* implicit */int) (unsigned short)27197)) : (((/* implicit */int) (short)-27036)))))));
                        }
                        for (unsigned char i_20 = 2; i_20 < 13; i_20 += 3) 
                        {
                            arr_69 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_40 [i_20 - 1] [i_20 - 1] [i_18] [i_8] [i_7] [i_6]);
                            var_43 = ((/* implicit */short) arr_61 [i_20] [i_20 + 1] [i_20] [i_20] [i_20]);
                        }
                        arr_70 [i_6] [i_7] = ((/* implicit */long long int) arr_26 [i_8]);
                    }
                    var_44 |= ((/* implicit */unsigned short) arr_59 [2U] [2U]);
                }
                var_45 = ((/* implicit */unsigned long long int) arr_36 [i_7] [i_6] [i_6]);
            }
        } 
    } 
}
