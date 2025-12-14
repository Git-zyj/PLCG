/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203739
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
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
                        {
                            var_19 *= ((((/* implicit */int) var_8)) >> (((/* implicit */int) arr_0 [i_0 - 1])));
                            var_20 = ((/* implicit */short) min((var_20), (var_2)));
                        }
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
                        {
                            var_21 = arr_9 [i_2 + 2] [i_1] [i_0];
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) arr_0 [i_1]))));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_12 [i_5 + 1] [i_5 + 1] [i_5] [i_5] [i_5 + 1]), (((/* implicit */short) arr_6 [i_0 + 2])))))) + (max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0]))))), (arr_8 [i_0] [i_0] [(_Bool)1])))));
                        }
                        arr_17 [i_0 + 1] [i_0] [i_3] [i_0] [i_0] [i_0 - 1] = ((/* implicit */short) (_Bool)1);
                        /* LoopSeq 3 */
                        for (short i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            arr_20 [i_0] [i_0] [i_2 + 1] [i_3] [i_0] [i_6] [i_3] = var_9;
                            arr_21 [i_3] [i_1] [i_2 - 1] [12ULL] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_3 [(short)7] [i_2 - 1] [i_2 + 1])) ? (arr_3 [i_2] [i_2 + 2] [i_2]) : (var_5))));
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_3] = (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))));
                            arr_23 [i_0] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_4 [i_0 + 1]), (((/* implicit */short) (_Bool)1))))) == (((/* implicit */int) max((arr_4 [i_2 - 1]), (arr_4 [i_3]))))));
                        }
                        for (short i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            var_24 ^= ((/* implicit */short) arr_5 [i_1]);
                            arr_27 [i_0 - 1] [i_3] [i_3] [i_3] [(_Bool)1] [i_0 - 1] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((arr_18 [i_0] [i_3] [i_0] [i_0] [i_7] [i_1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0 - 1] [i_1] [i_2] [i_0 - 1] [i_7])))))))), ((-(((/* implicit */int) arr_1 [i_0 + 2]))))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_25 = arr_16 [i_0 + 2] [i_1] [i_2] [i_3] [i_3];
                            arr_31 [i_3] [i_3] [i_0] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */unsigned long long int) arr_29 [i_2 + 2] [i_3] [i_8] [i_8] [i_8] [i_8] [i_8])), (18446744073709551602ULL))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 1; i_9 < 17; i_9 += 4) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */short) ((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) max((((/* implicit */int) arr_36 [i_10] [i_9 + 3] [i_1] [i_1] [i_0])), (arr_32 [i_9])))))) ? (((((/* implicit */_Bool) (short)-18545)) ? (193755255U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_11 [i_0 - 1] [i_0] [i_9] [i_0] [i_0 - 2]))))) | (((/* implicit */int) ((unsigned char) arr_25 [i_0] [i_1] [i_2 + 2] [i_9] [i_10]))))))));
                                var_27 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_33 [i_0] [i_1] [i_2] [i_9 + 2] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_9] [i_2] [i_10]))) : ((+(0ULL))))), (((/* implicit */unsigned long long int) arr_38 [i_9 + 2] [i_9] [i_9] [i_9 + 2] [i_9 + 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        for (short i_12 = 1; i_12 < 6; i_12 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                var_28 *= ((/* implicit */short) ((((arr_44 [i_12 + 4] [i_12 + 4] [i_12 + 2] [i_12 - 1]) ^ (arr_44 [i_12 + 4] [i_12] [i_12 + 4] [i_12 + 4]))) & (((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) arr_28 [8] [i_14] [i_12] [8]))))))));
                                var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_38 [i_12] [i_12] [i_12] [i_12 + 3] [i_12 - 1])) / (((/* implicit */int) arr_38 [i_12] [i_12] [i_12] [i_12 + 3] [3ULL])))))));
                            }
                        } 
                    } 
                } 
                arr_51 [i_11] [i_11] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) arr_9 [i_12 + 2] [i_12 + 3] [i_12 + 3])), (var_6))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max((max((var_2), (arr_33 [i_11] [i_11] [i_11] [(short)1] [i_12]))), (((/* implicit */short) arr_40 [i_12 + 1] [i_11]))))))));
            }
        } 
    } 
}
