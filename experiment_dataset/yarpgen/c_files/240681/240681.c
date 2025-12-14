/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = ((var_6 != (arr_0 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_13 = ((!2147483647) ? (var_10 - -1) : var_8);
                        var_14 = (arr_0 [i_2] [i_3]);
                        var_15 *= (((arr_6 [i_0] [i_1] [i_2]) ? var_7 : var_8));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_4 = 4; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 22;i_6 += 1)
                    {
                        {
                            arr_18 [i_4] &= var_6;
                            var_16 = (min(var_16, (((var_9 ? (arr_7 [i_0] [i_1] [i_0] [i_1] [i_6 + 2] [i_5]) : var_0)))));
                            arr_19 [i_0] [i_0] [5] [i_5] [i_0] [i_1] [i_0] = (0 ^ 6320394592837332732);
                            arr_20 [i_0] [i_4 - 3] [i_0] [i_0] [i_0] [i_5] = (~var_7);
                            arr_21 [i_0] [i_0] [i_4] [i_4] [i_6 - 3] [i_0] = ((arr_15 [i_0] [i_1] [i_0] [i_4] [i_6 - 3] [i_1]) ? var_1 : var_8);
                        }
                    }
                }
            }
            arr_22 [i_0] = var_6;
        }
        arr_23 [i_0] = (arr_6 [i_0] [i_0] [i_0]);
        var_17 = ((-(arr_9 [i_0] [i_0] [i_0] [i_0])));
    }
    #pragma endscop
}
