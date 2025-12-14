/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233894
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [(unsigned short)20] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [12LL] [i_1])) ? (arr_9 [i_3 + 2] [i_3] [i_3 + 2] [i_3 + 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [(short)8])), (arr_8 [(signed char)10] [i_3]))))))))));
                            arr_11 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) ((unsigned char) min((arr_5 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_2])))))), ((-(min((1065353216U), (((/* implicit */unsigned int) arr_8 [i_0] [i_1]))))))));
                            arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((signed char) 8ULL));
                            arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_4)), (arr_7 [i_3 + 3] [i_3] [i_3] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 8ULL)))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))), ((-(arr_4 [i_0])))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    arr_17 [(unsigned short)2] |= ((((/* implicit */_Bool) var_7)) ? (min((((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_4])) / (((/* implicit */int) arr_6 [i_0] [6LL] [i_4]))))), (((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(signed char)8]))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [(unsigned short)14] [(unsigned short)14])) / ((-(arr_18 [(unsigned short)14] [18LL])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(short)14])) ? (5706775912999394727LL) : (((/* implicit */long long int) arr_18 [i_4] [6ULL]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)8)) == (((/* implicit */int) arr_7 [i_0] [i_1] [i_4] [(unsigned char)12])))))) : (((((/* implicit */_Bool) var_10)) ? (arr_9 [i_0] [i_6] [i_4] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) (unsigned char)121)) >> (((4294967295U) - (4294967295U)))))))))))));
                                var_12 &= ((/* implicit */unsigned int) var_7);
                                arr_24 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_21 [i_5] [i_4] [i_0])) != (((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) -551435287350355306LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5496291521513743977ULL)))))) : (((((arr_5 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_0]))))));
                                var_13 = ((/* implicit */unsigned char) (+(18446744073709551615ULL)));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 2; i_8 < 21; i_8 += 3) 
                    {
                        {
                            arr_30 [i_0] [i_7] [i_7] &= ((/* implicit */unsigned int) ((max(((+(((/* implicit */int) (signed char)-42)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)64)) >= (((/* implicit */int) arr_14 [i_0] [i_7] [i_7] [i_8]))))))) | (((/* implicit */int) (signed char)119))));
                            arr_31 [i_0] [i_0] [i_7] [i_8] = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) arr_27 [i_8 - 1] [i_8] [i_8] [i_8 - 2])), (max((((/* implicit */long long int) arr_22 [i_0] [i_1] [(signed char)8] [i_8 - 2] [i_7] [i_1])), (var_5))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((18446744073709551608ULL) - (arr_9 [(unsigned char)3] [(unsigned char)3] [(unsigned char)3] [i_8 - 1])))) ? (((/* implicit */int) (!(arr_21 [i_0] [i_7] [i_8])))) : ((-(((/* implicit */int) var_3)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_9 = 2; i_9 < 18; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 21; i_10 += 3) 
        {
            for (unsigned char i_11 = 1; i_11 < 20; i_11 += 4) 
            {
                {
                    var_14 += ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-20983))) : (3208826130U)));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 3) 
                    {
                        arr_46 [i_9] [i_9] [20LL] [i_9] &= ((/* implicit */short) (~(((/* implicit */int) arr_23 [i_9] [i_9 + 3] [(unsigned short)0] [i_11] [i_12]))));
                        arr_47 [i_9] [i_11 - 1] = ((/* implicit */short) ((((/* implicit */int) ((_Bool) (signed char)32))) + (((/* implicit */int) arr_27 [(unsigned short)12] [i_10] [i_11] [i_12]))));
                        var_15 = ((/* implicit */unsigned short) var_8);
                        /* LoopSeq 2 */
                        for (unsigned int i_13 = 0; i_13 < 21; i_13 += 1) /* same iter space */
                        {
                            arr_50 [i_9] [i_12] [i_11] [i_10] [i_9] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) var_4)))));
                            arr_51 [i_9 + 1] [i_9] [i_9] [i_9 + 1] [i_9 + 1] [i_9] = ((/* implicit */signed char) ((arr_16 [i_9 - 2] [i_9] [i_10]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_16 [i_9 + 1] [i_10] [i_13]))));
                            arr_52 [i_9] [i_9 - 2] [i_11 + 1] [4LL] [4LL] [i_12] &= ((/* implicit */_Bool) arr_33 [(unsigned char)4] [(unsigned char)4]);
                            arr_53 [i_9] [i_10] [i_9] = ((/* implicit */short) var_2);
                            arr_54 [(signed char)13] [i_12] [i_9] [i_9] [i_13] = ((/* implicit */short) ((((/* implicit */int) arr_16 [i_9 + 3] [i_9 + 1] [i_11 + 1])) * (((/* implicit */int) arr_16 [i_9] [i_9 + 1] [i_11 + 1]))));
                        }
                        for (unsigned int i_14 = 0; i_14 < 21; i_14 += 1) /* same iter space */
                        {
                            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_9] [i_14])) ? (((/* implicit */int) arr_8 [i_9] [i_11])) : (((/* implicit */int) arr_8 [i_9] [i_10]))));
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) 4294967294U)) ? (((/* implicit */int) (unsigned short)48053)) : (((/* implicit */int) (unsigned short)46940)))))));
                        }
                    }
                    for (short i_15 = 1; i_15 < 20; i_15 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_16 = 0; i_16 < 21; i_16 += 3) 
                        {
                            arr_61 [i_16] [i_10] [2ULL] [i_15 + 1] [i_16] &= ((/* implicit */long long int) 3U);
                            arr_62 [i_9] [i_9] [i_9 - 1] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) (+(var_1)));
                            arr_63 [i_9] [i_9] [(short)3] [i_16] = ((/* implicit */long long int) ((arr_55 [i_9] [i_9]) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_11 - 1] [i_11 - 1] [i_11] [i_11] [i_11])))));
                            arr_64 [i_10] [i_10] [i_9] [i_9] = ((/* implicit */unsigned char) 3332535392U);
                            arr_65 [i_9] [i_10] [i_11] [i_9] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_9])) | (((/* implicit */int) arr_1 [i_9]))));
                        }
                        for (unsigned char i_17 = 1; i_17 < 20; i_17 += 3) 
                        {
                            var_18 ^= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (arr_56 [i_11 + 1] [i_11] [12U] [i_11])));
                            arr_69 [i_15] [14U] [i_11 - 1] [i_9] [14U] [i_9 + 1] = ((/* implicit */_Bool) arr_59 [i_17 + 1] [i_17] [i_17] [i_17 + 1] [i_17 + 1] [i_17] [i_17 - 1]);
                        }
                        for (unsigned char i_18 = 0; i_18 < 21; i_18 += 2) 
                        {
                            arr_73 [i_18] [(unsigned char)16] [18LL] [i_18] &= ((/* implicit */long long int) (-((-(((/* implicit */int) arr_41 [i_18] [i_18]))))));
                            arr_74 [i_9] [i_10] [i_11] [i_15 + 1] [i_11 + 1] [(short)15] = ((/* implicit */short) (~(((/* implicit */int) arr_6 [i_10] [i_9] [i_15 + 1]))));
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [2LL] [i_15 - 1])) ? (((/* implicit */int) (unsigned short)18595)) : (((/* implicit */int) arr_60 [i_9] [10LL] [i_9] [i_15] [i_15 - 1] [i_15 - 1]))))) ? (((((/* implicit */_Bool) arr_22 [i_18] [i_18] [i_11] [i_15 - 1] [(unsigned short)16] [i_18])) ? (-1108034577558050696LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_9 + 2] [i_18] [i_11]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_9 + 2] [i_9 - 2] [i_9 + 2] [i_11 + 1] [i_11 + 1] [i_15 + 1] [i_15 - 1])))));
                            var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_11] [i_15 - 1] [i_18] [i_18])) ? (((/* implicit */int) (unsigned short)24515)) : (((/* implicit */int) arr_27 [i_10] [i_15 - 1] [i_15 - 1] [i_18]))));
                        }
                        arr_75 [2LL] [2LL] [i_11] [i_11 - 1] &= ((/* implicit */unsigned long long int) (unsigned char)64);
                        var_21 = ((/* implicit */unsigned long long int) ((int) arr_44 [i_9] [i_9 - 1] [i_9] [i_15 - 1] [i_9 - 1]));
                        var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_33 [i_11] [i_9])))) ? (((((var_5) + (9223372036854775807LL))) >> (((((/* implicit */int) var_7)) - (4229))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_10] [i_9] [i_11] [i_15 - 1])) & (((/* implicit */int) arr_0 [i_10]))))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_19 = 1; i_19 < 17; i_19 += 4) 
        {
            for (unsigned short i_20 = 3; i_20 < 17; i_20 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_21 = 2; i_21 < 20; i_21 += 3) 
                    {
                        for (signed char i_22 = 0; i_22 < 21; i_22 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 8ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-86))) : (var_1))) + (((((/* implicit */_Bool) arr_14 [i_22] [i_22] [i_22] [i_19])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_8))))))));
                                var_24 = ((/* implicit */_Bool) ((signed char) arr_1 [i_22]));
                                var_25 += ((/* implicit */short) ((((/* implicit */_Bool) arr_78 [i_9] [i_19 + 2] [i_19 + 2])) || (((/* implicit */_Bool) arr_70 [i_9 + 3] [i_9] [i_9 + 2] [i_9] [i_9] [i_9]))));
                            }
                        } 
                    } 
                    arr_85 [i_9] [i_20] = ((/* implicit */signed char) arr_34 [i_9]);
                }
            } 
        } 
        arr_86 [i_9] [i_9 + 1] = ((/* implicit */unsigned long long int) ((long long int) arr_6 [i_9 + 3] [i_9] [i_9 + 1]));
    }
}
