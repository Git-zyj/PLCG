/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211358
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
    var_18 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            arr_11 [3ULL] [3ULL] [(unsigned char)0] [i_2] [i_1] [i_3] = ((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_3]);
                            var_19 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 16248032886365519920ULL)) ? (51224472U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1329)))))));
                            var_20 = ((/* implicit */unsigned long long int) var_7);
                            var_21 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)46084)) ? (((/* implicit */int) (unsigned short)18053)) : (((/* implicit */int) (unsigned short)64206))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */int) arr_2 [i_3] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_1] [(_Bool)1] [i_3]))))) : (4294967295U))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_4])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_0]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_0] [i_1] [5LL]))))) : (arr_13 [i_0] [i_0] [(signed char)0] [i_0])));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) 206930939))) ^ ((+(0ULL))))))));
                                var_24 *= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)1329)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_6] [i_4] [i_6]))) : (arr_0 [i_0])))));
                            }
                        } 
                    } 
                }
                for (long long int i_7 = 0; i_7 < 15; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 15; i_9 += 4) 
                        {
                            {
                                arr_27 [i_1] [i_1] [i_1] [(unsigned short)8] [i_1] [(unsigned short)8] = ((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1]);
                                arr_28 [i_0] [i_0] [(unsigned char)13] [i_8] [(unsigned short)10] [i_1] [i_7] = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned short)58229)) ? (((/* implicit */int) (unsigned short)50723)) : (((/* implicit */int) var_13))))));
                                var_25 |= ((((/* implicit */int) arr_8 [(_Bool)0] [i_9] [(unsigned short)0])) << (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_5 [i_0] [(unsigned char)14] [5ULL] [i_8]), ((unsigned short)47483))))))));
                                var_26 = ((/* implicit */short) ((unsigned char) (-(((/* implicit */int) arr_18 [i_0] [i_0] [i_1] [(unsigned short)7] [(_Bool)1])))));
                            }
                        } 
                    } 
                    var_27 = (i_1 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1329)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1]))) : (arr_15 [i_0] [i_1] [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) ((arr_23 [i_1] [i_1] [i_7] [1U] [i_7] [i_0]) >> (((((/* implicit */int) arr_10 [i_1])) - (182)))))) : (((((/* implicit */_Bool) var_12)) ? (arr_15 [i_7] [i_1] [i_1] [i_1] [i_0]) : (arr_15 [i_0] [i_1] [i_0] [i_1] [11U])))))) : (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1329)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1]))) : (arr_15 [i_0] [i_1] [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) ((arr_23 [i_1] [i_1] [i_7] [1U] [i_7] [i_0]) >> (((((((/* implicit */int) arr_10 [i_1])) - (182))) + (121)))))) : (((((/* implicit */_Bool) var_12)) ? (arr_15 [i_7] [i_1] [i_1] [i_1] [i_0]) : (arr_15 [i_0] [i_1] [i_0] [i_1] [11U]))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        var_28 *= ((/* implicit */unsigned int) min((min((arr_15 [(_Bool)1] [i_10] [i_7] [i_10] [i_7]), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)36047)) ? (((/* implicit */int) (unsigned short)64206)) : (((/* implicit */int) arr_2 [i_0] [i_7]))))))), (((/* implicit */long long int) (short)(-32767 - 1)))));
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) var_2))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 15; i_11 += 2) 
                    {
                        var_30 = ((/* implicit */signed char) var_0);
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned char i_12 = 0; i_12 < 15; i_12 += 2) 
                        {
                            var_31 *= ((/* implicit */short) ((long long int) arr_30 [i_0] [i_0] [3LL]));
                            var_32 ^= ((/* implicit */signed char) (-(((/* implicit */int) arr_34 [i_0] [i_1] [i_7] [i_11]))));
                        }
                        for (unsigned short i_13 = 0; i_13 < 15; i_13 += 1) 
                        {
                            arr_42 [i_0] [i_1] [i_0] [(unsigned char)4] [i_0] = ((/* implicit */_Bool) 3641951766847379319ULL);
                            arr_43 [i_0] [i_1] [i_7] [i_1] [(unsigned short)6] = ((/* implicit */short) (+(var_1)));
                        }
                        for (short i_14 = 0; i_14 < 15; i_14 += 1) 
                        {
                            var_33 *= ((/* implicit */int) 0ULL);
                            var_34 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)64206)));
                        }
                        for (short i_15 = 0; i_15 < 15; i_15 += 4) 
                        {
                            arr_50 [8ULL] [8ULL] [i_1] [i_7] [i_11] [i_1] [(short)3] = ((/* implicit */long long int) var_17);
                            arr_51 [i_1] [(unsigned char)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)110)) : (((/* implicit */int) arr_2 [i_11] [i_11]))))))) ? ((~(arr_39 [i_0] [i_0] [(unsigned char)1] [i_7] [i_11] [6]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)138)))));
                            arr_52 [i_1] [i_1] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_10 [i_1])), ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned long long int) arr_19 [i_1] [(unsigned short)1] [i_11])) : ((-(3030282351821273326ULL))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 0; i_16 < 15; i_16 += 4) 
                    {
                        for (int i_17 = 0; i_17 < 15; i_17 += 4) 
                        {
                            {
                                arr_57 [i_1] = ((/* implicit */unsigned char) var_2);
                                arr_58 [i_0] [i_0] [(unsigned short)9] [i_1] [i_7] [i_16] = ((/* implicit */unsigned int) var_12);
                                var_35 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_54 [i_0] [0] [i_0] [i_0] [i_0] [i_0]))));
                            }
                        } 
                    } 
                }
                var_36 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_15))));
                var_37 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */int) var_3))));
            }
        } 
    } 
}
