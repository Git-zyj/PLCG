/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = var_11;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_12 [2] [8] [i_2] [i_2] [i_2] |= var_9;
                            var_16 = ((18446744073709551602 < (((var_14 ? var_5 : -11)))));
                            var_17 = var_12;
                            var_18 = 191340737;
                        }
                    }
                }
                arr_13 [i_0] [i_0] [6] = ((var_6 == (((var_3 ? 0 : var_12)))));
                arr_14 [i_0] [i_0] = ((((1 ? 1 : 12766965300397932496)) | ((min(var_14, (max(var_1, var_6)))))));
            }
        }
    }
    var_19 = (max(var_19, (((((((var_14 ? var_12 : var_7))) / ((var_13 ? var_5 : var_1))))))));
    var_20 |= ((var_4 << (min((var_5 / var_10), var_14))));
    #pragma endscop
}
