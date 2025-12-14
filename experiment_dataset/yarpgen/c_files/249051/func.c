/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249051
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
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 2; i_2 < 23; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            arr_13 [i_0] [i_2] [i_1] [i_0] = ((((/* implicit */_Bool) 491528087U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)22488))));
                            var_13 |= ((/* implicit */int) var_6);
                            var_14 = ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483639)) ? (23U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) var_4)) - (15190))))) : (((((/* implicit */_Bool) 4294967273U)) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_0] [i_4])) : (((/* implicit */int) arr_1 [i_0]))))));
                        }
                        for (unsigned short i_5 = 2; i_5 < 22; i_5 += 3) 
                        {
                            arr_17 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_5 + 2] [i_5 + 1] [i_3 + 1] [i_3 + 1] [i_2 + 1]))));
                            var_15 = ((/* implicit */short) var_9);
                            arr_18 [i_5] [i_5] [i_3] [i_0] [i_2 + 1] [i_1] [2] = ((/* implicit */int) arr_3 [i_5 - 2] [i_3 - 1] [i_2 - 2]);
                            var_16 = ((/* implicit */signed char) arr_14 [12LL] [i_3] [12LL] [i_1]);
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_14 [i_3] [i_3] [i_3] [i_3 + 1]), (((((/* implicit */_Bool) arr_5 [i_0] [i_2 - 2] [i_2 - 2])) ? (arr_14 [i_0] [i_1] [i_3] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))) ? (((((/* implicit */_Bool) arr_2 [i_2 - 2] [i_2 - 2])) ? (((/* implicit */int) arr_6 [i_3 - 1] [i_2] [(short)23])) : (((/* implicit */int) (signed char)-68)))) : (((/* implicit */int) ((unsigned char) arr_0 [i_2 + 1] [i_5 - 2]))))) : (((/* implicit */int) ((((/* implicit */_Bool) max((arr_1 [i_0]), (arr_5 [i_0] [i_0] [i_0])))) && (((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_3])) || (((/* implicit */_Bool) var_9)))))))));
                        }
                        var_18 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (-(arr_7 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_1])))), (1U)));
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_1] [i_2] [i_1])) & (((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_15 [i_3 + 1] [i_0] [i_2] [i_3] [i_2 - 2])))))))));
                        var_20 *= ((/* implicit */unsigned char) (-2147483647 - 1));
                        var_21 |= ((/* implicit */unsigned char) ((short) max((arr_10 [i_3 + 1] [i_3] [i_3] [i_3]), (((/* implicit */unsigned int) (-2147483647 - 1))))));
                    }
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        var_22 = ((/* implicit */signed char) ((unsigned short) var_4));
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            var_23 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) (short)-32758)))))));
                            var_24 = ((/* implicit */unsigned char) arr_10 [(unsigned char)10] [i_2 + 1] [i_2] [(unsigned char)1]);
                            arr_26 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (arr_7 [i_7] [i_7] [i_2 - 1] [i_0]) : (arr_7 [19U] [i_1] [i_2 - 1] [i_0])));
                            var_25 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_4))));
                        }
                        for (int i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */unsigned int) (-(-1318550928)))) : (((unsigned int) arr_4 [i_6] [16] [i_2])))))));
                            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)1759)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (short)32742)))));
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) var_10))));
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) 15U);
                            var_29 = var_5;
                        }
                        for (int i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            arr_32 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_1))));
                            var_30 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2 - 1] [i_1] [(short)10] [1ULL])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))) : (arr_15 [i_0] [i_1] [i_9] [i_6] [i_9])));
                        }
                    }
                    var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (_Bool)0))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_5 [i_0] [i_0] [i_2])), (arr_25 [19] [i_1] [i_1] [i_1] [i_2 + 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)155)) ? (arr_30 [i_0] [16LL] [i_2] [0U] [0U]) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_2 - 1]))))) : (arr_21 [i_2 - 1] [i_0] [i_1] [i_0] [i_0])))) : (((((/* implicit */_Bool) 105320675)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2 - 2] [i_2 + 1] [i_2 - 2])))))));
                    var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) (-(((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_1] [i_2 + 1] [i_2]))))) ? (var_0) : (((/* implicit */unsigned int) arr_30 [i_1] [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_2 - 1])))))))));
                    /* LoopSeq 1 */
                    for (signed char i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        var_33 = ((/* implicit */signed char) ((max((arr_22 [i_2 - 1] [i_2 + 1] [i_2] [i_2 - 2]), (arr_22 [i_2 + 1] [i_2 - 2] [i_2] [i_2 - 2]))) >> (((((((/* implicit */_Bool) arr_22 [i_2 + 1] [i_2 - 1] [i_2] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_22 [i_2 + 1] [i_2 - 2] [9LL] [i_2 - 2]))) - (171U)))));
                        var_34 = ((/* implicit */int) (short)-32725);
                    }
                }
                for (long long int i_11 = 2; i_11 < 23; i_11 += 4) /* same iter space */
                {
                    arr_38 [i_0] [i_0] [i_11] [(short)3] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_28 [i_0] [i_11 - 1] [i_1] [i_1] [i_0])))) ? (arr_31 [i_1]) : (((/* implicit */long long int) (-(((/* implicit */int) arr_16 [i_11] [i_0] [i_11] [i_0] [i_11 - 1] [i_0])))))));
                    var_35 = ((/* implicit */int) max((((unsigned int) arr_14 [i_11] [i_11 + 1] [i_11 - 1] [i_11 - 2])), (((/* implicit */unsigned int) ((28U) == (((arr_21 [i_0] [i_0] [i_1] [i_0] [i_11 - 1]) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-28302))))))))));
                    var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) & (((/* implicit */int) var_2))))) ? (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_8 [i_1] [i_11])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_11])))) & (((((/* implicit */_Bool) (unsigned char)131)) ? (arr_30 [i_0] [i_1] [i_1] [i_11 + 1] [i_11 - 2]) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_11])))))) : (((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) (short)3493))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_11] [i_1] [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */int) (short)-9034)) : (((/* implicit */int) arr_5 [i_0] [(_Bool)1] [i_11]))))))));
                }
                for (long long int i_12 = 2; i_12 < 23; i_12 += 4) /* same iter space */
                {
                    var_37 *= ((/* implicit */short) 4294967257U);
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 2; i_13 < 22; i_13 += 4) 
                    {
                        for (unsigned char i_14 = 1; i_14 < 23; i_14 += 4) 
                        {
                            {
                                var_38 = ((long long int) (~(((/* implicit */int) arr_0 [i_12 + 1] [i_13 + 1]))));
                                arr_47 [i_0] [i_0] [i_12] [i_0] [i_0] = ((/* implicit */int) max((max((arr_19 [i_1] [4U] [i_12 - 2] [i_1]), (((/* implicit */unsigned int) arr_44 [i_0] [i_0] [i_12 - 2] [i_12] [i_13 - 2] [i_14 + 1] [i_14 - 1])))), (((/* implicit */unsigned int) ((short) arr_27 [i_14] [i_13] [i_12])))));
                                arr_48 [i_0] [15] [i_12] [i_0] [i_13 + 2] [i_14 - 1] [i_14] = ((/* implicit */unsigned char) (~(max((((((/* implicit */_Bool) var_3)) ? (arr_46 [i_1]) : (arr_27 [i_1] [i_12] [(unsigned char)2]))), (((/* implicit */long long int) arr_11 [i_13] [i_13 - 2] [i_14] [i_14 + 1] [i_14]))))));
                                arr_49 [i_14] [i_0] [i_12 - 2] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (unsigned short)45858)) ? (arr_31 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_13] [i_1]))))))))) ? (max((((/* implicit */unsigned long long int) ((int) arr_27 [20LL] [i_12] [i_13 - 1]))), (max((((/* implicit */unsigned long long int) (signed char)-104)), (var_12))))) : (((/* implicit */unsigned long long int) (+(((int) var_0)))))));
                                var_39 = ((/* implicit */_Bool) (-((~(arr_45 [i_0] [i_13] [i_13] [i_0] [i_13 + 1])))));
                            }
                        } 
                    } 
                    var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) arr_16 [i_0] [i_1] [i_1] [i_0] [i_0] [i_0]))));
                }
                var_41 = ((((/* implicit */_Bool) ((int) arr_28 [i_0] [i_1] [i_1] [i_0] [i_0]))) ? (((unsigned int) 4294967273U)) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_4 [i_0] [i_1] [i_1])))));
                var_42 |= ((/* implicit */int) arr_20 [i_1] [i_0] [i_0] [i_0]);
                var_43 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1] [i_0]))));
            }
        } 
    } 
    var_44 = ((/* implicit */unsigned char) var_4);
}
