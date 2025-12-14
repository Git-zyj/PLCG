/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/267
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_13 -= ((/* implicit */unsigned short) ((unsigned int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_1))) + (((/* implicit */unsigned int) ((/* implicit */int) var_10))))));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */_Bool) var_10);
                        var_15 = ((/* implicit */unsigned int) arr_1 [i_3]);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_0] [i_1] [i_1 - 2] [i_1 - 2] [7U] [i_3 + 1]))));
                            arr_12 [i_1] [i_1] [i_4] [i_2] [i_4] [i_1] [i_0] = ((/* implicit */long long int) arr_1 [(unsigned char)10]);
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))));
                            arr_13 [i_0] [i_1] = ((/* implicit */long long int) var_9);
                        }
                        for (signed char i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            var_18 = var_5;
                            var_19 = ((/* implicit */_Bool) var_7);
                        }
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            arr_20 [i_6] [i_1] = ((/* implicit */unsigned int) ((var_11) ? (arr_1 [i_0]) : (((((/* implicit */int) var_4)) % (((/* implicit */int) arr_7 [i_0] [i_0] [i_1]))))));
                            var_20 += ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */int) arr_3 [i_2] [i_6])) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_8 [i_0] [i_1]))))) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_0 [3]))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            arr_24 [i_1] = ((/* implicit */signed char) min((((/* implicit */int) ((_Bool) var_2))), (var_3)));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_10))))) : (((((/* implicit */int) var_9)) & (((/* implicit */int) arr_3 [i_1 + 1] [i_3 + 2]))))));
                            var_22 |= ((/* implicit */unsigned char) arr_15 [(short)13] [i_1] [i_1 + 2] [i_3] [i_3 + 1]);
                        }
                    }
                    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        var_23 = ((/* implicit */signed char) var_9);
                        arr_28 [i_1] = ((/* implicit */_Bool) ((var_1) & (min((var_1), (((/* implicit */unsigned int) (unsigned char)46))))));
                        var_24 *= ((/* implicit */signed char) arr_1 [i_8]);
                        arr_29 [i_0] [i_1] [i_1] [i_8] [i_2] [i_0] = ((/* implicit */_Bool) min((arr_11 [i_1] [12LL] [i_1 + 1] [i_8] [(unsigned short)12] [i_8]), (((/* implicit */long long int) min((((/* implicit */int) arr_15 [16ULL] [i_1] [i_1 + 1] [9] [i_2])), (var_3))))));
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)255))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */int) var_6))))) : (((((/* implicit */unsigned long long int) ((long long int) arr_17 [i_0] [i_0] [(signed char)11] [i_1] [(signed char)11] [3]))) * (arr_26 [i_8])))));
                    }
                    arr_30 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) var_3);
                    var_26 = ((/* implicit */signed char) ((((/* implicit */int) var_9)) > (((((_Bool) arr_26 [i_0])) ? (((/* implicit */int) arr_21 [i_0] [i_0])) : (((/* implicit */int) var_10))))));
                }
            } 
        } 
        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) var_8)), (((var_0) & (((/* implicit */int) var_8))))))) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        arr_31 [15] [i_0] = var_3;
    }
    var_28 = ((/* implicit */signed char) var_6);
    var_29 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) > (max((((/* implicit */long long int) (_Bool)1)), (9223372036854775807LL)))));
    var_30 = ((/* implicit */short) var_1);
}
