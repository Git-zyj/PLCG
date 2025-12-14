/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~var_1);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_12 = (min(var_12, (arr_10 [i_0] [i_0] [i_2] [i_1 + 1])));
                        var_13 = var_0;
                        var_14 = (((arr_10 [4] [i_1 + 1] [1] [i_1 + 1]) ? var_5 : (arr_12 [i_0] [i_0] [i_0])));
                        arr_13 [i_0] [i_0] [16] [i_0] = (((arr_10 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1]) - (arr_10 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 2])));
                    }
                }
            }
        }
        var_15 = (((arr_7 [i_0]) ? var_10 : (arr_7 [i_0])));

        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_16 *= ((-5862 ? var_0 : (var_5 / var_3)));
            arr_17 [i_4] = (1705210874 - 4250295324);
        }
        arr_18 [16] [i_0] = (((var_6 & var_9) ? (arr_3 [i_0]) : (~var_8)));
        arr_19 [12] = var_7;
    }
    var_17 |= var_10;
    #pragma endscop
}
