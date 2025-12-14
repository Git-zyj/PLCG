/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19512
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
    var_18 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_1] [(unsigned char)17] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 + 2] [i_1 + 1])) ? (((/* implicit */int) arr_1 [i_1 + 2] [i_1 + 1])) : (((/* implicit */int) var_6)))))));
                        arr_12 [i_3] [i_2] [i_2] [i_3] = ((/* implicit */short) max((((/* implicit */int) ((unsigned char) arr_8 [i_0] [i_1 + 2] [i_1 + 1] [i_3]))), (((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 1] [5ULL] [i_1 - 2])) : (((/* implicit */int) arr_2 [i_0 + 1]))))));
                    }
                    var_19 += ((/* implicit */long long int) arr_8 [i_0] [i_1] [i_1 - 2] [i_0 - 4]);
                }
                for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned int) arr_13 [i_0] [i_0]))), (max((arr_3 [i_0 - 4]), (arr_3 [12U])))))) ? (var_10) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_8 [i_0] [i_1] [i_4] [i_4])), ((~(arr_9 [i_4] [i_0] [i_0] [i_0 - 4]))))))));
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_14 [i_0] [i_0] [10ULL] [10ULL]))));
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */signed char) arr_8 [i_0] [i_1] [i_4] [(short)6]);
                        var_23 |= ((/* implicit */short) arr_13 [i_1] [i_1]);
                    }
                    for (int i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_0 - 1])) ? (arr_10 [i_0] [i_1] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))))));
                        arr_19 [i_0] [i_1] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_13 [i_1 - 2] [i_0 - 2])))));
                    }
                    /* LoopSeq 3 */
                    for (long long int i_7 = 0; i_7 < 20; i_7 += 3) /* same iter space */
                    {
                        arr_22 [i_7] [i_4] [i_4] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) min((var_2), (((/* implicit */unsigned long long int) var_3))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_15)) : (((int) arr_1 [i_7] [i_4]))))) ? (arr_13 [i_1 - 1] [i_0 + 2]) : (max(((+(arr_21 [i_0] [i_1 - 2] [i_7] [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_17 [i_7] [(_Bool)1] [i_4] [i_1] [i_0])))))))));
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_15 [i_0] [i_0 + 2] [i_0] [i_0] [i_0])))) ? (arr_3 [i_0 + 1]) : (arr_0 [i_1 - 1])))) ? (((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */long long int) var_13)) : (arr_10 [i_0 - 4] [i_0] [i_0] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_7] [i_7] [i_4] [i_1] [i_0]))))))));
                    }
                    /* vectorizable */
                    for (long long int i_8 = 0; i_8 < 20; i_8 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_1] [i_1 + 1] [i_1 + 2] [i_4] [i_8])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [17LL] [i_1 - 3] [i_4] [i_4] [i_4])))));
                        /* LoopSeq 2 */
                        for (long long int i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            var_28 = ((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1])) ? (arr_3 [i_0 - 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_8] [i_4] [9LL] [i_0 - 1]))));
                            var_29 = ((/* implicit */short) var_9);
                            arr_27 [i_0] [i_1 + 1] [5ULL] [i_8] = ((((/* implicit */_Bool) arr_17 [i_8] [i_1] [i_4] [i_8] [i_9])) ? (arr_4 [i_9]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_9] [i_9] [i_8] [i_4] [2LL] [i_0])) ? (((/* implicit */int) arr_8 [6] [i_4] [i_8] [i_9])) : (((/* implicit */int) arr_1 [i_1] [i_0]))))));
                            var_30 |= ((/* implicit */unsigned char) var_12);
                        }
                        for (long long int i_10 = 0; i_10 < 20; i_10 += 3) 
                        {
                            arr_30 [i_0] [i_0] [i_0] [i_0 - 3] [(signed char)19] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 + 1])));
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_28 [i_0] [i_1] [i_1] [i_1] [i_1 - 3] [i_8])) ? (((/* implicit */int) arr_17 [i_1 - 2] [i_1 + 1] [i_0 + 1] [i_8] [i_10])) : (arr_29 [i_0 - 3] [i_0 + 1] [i_1 - 2] [(unsigned char)3] [i_1 - 2] [i_1] [i_10])));
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_6);
                            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_10]))));
                        }
                    }
                    for (long long int i_11 = 0; i_11 < 20; i_11 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_33 = ((/* implicit */int) arr_3 [i_11]);
                            var_34 = ((/* implicit */unsigned short) var_8);
                        }
                        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_0 - 3] [i_0] [i_0] [i_0] [i_0] [i_1 - 3])) ? ((-(arr_23 [6ULL] [i_1 - 3] [6ULL] [i_11] [i_1 - 1] [i_1 - 3]))) : (arr_23 [i_0] [i_1] [i_1] [i_11] [i_1] [i_1 - 3])));
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_5 [i_1 - 3] [i_1 + 1] [i_1 + 1] [i_0 - 4]))) ? (((/* implicit */int) max((arr_5 [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_0 + 2]), (arr_5 [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_0 + 3])))) : (((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 2] [i_1 - 2] [i_0 + 2]))));
                    }
                }
                /* vectorizable */
                for (long long int i_13 = 0; i_13 < 20; i_13 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 20; i_14 += 4) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 1) 
                        {
                            {
                                arr_45 [i_13] = ((/* implicit */long long int) (-(((/* implicit */int) var_15))));
                                var_37 = ((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_0] [i_0 - 1] [i_13] [i_1 + 2] [i_0] [i_14])) ? (arr_43 [i_0] [i_0 - 4] [i_13] [i_1 + 2] [i_15] [i_0 - 4]) : (arr_43 [i_0] [i_0 - 1] [i_13] [i_1 - 3] [i_15] [i_1 - 3])));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned char i_16 = 1; i_16 < 17; i_16 += 4) 
                    {
                        var_38 = ((/* implicit */short) ((((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_0] [i_16] [i_1])) ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0 - 2]) : (arr_15 [i_16] [i_16] [i_13] [16] [i_0])));
                        var_39 += ((/* implicit */unsigned int) arr_24 [i_0] [i_0] [i_0]);
                    }
                    for (unsigned int i_17 = 2; i_17 < 19; i_17 += 3) 
                    {
                        arr_52 [i_0] [(signed char)17] [18ULL] [i_13] [(unsigned char)18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [i_1 + 1] [i_17 + 1] [i_17] [i_17] [i_1 + 1])) ? (((/* implicit */int) arr_40 [i_1 - 1] [i_17] [9ULL] [(short)8] [16])) : (((/* implicit */int) arr_40 [i_1 - 1] [i_13] [7] [i_13] [i_17]))));
                        arr_53 [i_13] [i_13] = ((/* implicit */long long int) arr_44 [i_0 - 4] [i_13] [i_0] [i_0 - 2] [i_0]);
                    }
                    for (unsigned int i_18 = 0; i_18 < 20; i_18 += 3) 
                    {
                        var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) ((short) arr_9 [i_0] [i_0 - 4] [i_0] [i_0])))));
                        var_41 += ((/* implicit */unsigned int) var_3);
                    }
                }
                for (long long int i_19 = 0; i_19 < 20; i_19 += 1) /* same iter space */
                {
                    arr_60 [6ULL] [6ULL] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_49 [14]))));
                    arr_61 [i_19] [i_1] = ((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1] [i_19] [i_0]);
                    /* LoopNest 2 */
                    for (short i_20 = 0; i_20 < 20; i_20 += 1) 
                    {
                        for (unsigned long long int i_21 = 0; i_21 < 20; i_21 += 4) 
                        {
                            {
                                var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_0] [i_1 - 1]))))), (((((/* implicit */_Bool) arr_37 [i_1] [i_1 - 2])) ? (((/* implicit */int) arr_37 [i_1] [i_1 - 1])) : (((/* implicit */int) arr_37 [i_0] [i_1 - 2])))))))));
                                arr_67 [(unsigned char)2] [i_21] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0 - 4] [i_1 + 1] [(_Bool)1] [i_20] [i_21])) ? (arr_18 [i_0] [i_1 - 2] [i_19] [i_20] [i_21]) : (((/* implicit */long long int) var_4))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_5 [i_0] [i_0] [i_19] [i_20])), (arr_56 [i_0] [i_21] [i_0 - 2])))) : (((((/* implicit */_Bool) arr_9 [5ULL] [i_19] [1] [i_0 - 1])) ? (((((/* implicit */_Bool) arr_48 [i_21] [i_1] [i_19] [i_20])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 4] [i_0 - 4]))) : (arr_41 [i_20] [i_21] [i_19] [i_20] [i_19] [i_20]))) : (((/* implicit */unsigned long long int) arr_7 [i_0 - 1] [i_0 - 4] [i_0 - 4] [i_0 - 3]))))));
                            }
                        } 
                    } 
                    arr_68 [i_19] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((arr_44 [i_0] [i_19] [i_1] [i_1] [i_19]), (((/* implicit */signed char) var_15))))), (arr_0 [i_1])))) ? (max((arr_0 [i_0 + 3]), (arr_0 [i_0 + 2]))) : (((/* implicit */unsigned long long int) arr_36 [i_0] [3] [i_0] [i_0] [i_0]))));
                }
                /* LoopSeq 2 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_23 = 0; i_23 < 20; i_23 += 4) 
                    {
                        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                        {
                            {
                                arr_78 [4U] [i_1] [i_22] [i_23] [i_22] [i_22] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(arr_47 [i_23] [i_23])))), (max((((/* implicit */unsigned long long int) ((unsigned char) var_0))), (min((((/* implicit */unsigned long long int) var_6)), (arr_0 [i_0])))))));
                                var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_1 + 1] [12LL] [i_22] [i_0 + 3])) ? ((+(arr_14 [i_1 + 1] [i_1] [18LL] [i_0 + 2]))) : (arr_14 [i_1 - 2] [i_1 + 1] [i_22] [i_0 - 3])));
                            }
                        } 
                    } 
                    arr_79 [i_0] [9LL] [i_22] = min((((/* implicit */long long int) var_8)), (((long long int) min((((/* implicit */unsigned long long int) arr_47 [16] [i_22])), (arr_69 [i_0] [i_1] [(unsigned char)2])))));
                    arr_80 [7] [10LL] = ((/* implicit */unsigned int) arr_44 [i_0] [(unsigned short)10] [i_1 - 1] [i_1] [i_22]);
                }
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
                {
                    var_44 = ((/* implicit */unsigned int) var_14);
                    var_45 = ((unsigned char) ((int) ((((/* implicit */_Bool) arr_47 [(short)8] [i_1])) ? (arr_23 [i_0] [i_0] [(short)16] [i_0] [i_0] [i_0 + 3]) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (long long int i_26 = 0; i_26 < 20; i_26 += 3) 
                    {
                        for (unsigned char i_27 = 0; i_27 < 20; i_27 += 2) 
                        {
                            {
                                var_46 ^= ((/* implicit */short) arr_36 [i_0] [i_1 - 1] [i_0] [i_0] [i_27]);
                                arr_89 [(short)13] [i_1 - 2] [i_1] [i_25] [(short)13] [i_27] = arr_29 [(_Bool)1] [i_1] [i_1 - 2] [i_1 - 1] [4LL] [i_1] [9ULL];
                                var_47 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_85 [i_1 + 1] [i_1 - 3] [i_1] [i_1])) ? ((~(((/* implicit */int) arr_82 [i_26] [i_1] [19LL] [i_27])))) : (((/* implicit */int) ((unsigned short) arr_64 [i_27] [i_26] [i_27] [i_1 - 1] [i_27] [i_0] [i_0])))));
                                var_48 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) max((arr_26 [(short)16] [i_1] [i_25] [i_26] [1U]), (((/* implicit */unsigned char) arr_24 [i_25] [i_26] [i_27]))))) ? (arr_69 [i_0 - 4] [i_1] [i_25]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_72 [i_0] [(unsigned char)11] [i_0] [(short)19])) ? (arr_56 [i_26] [i_27] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_1] [i_0])))))))));
                                var_49 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((_Bool) arr_85 [i_0] [i_0 + 1] [i_0] [(short)9]))), (var_10)));
                            }
                        } 
                    } 
                    var_50 = ((/* implicit */_Bool) var_12);
                }
                arr_90 [(unsigned short)2] [(_Bool)1] [i_1 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_39 [18LL] [i_1] [i_1 - 3] [18LL]), (arr_39 [0ULL] [i_1] [i_0 - 1] [0ULL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1 - 3] [i_1 - 3]))) : (arr_39 [6U] [i_0 - 4] [i_0 - 2] [i_1])));
            }
        } 
    } 
}
