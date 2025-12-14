/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_3 ? var_8 : var_8));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_14 = 18446744073709551600;
            arr_6 [i_1] = (((((44480 ? -12 : 6))) ? ((((arr_1 [i_1]) || (arr_1 [i_1])))) : (min(-2, 60341))));
            var_15 = (arr_1 [i_1]);
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_16 = ((var_2 ? (max(((2452720794 ? (arr_15 [i_0] [i_1] [i_2 + 1] [1] [i_3] [15] [i_4 - 2]) : (arr_15 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0] [i_4]))), (arr_9 [i_0] [i_0]))) : var_2));
                            arr_16 [i_1] [i_1] [i_4] [i_3] = (((max(var_0, (((arr_9 [i_0] [i_0]) ? -83 : (arr_14 [i_4] [i_3] [i_1] [i_1] [0]))))) > (arr_11 [i_0] [i_2 + 3] [i_2 + 3])));
                        }
                    }
                }
            }
        }
        for (int i_5 = 4; i_5 < 17;i_5 += 1)
        {
            var_17 = arr_18 [i_0] [i_0] [i_0];
            arr_19 [14] [i_5] = var_0;
            var_18 = (max(var_18, (27 & var_10)));

            /* vectorizable */
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                var_19 = (min(var_19, (arr_17 [i_5 - 4] [i_5 - 3])));

                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    var_20 = (6 * 34);
                    var_21 -= (arr_11 [i_0] [i_0] [i_0]);
                    var_22 = (arr_21 [i_5] [18] [i_7]);
                }
            }
        }
        arr_26 [i_0] = (((!4472787857000221562) << (!65526)));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        var_23 = var_10;
        var_24 = arr_27 [i_8] [i_8];
    }
    #pragma endscop
}
