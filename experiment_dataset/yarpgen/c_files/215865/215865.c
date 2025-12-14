/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = var_0;
        var_10 = var_3;
        var_11 = var_9;
        var_12 = var_3;
        var_13 = var_2;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_14 = (max(var_14, var_6));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                arr_18 [17] [10] [i_3] [3] [10] = var_1;
                                arr_19 [i_1] [8] [12] [0] [1] [i_1] = var_8;
                                var_15 = (max(var_15, var_8));
                            }
                        }
                    }
                    arr_20 [4] = var_0;
                }
            }
        }
        var_16 = (min(var_16, var_1));
    }
    for (int i_6 = 2; i_6 < 12;i_6 += 1)
    {
        var_17 += var_1;
        var_18 = var_5;
        var_19 = var_2;
    }
    var_20 = var_4;
    var_21 = var_0;
    #pragma endscop
}
