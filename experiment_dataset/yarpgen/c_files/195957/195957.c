/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((max(var_3, ((var_12 ? var_0 : var_13))))) ? ((((var_7 ? 2706632568 : var_3)) & (var_0 && var_8))) : var_7));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = (arr_1 [i_0] [i_1]);
                var_15 ^= 0;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        var_16 &= (((arr_3 [i_2 + 3] [15] [i_2]) ? (arr_3 [i_2 + 1] [i_2 + 1] [i_2 - 1]) : (arr_3 [i_2 + 3] [i_2] [19])));

        for (int i_3 = 4; i_3 < 16;i_3 += 1)
        {
            var_17 = ((2202546773 ? var_1 : var_13));

            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                var_18 = (arr_3 [i_2] [0] [i_4]);
                arr_13 [i_2 - 3] [i_2 - 3] = var_10;
                arr_14 [i_3 + 1] [i_3 + 1] = ((4294967272 | (arr_9 [i_3 - 4])));
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    {
                        var_19 = (var_9 * var_13);
                        var_20 = 2578463242324733594;
                        arr_19 [i_2] [5] [i_2] [i_6] = var_12;
                    }
                }
            }
        }
        var_21 = (((var_12 / (arr_15 [i_2]))));
    }
    #pragma endscop
}
