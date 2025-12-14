/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200912
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        var_12 |= (+((~(arr_10 [i_3 - 1] [i_3 + 1] [i_3] [i_3 + 1] [i_3 - 1]))));
                        arr_12 [i_1] [i_1] &= ((/* implicit */unsigned short) arr_1 [i_1] [i_1]);
                        arr_13 [i_0] [(unsigned short)9] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (-(min((((/* implicit */long long int) var_0)), (arr_10 [i_1] [5] [5] [i_1] [i_1])))));
                        /* LoopSeq 4 */
                        for (int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            var_13 = var_6;
                            arr_16 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 109093168)) ? (-1938993892) : (-1132750083)));
                            arr_17 [i_1] [i_0] [i_3] [i_3] = ((/* implicit */long long int) (signed char)-69);
                        }
                        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            arr_20 [i_3 - 1] [i_0] [i_2] [(unsigned short)6] [i_5] = ((/* implicit */unsigned long long int) (~((+(arr_14 [i_0] [i_0] [i_3 + 1] [i_0] [i_3 + 1])))));
                            var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_7)))));
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            var_15 = ((/* implicit */unsigned long long int) var_5);
                            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_19 [i_3] [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_0])) : (((/* implicit */int) arr_19 [i_3] [i_3 - 1] [i_3] [i_3 - 1] [i_3] [i_0]))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 3) 
                        {
                            arr_25 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */_Bool) ((((_Bool) arr_10 [i_3 + 1] [i_0] [i_3 + 1] [i_3 + 1] [i_0])) ? ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [(short)8] [(short)8]))) * (var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [1ULL] [i_0] [i_0] [i_2] [i_2])))));
                            var_17 = ((/* implicit */long long int) max((var_17), (var_7)));
                            arr_26 [i_0] [i_0] [(short)4] [i_0] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) > (((/* implicit */int) max((((unsigned short) var_10)), (min((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), (arr_24 [i_0] [6]))))))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_4))));
                            arr_30 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-122))));
                            var_19 += ((/* implicit */long long int) ((unsigned long long int) var_1));
                        }
                        /* vectorizable */
                        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            arr_34 [i_0] [i_0] [i_0] [6] [i_2] [i_3] [i_9] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_18 [i_0] [1LL] [i_3] [i_3 + 1] [i_2] [i_9] [i_2]))));
                            arr_35 [(short)8] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(arr_10 [i_0] [i_3 + 1] [i_3] [i_3 - 1] [i_3 - 1])));
                            var_20 |= arr_29 [i_1] [i_9] [i_9] [i_3 + 1] [i_3] [i_3] [i_1];
                            arr_36 [i_0] [i_1] [i_0] [i_3 + 1] [i_3] [0U] [i_9] = ((/* implicit */short) var_7);
                        }
                    }
                    for (unsigned int i_10 = 2; i_10 < 7; i_10 += 2) 
                    {
                        var_21 ^= ((/* implicit */long long int) arr_18 [i_1] [i_1] [i_1] [i_1] [i_0] [i_1] [i_2]);
                        arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_14 [i_10 + 2] [i_0] [i_10 + 3] [i_0] [i_1]);
                        var_22 = arr_5 [i_0] [i_1];
                    }
                    for (int i_11 = 3; i_11 < 6; i_11 += 3) 
                    {
                        var_23 = ((/* implicit */int) (~(max((arr_32 [i_11] [i_11 - 3] [i_0] [i_11 + 1] [i_0] [i_11] [i_11 - 2]), (arr_32 [i_11 - 3] [i_11 + 1] [i_0] [i_11 - 2] [i_0] [i_11] [i_1])))));
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) max((arr_32 [i_0] [i_0] [i_1] [(unsigned short)4] [i_11] [i_0] [i_11]), (((/* implicit */unsigned long long int) arr_28 [(unsigned char)8] [(unsigned char)8] [i_1] [i_2] [i_11]))))))) / ((-(arr_10 [i_1] [i_11 + 1] [i_11 - 1] [i_11] [i_11 - 1]))))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 0; i_12 < 10; i_12 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (short i_13 = 0; i_13 < 10; i_13 += 2) 
                        {
                            arr_51 [i_1] [(signed char)8] [i_1] [i_0] [i_1] = (-(max(((+(arr_2 [i_1] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) - (((/* implicit */int) arr_4 [i_1] [i_13]))))))));
                            var_25 = ((/* implicit */int) max((var_10), (((/* implicit */unsigned long long int) arr_46 [i_1]))));
                            arr_52 [i_0] [i_1] [i_2] [i_1] [i_12] [i_12] &= (((~(((/* implicit */int) arr_19 [(short)8] [i_1] [i_0] [i_12] [i_0] [i_1])))) << ((((+(arr_22 [i_0] [i_1] [i_0] [(unsigned short)7] [i_13] [i_1] [i_0]))) - (1634105070))));
                        }
                        /* LoopSeq 3 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])), (((((/* implicit */_Bool) arr_1 [i_12] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) : (var_4))))))));
                            var_27 = ((/* implicit */unsigned short) min((var_27), (arr_49 [i_1] [i_2] [i_12] [i_14])));
                            arr_56 [i_1] [i_1] [i_1] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((short) max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned int) arr_3 [i_0] [i_0])))));
                        }
                        for (long long int i_15 = 0; i_15 < 10; i_15 += 2) 
                        {
                            var_28 *= ((/* implicit */_Bool) var_1);
                            arr_60 [i_15] [i_0] [i_2] = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) var_7)), (((var_10) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
                            var_29 = ((/* implicit */signed char) arr_21 [2ULL] [i_2] [i_12] [i_15]);
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) 1345125341U))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_27 [i_0] [i_1] [i_2] [9] [i_16])), (var_4)))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_3))))) : (max((((/* implicit */int) var_1)), (arr_38 [i_0] [i_0] [i_1] [2U] [i_2] [i_0]))))) : ((-((+(-109093156))))))))));
                            arr_64 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (((-(((/* implicit */int) (unsigned char)0)))) * ((+(((/* implicit */int) arr_41 [i_0] [i_0] [i_2] [i_12] [i_0]))))));
                        }
                        arr_65 [i_0] [i_0] [i_0] [i_12] = ((/* implicit */_Bool) ((unsigned int) (~(arr_1 [i_0] [i_12]))));
                        var_31 = ((/* implicit */unsigned long long int) arr_38 [i_0] [i_1] [i_2] [i_2] [i_1] [i_12]);
                        var_32 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [2ULL] [i_12] [i_2] [i_2] [4ULL])) && (((/* implicit */_Bool) var_10))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
    {
        for (int i_18 = 0; i_18 < 12; i_18 += 4) 
        {
            for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_20 = 0; i_20 < 12; i_20 += 2) 
                    {
                        for (unsigned int i_21 = 0; i_21 < 12; i_21 += 2) 
                        {
                            {
                                var_33 |= ((/* implicit */unsigned int) min((((/* implicit */unsigned char) ((arr_68 [i_17 - 1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [i_17 - 1] [i_17 - 1])))))), (max((arr_72 [i_17 - 1] [i_17 - 1] [i_17 - 1]), (arr_67 [i_17 - 1] [i_17])))));
                                arr_77 [8LL] [i_18] [i_19] [i_20] [i_21] |= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_76 [i_17] [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_17 - 1])) ? (((/* implicit */int) arr_67 [i_17] [i_19])) : ((+(((/* implicit */int) arr_70 [i_18] [i_18]))))))));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((arr_74 [i_17 - 1] [i_17] [i_19] [0ULL]), (arr_74 [i_17 - 1] [i_18] [i_18] [i_18])))), (((unsigned long long int) arr_70 [i_17 - 1] [i_17 - 1])))))));
                    var_35 = ((/* implicit */short) var_9);
                }
            } 
        } 
    } 
}
