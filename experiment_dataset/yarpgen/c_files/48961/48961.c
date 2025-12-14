/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_18 = ((((((arr_4 [i_3 + 2] [i_3 + 2] [i_2 + 2]) ? -var_10 : (min(var_14, (arr_6 [i_4])))))) ? var_6 : 1460699715));
                                var_19 = var_2;
                                arr_13 [7] [i_1] [7] [7] [7] [i_3] = var_13;
                                var_20 = ((min((arr_0 [i_2 - 2]), (arr_0 [i_2 + 1]))));
                            }
                        }
                    }
                }
                var_21 = max(var_16, (max(var_1, var_15)));
            }
        }
    }
    var_22 = ((var_13 ? var_4 : var_9));

    /* vectorizable */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_23 = (((arr_17 [i_5] [i_5]) > (arr_15 [i_5] [i_5])));
        var_24 = (((var_3 ? var_3 : var_5)));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 23;i_8 += 1)
                {
                    {
                        arr_25 [i_5] [i_5] [i_5] [i_7] [i_7] [i_8] = var_17;
                        arr_26 [i_5] [i_6] [i_7] [i_8 - 1] = var_7;
                    }
                }
            }
        }
    }
    #pragma endscop
}
