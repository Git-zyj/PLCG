/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (+((9223372036854775807 ? (arr_2 [i_0]) : (-9223372036854775807 - 1))));
        var_13 = var_12;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_11 [18] [i_1] [i_0] [i_3 + 3] = arr_4 [i_0] [i_2];

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_14 = (arr_1 [i_3 + 3] [i_3 + 3]);
                            var_15 = var_11;
                        }
                        for (int i_5 = 2; i_5 < 23;i_5 += 1) /* same iter space */
                        {
                            var_16 = (-9223372036854775807 - 1);
                            var_17 = (!var_1);
                            var_18 = (max(var_18, (arr_13 [i_0] [i_2] [i_2] [i_3] [i_5 + 1])));
                        }
                        for (int i_6 = 2; i_6 < 23;i_6 += 1) /* same iter space */
                        {
                            arr_18 [i_0] = (var_9 ? (arr_14 [i_6 - 2] [i_1] [i_3 + 2] [i_2] [i_6 + 1] [0]) : (arr_14 [i_6 - 2] [i_1] [i_3 + 3] [i_6] [i_1] [i_6]));
                            arr_19 [i_0] [i_1] [i_1] [i_0] [i_0] = ((arr_16 [i_1] [i_2] [i_6]) | -5626709336575864796);
                            var_19 ^= (var_5 ? var_3 : var_1);
                            var_20 = ((arr_16 [i_3 + 1] [i_3] [i_6 - 1]) << (((arr_16 [i_3 - 2] [i_6 - 1] [i_6 - 2]) - 1748468234643217354)));
                            arr_20 [i_0] [i_0] [i_0] [12] [12] = (7382613053836646305 ? (arr_7 [i_6] [i_0] [i_0] [i_3]) : (-9223372036854775807 - 1));
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [5] [i_0] = 9223372036854775807;
                            var_21 = (arr_15 [i_0] [i_3]);
                            var_22 = var_12;
                        }
                    }
                }
            }
        }
        arr_25 [i_0] = ((arr_1 [i_0] [13]) ? ((5626709336575864795 ? (arr_13 [7] [i_0] [i_0] [i_0] [1]) : (arr_16 [2] [i_0] [4]))) : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]));
    }
    var_23 = (0 ? var_5 : (var_4 / var_11));
    var_24 = var_3;
    var_25 = (var_9 ? (min((min(-4128062379422231599, -8559993690586322528)), var_9)) : (min(9223372036854775807, 9223372036854775797)));
    #pragma endscop
}
