/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216906
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
    var_15 = ((/* implicit */_Bool) var_3);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_12 [i_3] [i_1] [i_3] = ((/* implicit */int) (signed char)9);
                                arr_13 [i_3] [i_2] [i_3] = ((max((arr_7 [i_4 - 1] [i_2] [i_2 + 2] [i_2 + 2]), (((/* implicit */int) arr_11 [i_4 + 1] [i_4] [i_4 - 1] [i_4 + 1] [i_4])))) >= (max((var_12), (var_12))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 15; i_7 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */int) arr_3 [i_7]);
                                var_17 = ((/* implicit */unsigned int) arr_18 [i_7]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 15; i_8 += 4) 
                    {
                        arr_25 [0LL] [i_1] [i_1] [1U] = ((/* implicit */unsigned int) var_14);
                        var_18 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [4U]))))));
                    }
                }
                for (unsigned int i_9 = 0; i_9 < 15; i_9 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        for (int i_11 = 0; i_11 < 15; i_11 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (var_11)))) ? (2147483647) : (((/* implicit */int) var_5))));
                                var_20 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_9] [13LL] [i_11])), (25U)))))), (var_6)));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_21 += ((/* implicit */signed char) var_6);
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_34 [i_0] [(_Bool)1] [i_0] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (short)-20379)) : (((/* implicit */int) (signed char)-53)))))))) ? (arr_22 [i_0] [i_1] [9U] [i_12]) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_10 [i_0] [5] [i_0] [i_0] [(unsigned short)1])) ? (-1662779807) : (((/* implicit */int) arr_3 [i_12])))))))));
                    }
                    for (int i_13 = 0; i_13 < 15; i_13 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_14 = 0; i_14 < 15; i_14 += 3) 
                        {
                            arr_44 [i_0] [i_1] [i_1] [i_14] [i_14] [(signed char)8] [i_14] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [(unsigned short)0] [(short)4] [i_9] [i_1] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_13] [i_14])) ? (var_9) : (3507205901225626004LL))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (signed char)50)), (1662779809))))))));
                            var_23 = ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (var_11))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_13])))));
                            arr_45 [7] [i_1] [9] [i_9] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (max((arr_35 [i_13] [i_9] [i_1] [i_0]), (((/* implicit */unsigned long long int) (signed char)-116)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((var_6) == (((/* implicit */unsigned long long int) var_0))))))))));
                        }
                        for (unsigned char i_15 = 0; i_15 < 15; i_15 += 3) 
                        {
                            var_24 = ((/* implicit */short) var_10);
                            var_25 = ((/* implicit */long long int) var_2);
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) 253207292039162132LL)) && (((/* implicit */_Bool) -9154459608850718368LL))));
                        }
                        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) min((((var_0) % (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))), (((/* implicit */unsigned int) arr_1 [i_0])))))));
                        var_28 = ((/* implicit */_Bool) (+(((/* implicit */int) var_2))));
                        arr_48 [i_1] [i_1] [i_1] [1ULL] = ((/* implicit */signed char) (-((+(((/* implicit */int) var_10))))));
                    }
                    arr_49 [(unsigned char)7] [i_9] [i_9] [i_9] = ((/* implicit */short) max((arr_43 [i_0] [14ULL] [i_9] [i_0]), ((-(arr_43 [i_0] [i_0] [i_0] [(unsigned char)6])))));
                    var_29 = ((/* implicit */int) var_9);
                }
                for (unsigned int i_16 = 0; i_16 < 15; i_16 += 2) /* same iter space */
                {
                    var_30 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [(signed char)13]))))) ? (((/* implicit */int) arr_50 [i_0] [i_1] [i_16])) : (((((/* implicit */_Bool) arr_50 [i_0] [i_1] [i_1])) ? (((/* implicit */int) (signed char)-99)) : (((/* implicit */int) arr_50 [i_0] [i_1] [6U]))))));
                    /* LoopNest 2 */
                    for (long long int i_17 = 0; i_17 < 15; i_17 += 3) 
                    {
                        for (unsigned short i_18 = 1; i_18 < 14; i_18 += 4) 
                        {
                            {
                                arr_57 [i_18] [i_16] [i_18] [i_16] [i_18] [i_1] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_20 [i_0] [i_1] [i_18] [i_18] [i_18] [i_18 + 1] [i_17])) : (((/* implicit */int) arr_20 [i_16] [i_1] [i_16] [i_18] [i_18] [i_18 - 1] [i_16]))))));
                                arr_58 [i_0] [i_1] [i_1] [i_16] [i_18] [(signed char)11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_4)))) ? (((((/* implicit */_Bool) var_1)) ? (arr_38 [i_18 - 1] [i_18 + 1] [i_18 - 1] [i_18 - 1] [i_18 + 1] [i_18 - 1]) : (arr_38 [i_18 - 1] [i_18 + 1] [i_18 + 1] [i_18 - 1] [i_18 - 1] [i_18 + 1]))) : (((/* implicit */long long int) var_4))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_19 = 0; i_19 < 15; i_19 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (int i_20 = 0; i_20 < 15; i_20 += 1) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned int) min((((/* implicit */int) max((arr_31 [i_19] [i_1] [i_16] [i_19] [(short)7] [i_1]), (arr_31 [(short)6] [i_1] [i_1] [(short)6] [i_20] [i_1])))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_31 [i_0] [5] [i_1] [5] [i_19] [i_20]))))));
                            var_32 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10463))) : (18446744073709551615ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) arr_14 [i_20] [i_20] [i_20] [i_20])), (arr_62 [i_0] [i_1] [i_16] [(short)1] [i_19] [(signed char)7] [i_20])))))))) : (var_0)));
                            var_33 += ((/* implicit */unsigned short) arr_33 [i_0]);
                            var_34 ^= ((/* implicit */unsigned long long int) (_Bool)0);
                        }
                        for (int i_21 = 0; i_21 < 15; i_21 += 1) /* same iter space */
                        {
                            var_35 -= ((/* implicit */long long int) var_7);
                            var_36 -= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_62 [i_0] [i_1] [i_0] [i_19] [i_19] [i_21] [i_1])) + (2147483647))) << ((((+(((/* implicit */int) arr_55 [i_0] [i_1] [i_19])))) - (233)))));
                            var_37 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
                        }
                        var_38 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_20 [0ULL] [i_1] [i_16] [i_16] [i_1] [i_16] [i_1])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                        var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) var_14))));
                    }
                    /* vectorizable */
                    for (int i_22 = 0; i_22 < 15; i_22 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (short i_23 = 1; i_23 < 13; i_23 += 1) 
                        {
                            arr_72 [(short)1] [i_1] [i_16] [i_23] [i_16] = ((/* implicit */long long int) var_14);
                            arr_73 [i_0] [6] [i_23] [(signed char)12] [i_23 + 1] = arr_38 [i_23 + 1] [i_23 + 1] [i_23 + 1] [i_23] [i_23] [i_23];
                            var_40 = ((/* implicit */int) ((((/* implicit */_Bool) arr_47 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (var_8) : (((/* implicit */unsigned int) var_14))));
                            arr_74 [(short)6] [(short)6] [i_16] [i_16] [i_23] = ((/* implicit */unsigned int) var_3);
                        }
                        for (unsigned char i_24 = 0; i_24 < 15; i_24 += 3) 
                        {
                            var_41 ^= ((/* implicit */short) (+(((/* implicit */int) ((9223372036854775807LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-49))))))));
                            var_42 = var_0;
                            var_43 -= ((/* implicit */unsigned char) ((arr_46 [6LL] [i_1] [i_16] [i_1] [i_22] [i_1] [i_24]) & (arr_46 [i_0] [i_1] [(signed char)2] [(unsigned char)4] [i_22] [i_22] [i_24])));
                        }
                        var_44 = ((/* implicit */signed char) arr_68 [i_0] [i_0] [i_0] [i_0]);
                        arr_78 [i_22] [i_1] [i_22] [i_22] = ((/* implicit */long long int) arr_24 [i_0]);
                        arr_79 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)3] = (_Bool)1;
                    }
                    arr_80 [0U] [i_1] [i_16] = ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((arr_8 [i_0] [7U] [i_0] [i_0] [i_0]) % (arr_0 [i_0]))) : (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_0 [i_1]))))));
                }
                var_45 *= ((/* implicit */_Bool) (-(((/* implicit */int) var_2))));
                arr_81 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (unsigned short)0);
                var_46 -= ((/* implicit */unsigned int) (-(arr_68 [i_1] [i_1] [i_1] [i_0])));
            }
        } 
    } 
    var_47 = ((/* implicit */int) min((var_47), (((/* implicit */int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) var_5))))) ? (var_6) : ((~(((((/* implicit */_Bool) (unsigned short)19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251))) : (0ULL))))))))));
}
