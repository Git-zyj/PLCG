/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (63159 < -1375185942);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_17 = var_9;
                            var_18 = arr_3 [10] [i_1] [3];
                            var_19 = (min(var_19, (((max(28, 8191))))));
                        }
                    }
                }
                var_20 = var_8;
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 8;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 10;i_5 += 1)
                    {
                        {
                            arr_17 [i_0] [i_1 - 3] [i_0] [i_5] = (((28642 ? (((min(28642, var_1)))) : var_1)));
                            var_21 = (min(var_21, ((((min((arr_12 [i_4 + 3] [i_4 + 3]), 2929893011)) / (((-28643 ? (arr_2 [8] [i_0]) : 201186013))))))));
                            arr_18 [i_0] [i_1] = (((((((2377 ? (arr_14 [0] [i_5 - 1] [i_0] [i_5]) : var_7)) | ((max((arr_0 [0]), 2147483647)))))) ? ((((-(arr_10 [6] [i_4 + 3] [i_1]))))) : var_14));
                            var_22 = (-((-(min(var_15, -201186014)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
