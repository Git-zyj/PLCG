/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [12] = (!var_11);
        arr_3 [i_0] = (var_2 * var_16);
    }
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    arr_10 [i_2] = (max((((((max(-16741, 1966080))) ? (min(var_7, var_14)) : 16769))), (~4294967295)));
                    arr_11 [i_2] [i_2] [i_2] [i_1 - 2] = 42875;

                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 24;i_4 += 1)
                    {
                        arr_15 [i_1] [i_2] [i_1] [i_4 - 2] [i_1 - 1] = (arr_8 [i_4 - 3] [i_2] [i_1 - 2]);
                        arr_16 [i_2] [i_2] [i_2] [i_4] = (arr_13 [i_4] [i_4] [i_2] [i_4]);
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        arr_19 [i_5] = var_15;
        arr_20 [i_5] = ((~((~(arr_5 [i_5] [i_5])))));
        arr_21 [i_5] [5] = -16769;
        arr_22 [i_5] [i_5] = ((var_12 != (((arr_13 [i_5] [i_5] [8] [2]) ? -1966073 : var_11))));
    }
    #pragma endscop
}
