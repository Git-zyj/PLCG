/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((min(-var_5, (~1))), var_6));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0]) ? ((((var_14 << (((((arr_1 [i_0 - 1]) + 13998)) - 21)))) / (arr_1 [i_0]))) : (min((arr_1 [i_0 + 1]), ((var_7 ? (arr_0 [i_0]) : 2147483647))))));
        arr_3 [i_0 - 1] = var_15;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_17 [i_2] [i_2] [i_2] [i_2] [7] [i_2] = (((arr_14 [i_1] [i_2] [i_3] [i_4]) / (arr_8 [i_3])));
                        arr_18 [i_2] [i_2] [i_3] [i_2] = (83 + 0);
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            arr_21 [i_1] [2] [i_1] = (arr_16 [i_1] [i_1] [9]);
            arr_22 [i_5] [i_5] [i_5] = (-4 % 4);
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            arr_25 [i_1] [i_1] = (arr_16 [i_6] [i_6] [i_1]);
            arr_26 [i_1] [i_1] = (var_15 && (((14782696321363523877 ? var_4 : var_14))));
            arr_27 [14] [i_6] = var_14;
        }
    }
    #pragma endscop
}
