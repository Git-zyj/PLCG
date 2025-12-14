/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201698
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) max((arr_7 [i_0] [i_0]), (((/* implicit */unsigned short) arr_4 [i_0])))))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 1; i_3 < 8; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1] [(unsigned short)6] [i_1])) - (((/* implicit */int) arr_4 [i_3]))))) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_2])))) << (((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (((/* implicit */int) arr_0 [i_2 - 1])) : (((/* implicit */int) arr_0 [i_2 - 1]))))));
                        arr_11 [i_3 - 1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_8 [i_3] [i_3 - 1] [i_3 + 1] [i_3 + 2]))));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            arr_15 [i_1] [i_1] = ((/* implicit */long long int) ((max((arr_12 [i_1] [i_1]), (arr_12 [i_1] [i_1]))) != (((arr_6 [i_1] [i_1] [i_1]) ? (arr_12 [i_3] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [(unsigned short)3] [i_2 - 1])))))));
                            arr_16 [i_0] [(_Bool)1] [(_Bool)1] [i_1] [(unsigned short)5] [i_4] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_14 [i_0] [i_1] [(unsigned short)7] [i_2 - 1] [i_4] [i_1])) > (((/* implicit */int) arr_7 [i_2 - 1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [(unsigned short)1] [i_3 - 1] [i_4]))) : (((arr_2 [i_3 + 2] [i_3 + 1] [i_3 + 2]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2 - 1])))))));
                        }
                        for (unsigned int i_5 = 1; i_5 < 7; i_5 += 1) 
                        {
                            arr_20 [i_0] [i_1] [4U] [3U] [i_1] [(unsigned char)4] [4U] = ((/* implicit */unsigned short) min((((/* implicit */int) max((arr_3 [i_2 - 1] [i_3 - 1] [i_1]), (arr_3 [i_2 - 1] [i_3 - 1] [i_1])))), (((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_3 + 2] [i_1])) ? (((/* implicit */int) arr_3 [i_2 - 1] [i_3 - 1] [i_1])) : (((/* implicit */int) arr_3 [i_2 - 1] [i_3 + 1] [i_1]))))));
                            var_21 |= ((/* implicit */unsigned short) min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55645))) | (533594521U))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [i_5 - 1] [(unsigned short)0] [(unsigned short)2] [i_5 + 2] [i_5 + 3] [i_5])))))));
                        }
                        arr_21 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(arr_6 [i_1] [i_1] [i_1]))))) + (arr_2 [i_1] [i_1] [(unsigned char)5])))) ? (((/* implicit */int) arr_3 [i_0] [8U] [i_1])) : (((/* implicit */int) arr_1 [i_3 + 2] [i_3 - 1]))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_24 [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) arr_13 [i_0] [i_1] [i_2] [i_1] [i_6]);
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_14 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0] [2LL] [i_2 - 1] [2LL] [i_6]))))) ? (((/* implicit */int) arr_17 [(unsigned char)0] [i_2 - 1] [(unsigned char)0] [i_6] [i_6] [3U])) : (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_2] [i_6] [(_Bool)0]))))))) ? (((/* implicit */int) (!(arr_8 [i_1] [i_1] [i_2 - 1] [i_2 - 1])))) : (((/* implicit */int) arr_13 [i_6] [i_6] [i_2] [i_6] [i_2])))))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 1; i_8 < 9; i_8 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_2] [i_2 - 1] [i_1] [i_1] [i_1] [9U])) ? (((/* implicit */int) arr_17 [i_1] [i_2 - 1] [i_1] [i_1] [i_1] [i_1])) : (((((/* implicit */_Bool) arr_17 [i_8] [i_2 - 1] [(unsigned short)2] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_17 [i_8] [i_2 - 1] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_17 [i_2] [i_2 - 1] [(unsigned short)0] [(unsigned char)6] [(unsigned short)0] [(unsigned short)0])))))))));
                            arr_30 [i_7] [i_1] [i_7] [i_7] [(unsigned short)2] |= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_29 [i_2 - 1] [i_8 + 1] [i_2 - 1] [i_8] [i_8])) ? (((/* implicit */int) arr_29 [i_2 - 1] [i_8 + 1] [i_8] [i_8] [(unsigned char)4])) : (((/* implicit */int) arr_29 [i_2 - 1] [i_8 + 1] [i_8] [6U] [i_8])))), (((/* implicit */int) arr_1 [i_8 + 1] [i_0]))));
                            arr_31 [i_0] [i_0] [4LL] [i_7] [i_0] &= ((/* implicit */unsigned short) arr_4 [i_0]);
                        }
                        /* vectorizable */
                        for (unsigned short i_9 = 1; i_9 < 9; i_9 += 1) /* same iter space */
                        {
                            arr_34 [i_9] [i_1] = ((/* implicit */unsigned int) arr_8 [i_2 - 1] [i_2 - 1] [i_9 - 1] [i_9]);
                            arr_35 [i_1] [i_2 - 1] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned char)201)) ? (((/* implicit */int) arr_9 [i_0] [2LL] [2LL] [i_2] [2LL] [i_9 - 1])) : (((/* implicit */int) (unsigned short)33744))))));
                        }
                        arr_36 [i_7] [i_7] [i_7] [i_1] = ((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) arr_18 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0] [(_Bool)1] [i_2] [i_2] [i_7]))) : (arr_25 [i_0] [i_1] [i_2 - 1] [i_1] [i_7]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_2 - 1] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))))))), (arr_2 [i_0] [i_0] [i_0])));
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_0] [i_2 - 1] [i_2 - 1] [i_0] [i_2 - 1])) - (((/* implicit */int) min((min((arr_33 [i_1] [i_1] [i_1] [i_0] [i_1] [i_1] [i_1]), (arr_10 [9LL] [(unsigned char)1] [i_2 - 1] [i_2 - 1]))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_2] [i_0] [i_2])))))))))))));
                        arr_37 [i_0] [i_1] [i_2] [i_2] [i_2] [i_7] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_0] [6U] [i_0])) ? (((/* implicit */int) arr_0 [i_7])) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_1]))))) >= (arr_26 [i_1] [(unsigned short)7] [1U] [1U] [i_1] [i_1]))))) * (arr_12 [i_2 - 1] [i_1])));
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
}
