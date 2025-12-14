/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, ((((arr_2 [i_1]) ? (((arr_3 [i_2]) ? ((var_3 ? (arr_4 [i_2] [i_1]) : (arr_4 [i_2] [i_1]))) : -var_18)) : (+-32764))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = (arr_3 [i_0]);
                                arr_13 [11] [i_0] [i_2] [6] [i_4] = (((min((((arr_9 [i_0] [9] [7]) ? 8544217518210622328 : var_1)), (((1 ? var_9 : (arr_0 [i_0])))))) / (((-(arr_11 [6] [11] [i_2] [i_3] [i_0]))))));
                            }
                        }
                    }
                    var_21 *= (((((-(arr_5 [7] [i_1])))) ? ((((4210135416466380215 + (arr_3 [i_0]))) << ((((var_15 * (arr_7 [i_2] [8] [8] [2]))) - 206)))) : ((((arr_10 [i_2] [i_2] [13] [1] [13] [i_0]) ? (arr_10 [i_0] [11] [i_0] [i_0] [i_0] [9]) : var_7)))));
                }
            }
        }
    }
    var_22 = var_14;
    var_23 = (min(var_23, var_9));
    var_24 = (min((((max(65535, 231)))), (((((8544217518210622328 ? (-2147483647 - 1) : var_16))) ? (((max(1, var_5)))) : (min(var_0, var_2))))));
    #pragma endscop
}
