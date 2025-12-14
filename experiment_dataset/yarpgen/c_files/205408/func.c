/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205408
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
    var_16 *= ((/* implicit */unsigned char) var_4);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_8 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 1]))))) ? (((/* implicit */long long int) var_1)) : (min((min((arr_7 [i_1] [(short)6] [i_0 + 1]), (((/* implicit */long long int) arr_2 [i_1])))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 - 1] [10U] [i_0]))))))))));
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    arr_13 [i_0] [i_0] = ((/* implicit */short) min((arr_4 [i_0 - 1] [i_0 + 1]), (var_13)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_17 = min((((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) arr_0 [i_0] [i_0])) * (var_8))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 + 1] [(_Bool)1] [i_4])))))), (((var_15) / (((/* implicit */unsigned long long int) arr_16 [i_0 - 1] [i_0] [i_1] [i_2] [i_3] [i_4])))));
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned char)7), (((/* implicit */unsigned char) arr_6 [i_0] [i_0 + 1] [i_2]))))) ? (((((/* implicit */int) arr_6 [i_0] [i_0 - 1] [i_2])) * (((/* implicit */int) var_14)))) : (((/* implicit */int) max((((/* implicit */signed char) var_14)), (arr_6 [i_0 - 1] [i_0 + 1] [i_3])))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 3; i_5 < 23; i_5 += 4) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5225)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_8)) ? (arr_16 [i_0 - 1] [i_0] [i_2] [i_0] [i_1] [i_0]) : (arr_19 [i_5 - 1] [i_1] [i_0]))) : (((/* implicit */long long int) (~(arr_1 [(signed char)8]))))))));
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) min((((/* implicit */unsigned short) var_14)), (var_10)))))) : (((/* implicit */int) min((arr_12 [i_0] [i_0 + 1] [i_0]), (arr_12 [i_0] [i_0 - 1] [i_0]))))));
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            var_21 = ((/* implicit */int) max((((((/* implicit */unsigned long long int) min((var_8), (var_8)))) * (((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (arr_22 [i_0] [i_1] [14] [i_5] [i_5] [i_6]))))), (((/* implicit */unsigned long long int) min(((-(arr_5 [i_1] [i_0]))), (((/* implicit */long long int) arr_6 [i_0] [i_0 + 1] [i_0])))))));
                            arr_25 [i_1] [i_6] [i_1] [i_1] |= ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((7892070150679799085LL), (((/* implicit */long long int) (unsigned short)0))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) var_13)) * (((/* implicit */int) (short)17590))))))) : (arr_7 [i_6] [i_2] [i_1])));
                        }
                        arr_26 [i_0 + 1] [i_0 + 1] [i_0] [i_0] = ((/* implicit */long long int) arr_11 [i_0] [8LL]);
                    }
                    for (unsigned long long int i_7 = 3; i_7 < 23; i_7 += 4) /* same iter space */
                    {
                        arr_29 [12] [i_2] [i_1] [i_2] [i_0] |= ((/* implicit */long long int) (short)-29594);
                        arr_30 [i_0 + 1] [i_0] [14LL] [i_7] = ((/* implicit */unsigned long long int) (((~(arr_16 [i_7 - 1] [i_0] [i_7 - 1] [i_7 + 1] [i_7] [i_7 + 1]))) & (max((arr_14 [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7 - 1]), (((/* implicit */long long int) var_11))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned int) var_4);
                        arr_33 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] = ((((/* implicit */unsigned long long int) max((((long long int) 13846877642330973071ULL)), (((/* implicit */long long int) var_1))))) - (((((/* implicit */_Bool) var_13)) ? (var_15) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_1] [i_2] [7U] [i_8]))) + (var_4)))))));
                        var_23 = ((/* implicit */int) (-(((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (arr_17 [i_0] [i_0 + 1] [i_0] [9LL] [i_2] [i_8])))) ? (((((/* implicit */_Bool) var_10)) ? (-5654622264954290390LL) : (((/* implicit */long long int) ((/* implicit */int) (short)6291))))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                        /* LoopSeq 1 */
                        for (short i_9 = 0; i_9 < 24; i_9 += 1) 
                        {
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) min(((~(var_9))), (((/* implicit */long long int) (~((-(((/* implicit */int) var_3))))))))))));
                            arr_36 [i_0] [i_0] [i_2] [i_8] [i_9] = ((/* implicit */signed char) min(((~(((/* implicit */int) arr_6 [i_0 + 1] [i_2] [i_0])))), ((~(((/* implicit */int) arr_9 [i_8] [16U] [16U]))))));
                        }
                    }
                    for (unsigned int i_10 = 0; i_10 < 24; i_10 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 0; i_11 < 24; i_11 += 1) 
                        {
                            var_25 |= ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_0 + 1] [i_1] [i_10])) < (((((/* implicit */int) var_14)) * (((/* implicit */int) arr_6 [i_2] [i_10] [i_2]))))));
                            var_26 = ((/* implicit */long long int) min((arr_10 [i_10] [i_2] [i_0]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14)))))));
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_0])), (((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0 - 1] [i_0])) ? (((/* implicit */long long int) var_8)) : (var_4)))))) ? (max((((((/* implicit */_Bool) var_4)) ? (-5654622264954290390LL) : (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) arr_38 [i_0] [i_0] [i_0] [i_0 + 1])))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_7))), (((/* implicit */unsigned int) max((1133685553), (((/* implicit */int) var_14))))))))));
                            var_28 = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 + 1] [i_0 - 1] [i_0 + 1]))) / (arr_22 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_1] [i_10] [i_11]))), (arr_22 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])));
                        }
                        for (unsigned short i_12 = 1; i_12 < 23; i_12 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) var_11))));
                            arr_44 [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0])) ? (var_9) : (((((/* implicit */long long int) (-(((/* implicit */int) arr_18 [i_12] [i_0] [i_2] [i_0 - 1] [i_0] [i_0 - 1]))))) / (arr_14 [i_0 + 1] [14] [(_Bool)1] [i_12])))));
                            arr_45 [i_0] [i_0] = ((/* implicit */long long int) ((int) (~(max((arr_20 [i_12 + 1]), (((/* implicit */unsigned long long int) var_11)))))));
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_12 - 1] [i_0] [i_12 - 1] [i_12 - 1] [i_12 + 1] [i_12 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((-3129421111909424598LL) < (((/* implicit */long long int) var_1)))), (((arr_24 [i_0 + 1] [i_1] [i_2] [i_10] [i_12]) < (var_6))))))) : (arr_23 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_12 - 1] [i_12 - 1])));
                        }
                        arr_46 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (min((((/* implicit */long long int) var_11)), (-5654622264954290390LL))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) min((arr_32 [i_0 + 1] [(_Bool)0] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_32 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_0 - 1])))) : ((-(((/* implicit */int) min(((unsigned short)7360), (((/* implicit */unsigned short) var_11)))))))));
                        var_31 |= ((/* implicit */_Bool) ((arr_24 [16ULL] [i_1] [(short)23] [i_10] [i_10]) * (arr_24 [i_0] [i_1] [i_1] [i_2] [i_10])));
                        var_32 += ((/* implicit */unsigned short) (~(((arr_38 [i_10] [i_0] [i_0 - 1] [i_0 - 1]) / (arr_38 [i_2] [i_0] [i_2] [i_0 - 1])))));
                    }
                    var_33 |= ((unsigned int) ((((((/* implicit */_Bool) (short)-26707)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_7))) < ((-(arr_38 [i_2] [i_2] [i_1] [i_2])))));
                }
                for (unsigned short i_13 = 0; i_13 < 24; i_13 += 1) 
                {
                    var_34 *= ((/* implicit */unsigned int) arr_1 [i_13]);
                    var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) min((((/* implicit */long long int) ((unsigned int) arr_16 [i_13] [(signed char)0] [i_1] [i_1] [(signed char)0] [i_0]))), (min((var_9), (((/* implicit */long long int) arr_6 [i_0 + 1] [i_1] [(signed char)12])))))))));
                    /* LoopSeq 1 */
                    for (short i_14 = 2; i_14 < 22; i_14 += 1) 
                    {
                        arr_52 [i_0] = ((/* implicit */unsigned int) ((signed char) var_3));
                        arr_53 [i_0 + 1] [i_0] [i_1] [i_14] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_6)) * (arr_22 [(short)2] [i_0 + 1] [i_1] [i_1] [i_0 + 1] [i_0])))) ? (((/* implicit */int) min((var_5), (arr_9 [i_0 + 1] [i_13] [i_0 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_13] [i_0] [i_14 - 2] [i_0]))))))), (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 3826019144U)) : (18446744073709551615ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1] [i_1] [i_0]))))))));
                        var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) arr_39 [(unsigned short)2] [i_13] [i_0] [i_0 - 1] [(unsigned short)2])), (var_7))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_0] [i_13] [i_14 + 1]))) / (var_8)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) max((arr_10 [i_0] [i_0] [i_0 - 1]), (((/* implicit */unsigned long long int) var_7))))))) : (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) arr_38 [20] [i_1] [i_13] [i_14])) ? (arr_7 [i_1] [i_1] [0ULL]) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_15 [i_0] [i_13] [4U])), (arr_50 [i_0] [i_1] [i_13] [i_14]))))))))))));
                        var_37 = ((/* implicit */short) ((((/* implicit */_Bool) arr_50 [i_14] [(unsigned short)17] [i_1] [i_0])) ? (min((var_9), (((/* implicit */long long int) (!(var_14)))))) : (((/* implicit */long long int) var_7))));
                        var_38 *= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_6 [i_0] [i_1] [14ULL]))));
                    }
                    var_39 = ((/* implicit */signed char) arr_20 [i_13]);
                }
                for (unsigned int i_15 = 0; i_15 < 24; i_15 += 4) 
                {
                    var_40 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) / ((-(arr_38 [i_15] [i_0 + 1] [i_0 - 1] [i_0 + 1])))));
                    arr_57 [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned int) ((short) var_6));
                    arr_58 [i_0 - 1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))))), (((((/* implicit */_Bool) min((13846877642330973073ULL), (((/* implicit */unsigned long long int) var_13))))) ? (max((arr_43 [i_15] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_13), (var_13)))))))));
                    var_41 = ((/* implicit */long long int) max((var_41), (max((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_51 [(unsigned short)12] [i_0 + 1] [i_1] [i_15]) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [(signed char)18] [i_0] [i_1] [i_15]))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_10)), (min((((/* implicit */unsigned int) var_13)), (var_6))))))))));
                }
                /* LoopSeq 1 */
                for (short i_16 = 0; i_16 < 24; i_16 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 1) 
                    {
                        var_42 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_24 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1])) ? (max((arr_38 [i_0] [i_16] [i_1] [i_0]), (((/* implicit */unsigned int) arr_48 [i_1] [i_1] [i_17])))) : (min((var_6), (((/* implicit */unsigned int) arr_48 [i_0] [i_0 + 1] [0U])))))), (((((/* implicit */_Bool) arr_49 [i_16] [i_16] [i_16])) ? (arr_49 [i_0 + 1] [i_16] [i_16]) : (arr_49 [18LL] [8LL] [i_17])))));
                        var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) arr_50 [i_17] [i_16] [i_1] [i_0]))));
                    }
                    var_44 ^= ((/* implicit */unsigned short) var_6);
                    var_45 ^= ((/* implicit */unsigned short) var_9);
                    arr_63 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) arr_3 [i_0])) < (((/* implicit */int) (_Bool)1)))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned int) arr_47 [i_16] [i_0 + 1] [i_0 + 1] [i_0 - 1])), (arr_38 [i_0] [i_1] [5] [i_16]))))))));
                }
                /* LoopNest 2 */
                for (short i_18 = 0; i_18 < 24; i_18 += 1) 
                {
                    for (unsigned int i_19 = 2; i_19 < 23; i_19 += 4) 
                    {
                        {
                            arr_70 [i_0 - 1] [i_0 - 1] [i_18] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_47 [i_0 + 1] [i_19 - 1] [i_19 - 2] [i_19 - 1])), ((-(arr_41 [i_0]))))))));
                            arr_71 [i_0] [i_19 - 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned short) -1508957701))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3826019144U)) ? (((/* implicit */unsigned int) arr_0 [i_18] [i_0])) : (var_7)))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_19 - 1])) ? (5654622264954290394LL) : (((/* implicit */long long int) var_6)))) : (arr_19 [i_19 + 1] [i_1] [i_0 + 1])))));
                            var_46 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) (short)12037)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_47 = ((/* implicit */_Bool) var_6);
}
