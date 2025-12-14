/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_18 = (min(var_18, (arr_1 [i_0])));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_1 - 1] [i_1 - 1] [3] [i_1] = (arr_1 [i_0 + 1]);
                        arr_14 [i_1] [i_1] = (arr_4 [i_1] [i_1]);
                        arr_15 [i_1] [i_2] [i_1 - 1] [i_1] = var_6;
                    }
                }
            }
            var_19 &= 1;
        }
        arr_16 [i_0] |= var_7;
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_20 = var_7;
        var_21 = var_10;
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 23;i_5 += 1)
    {
        var_22 = (arr_19 [6] [i_5]);
        var_23 = (((66 ? 2147483644 : 120)));
    }
    #pragma endscop
}
