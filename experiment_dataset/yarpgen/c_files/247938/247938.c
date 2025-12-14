/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -51;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_14 = var_2;
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_15 = (max(var_15, (!-var_7)));
                        arr_8 [i_0 - 1] [i_1 - 2] [i_1 - 2] [i_2] [i_0] = ((~(arr_0 [i_0])));
                        var_16 = (max(var_16, -46646));
                        var_17 -= var_2;
                        arr_9 [i_3] [i_0] = (~var_4);
                    }
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 20;i_4 += 1)
    {
        var_18 -= (min((arr_11 [i_4] [i_4]), 8176));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 20;i_6 += 1)
            {
                {
                    arr_17 [i_4] [i_5 + 3] [i_5 + 3] [15] = var_4;
                    arr_18 [i_5] [i_4] = (arr_12 [i_5]);
                }
            }
        }
        var_19 = (var_2 ? (8168 - 2147483647) : (((arr_11 [i_4 + 2] [i_4 - 1]) ? (arr_11 [i_4] [i_4 + 2]) : (arr_14 [i_4 + 1] [i_4]))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        var_20 -= ((var_9 / (arr_11 [i_7] [i_7])));
        arr_23 [i_7] = (arr_15 [15] [8] [i_7] [i_7]);
        var_21 = -8164;
    }
    var_22 = var_12;
    var_23 = ((!((((max(var_12, -8176)) / var_5)))));
    #pragma endscop
}
