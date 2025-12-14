/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_4));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        var_16 = (arr_0 [i_0 - 1]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_17 = 0;

                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        arr_14 [20] [i_2] [i_1] = 0;
                        var_18 = (-(arr_10 [i_0]));
                        var_19 = var_2;
                        var_20 = (min(var_20, (arr_13 [i_3 - 1])));
                        var_21 = -4294705152;
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_22 = (((!183) + (arr_11 [6] [6] [i_1] [8] [6])));

                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_23 = (min(var_23, ((((-(arr_0 [i_4])))))));
                            var_24 = ((72 - -118) ? (arr_8 [19] [i_1] [i_2] [19]) : (arr_20 [i_0] [i_0] [20] [5] [20] [i_1]));
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_25 = var_11;
                            var_26 = 15259;
                            arr_24 [i_0] [20] [i_0] [i_2] [i_2] [15] [i_6] = (3504112744533014702 < 113);
                        }
                        var_27 = 0;
                    }
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        var_28 = (max(var_28, (((-(((arr_18 [i_1] [i_2] [i_1] [18]) ? 32766 : var_2)))))));
                        arr_28 [11] [i_2] = (!var_6);
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 0;i_9 += 1)
                        {
                            {
                                var_29 = (arr_16 [i_8 - 1] [i_1 + 2] [i_1] [i_0] [i_0 - 1]);
                                var_30 *= (((((var_10 ? 1887016736889638830 : 202))) ? (arr_6 [i_1] [i_1] [i_0]) : (arr_20 [i_0] [i_8 - 4] [i_2] [i_8] [i_9] [i_1])));
                                arr_34 [i_9] [10] [1] [i_2] [10] [i_1] [i_0] = ((-1674965860 ? var_14 : (arr_27 [2] [i_8] [i_0] [i_0])));
                                var_31 = ((!(arr_13 [i_8])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
