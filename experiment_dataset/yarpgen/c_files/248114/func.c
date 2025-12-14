/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248114
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
    var_20 = ((/* implicit */unsigned int) var_2);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 3) 
                        {
                            arr_14 [i_0] [i_0] [i_2] [i_4 - 3] = ((/* implicit */long long int) ((unsigned int) (~(4294967295U))));
                            arr_15 [i_0 + 1] = ((/* implicit */signed char) ((arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1]) / (arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1])));
                        }
                        arr_16 [(signed char)21] [i_1] [i_1] [i_3] = ((/* implicit */short) var_7);
                        arr_17 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) (!(arr_4 [i_0] [i_0 + 1])));
                        var_21 = ((/* implicit */unsigned short) (+(var_8)));
                    }
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            arr_25 [i_5] [i_1] [i_0] = ((_Bool) arr_8 [(_Bool)1]);
                            arr_26 [i_0] [i_5] [i_0] [6LL] [i_0] = ((/* implicit */unsigned long long int) var_7);
                            var_22 -= ((/* implicit */int) (+(arr_8 [i_0])));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            arr_31 [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) & (14392493941147142ULL)))) ? (((var_12) >> (((((/* implicit */int) var_10)) - (147))))) : (((/* implicit */int) arr_24 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
                            var_23 ^= ((/* implicit */unsigned int) max((((/* implicit */long long int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_21 [i_5] [i_5] [i_2] [i_5]))))), (((signed char) 9223372036854775807ULL))))), (-1781480516840961250LL)));
                            arr_32 [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) arr_30 [i_0] [i_1] [i_2] [i_0 + 1] [i_7]);
                        }
                        for (long long int i_8 = 1; i_8 < 21; i_8 += 2) 
                        {
                            arr_35 [i_0 + 1] [i_1] [i_0 + 1] [i_5] [(_Bool)1] &= ((/* implicit */unsigned char) max((((min((arr_2 [i_0] [i_1]), (((/* implicit */unsigned int) (unsigned char)206)))) * (((/* implicit */unsigned int) ((/* implicit */int) min((var_7), (((/* implicit */signed char) arr_7 [i_5] [i_1] [i_2])))))))), (((/* implicit */unsigned int) min((arr_18 [i_0 + 1]), (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
                            arr_36 [i_5] = arr_6 [i_0] [i_1] [2U] [i_5];
                        }
                        var_24 = ((/* implicit */long long int) arr_7 [i_0] [i_1] [i_2]);
                    }
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) var_0))));
                        var_26 ^= ((unsigned int) ((6930229068967992798LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-121)))));
                    }
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        arr_44 [i_1] [i_1] [i_2] [i_1] [(unsigned short)15] = arr_18 [i_1];
                        arr_45 [i_0 + 1] [i_1] [i_2] [i_10 + 1] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_0 + 1] [i_0 + 1] [i_10 + 1] [i_10 + 1])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (arr_1 [i_0]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0)))))));
                    }
                    var_27 |= ((/* implicit */_Bool) max((min((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_0 [i_2] [i_1])))), (((int) (_Bool)1)))), (((/* implicit */int) (!((_Bool)1))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        var_28 -= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)0))));
                        var_29 = ((/* implicit */unsigned char) var_9);
                        var_30 ^= ((/* implicit */unsigned long long int) (!(arr_0 [i_0 + 1] [i_0 + 1])));
                    }
                    /* vectorizable */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_53 [22LL] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((-1072215390678821953LL) != (((/* implicit */long long int) arr_42 [i_12] [i_2] [i_2] [i_2])))) ? ((~(1072215390678821952LL))) : (((long long int) arr_22 [i_0] [i_1] [i_1] [i_12]))));
                        /* LoopSeq 2 */
                        for (int i_13 = 1; i_13 < 23; i_13 += 2) 
                        {
                            arr_56 [i_0] [i_1] [i_0] [i_1] [i_13] = ((/* implicit */long long int) ((int) 1072215390678821952LL));
                            var_31 = ((/* implicit */unsigned char) ((unsigned int) arr_48 [i_0 + 1] [i_0] [i_0 + 1] [i_12] [i_13 - 1]));
                        }
                        for (int i_14 = 0; i_14 < 24; i_14 += 2) 
                        {
                            arr_60 [i_0 + 1] [i_1] [i_12] [i_0 + 1] [i_0 + 1] [i_0] = var_8;
                            arr_61 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [9LL] [17] [i_0] = ((/* implicit */long long int) arr_9 [18LL] [(unsigned short)6] [i_14]);
                        }
                        arr_62 [i_0] [i_1] = ((/* implicit */long long int) arr_1 [i_0 + 1]);
                        arr_63 [i_0 + 1] [i_1] [(_Bool)1] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [8U] [i_1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_0 + 1] [(short)13] [i_0 + 1] [(short)13] [i_0])) >> (((arr_52 [i_0] [i_1] [i_2] [i_12]) + (7681078233374338440LL)))))) : ((+(arr_43 [i_12] [i_2] [i_0])))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 2) 
                    {
                        arr_66 [i_0 + 1] [i_1] [i_2] [6U] = ((/* implicit */unsigned int) arr_27 [i_0 + 1] [i_0] [i_0 + 1] [18LL] [i_0 + 1] [i_2]);
                        arr_67 [18] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) < (arr_47 [i_0] [i_0] [i_0])));
                        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (unsigned short)1228))));
                        var_33 *= ((/* implicit */long long int) ((((/* implicit */int) (!(var_19)))) < (arr_29 [i_0 + 1] [i_2] [i_0 + 1])));
                    }
                }
            } 
        } 
    } 
    var_34 = (~((~(((((/* implicit */int) var_2)) >> (((/* implicit */int) var_19)))))));
}
