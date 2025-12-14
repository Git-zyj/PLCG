/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50909
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
    var_17 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned long long int) min((-213235137240204320LL), (((/* implicit */long long int) (unsigned char)136)))))));
    var_18 |= ((/* implicit */_Bool) var_15);
    var_19 = ((/* implicit */unsigned char) var_1);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) min((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])), (arr_6 [i_0 + 3] [(unsigned char)4] [i_0 + 3]))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_11 [i_2] [i_1] [(short)12] [(short)12] [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) arr_10 [i_2] [i_3] [i_2] [i_1] [i_2] [i_2]);
                                arr_12 [i_2] [i_1] [i_1] [i_1] [2U] [6U] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_4] [i_2] [i_0] [i_2] [i_2] [i_0])) || (((/* implicit */_Bool) 0))));
                                arr_13 [i_4] [i_2] [i_2] [1] = ((/* implicit */unsigned int) arr_7 [i_2] [3U] [i_2]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (short i_6 = 3; i_6 < 14; i_6 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_0] [(unsigned char)8] [i_0] [i_2] [11U] [i_0] = ((/* implicit */unsigned long long int) arr_7 [i_2] [i_1] [i_1]);
                                arr_19 [i_2] [i_6] [i_5] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_7 [i_2] [i_2] [i_6])), (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 + 1])));
                                var_21 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((1455379564) != (-1455379578)))), (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_8 [(_Bool)0])), (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 + 3]))))))));
                                var_22 += ((/* implicit */_Bool) arr_4 [4]);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) ((((/* implicit */long long int) arr_9 [i_2] [i_2] [i_2] [i_1] [i_2] [i_0])) & (arr_14 [i_2] [i_2] [i_1] [i_0] [i_0 + 3])));
                }
            } 
        } 
        var_24 += ((/* implicit */_Bool) arr_5 [(unsigned char)0] [12LL] [i_0] [(unsigned char)0]);
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((26228403) <= (((/* implicit */int) (unsigned char)190)))), (((((/* implicit */long long int) ((/* implicit */int) arr_8 [(unsigned short)10]))) <= (arr_14 [i_0] [i_0 + 3] [i_0] [i_0 + 3] [i_0])))))) == (arr_4 [0])));
    }
    for (long long int i_7 = 3; i_7 < 17; i_7 += 3) 
    {
        arr_22 [i_7] = ((/* implicit */_Bool) min((min((min((arr_21 [i_7]), (((/* implicit */unsigned short) arr_20 [i_7] [i_7])))), (arr_21 [i_7]))), (min((((/* implicit */unsigned short) arr_20 [i_7] [i_7])), (arr_21 [i_7])))));
        var_26 += ((/* implicit */_Bool) arr_21 [(_Bool)0]);
        var_27 = ((/* implicit */long long int) min((arr_21 [i_7]), (arr_21 [i_7])));
        var_28 = ((/* implicit */unsigned char) min((arr_20 [i_7] [i_7 - 3]), (((((/* implicit */int) ((((/* implicit */int) arr_21 [i_7])) != (((/* implicit */int) arr_20 [i_7] [i_7]))))) < (((/* implicit */int) arr_20 [i_7] [7]))))));
    }
    var_29 = ((/* implicit */int) max((min((var_7), (((/* implicit */unsigned int) ((-1455379581) / (((/* implicit */int) (unsigned char)135))))))), (((/* implicit */unsigned int) ((var_7) > (((/* implicit */unsigned int) ((1) << (((((/* implicit */int) var_10)) + (32690)))))))))));
}
