/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    var_11 = var_0;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [16] [i_3] = -var_0;

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            arr_16 [i_1] [i_1] [i_2 + 2] [i_1] [i_4] [8] = (!-198);
                            var_12 = (~58);
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            arr_20 [i_0] [i_0] [3] [i_0] [i_1] = ((var_1 ? (arr_13 [i_1] [i_2 + 2] [i_2 + 2]) : var_8));
                            arr_21 [i_0] [i_1] [15] [2] [i_1] [i_0] [i_3] = (!-var_1);
                            var_13 = (((arr_11 [18] [i_3] [i_2] [i_0] [i_0] [13]) & (arr_8 [i_2 + 2] [i_1] [i_2 - 1])));
                            var_14 = (((arr_9 [i_0] [i_3] [i_0]) ? -57 : ((79 ? 57 : (arr_2 [2] [i_1] [i_2])))));
                            arr_22 [i_1] [0] [i_1] [i_2] [i_3] [i_5] [i_5] = 1353919593671392328;
                        }
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        arr_25 [i_1] [i_1] [7] [i_6] = 67;

                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_15 = (min(var_15, 16));
                            arr_28 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = ((((min(var_1, (((-17 ? var_9 : var_3)))))) ? (var_3 | var_3) : (max((((15210 ? var_9 : 20))), (max(197, var_7))))));
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            var_16 = -var_7;
                            var_17 = var_4;
                            var_18 *= (min(18446744073709551609, 7));
                        }
                        var_19 = ((!(((252 ? 57 : 3464162330)))));
                        var_20 = ((((((((var_6 ? var_7 : 57))) ? 16 : (arr_2 [i_2 + 1] [i_1] [i_2 + 2])))) ? (((!77) ? ((((!(arr_15 [i_6] [i_1]))))) : (arr_6 [i_1] [10] [i_6]))) : (((!2449688669) ? (((max(180, -3)))) : (arr_9 [i_2 + 1] [i_2 + 1] [i_2 - 1])))));
                        var_21 = (min(0, 8343838104765643610));
                    }
                    var_22 = (max(var_22, 17));
                }
                for (int i_9 = 1; i_9 < 17;i_9 += 1) /* same iter space */
                {

                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        var_23 = -30;
                        arr_40 [i_0] [i_1] [i_9 + 3] [i_9] [i_1] = (((var_2 * 111) == (((arr_6 [i_0] [i_1] [i_9 + 2]) ? 30 : var_7))));
                    }
                    var_24 = 210;
                }
                arr_41 [i_1] [i_1] [i_1] = (((((((201 ? -21 : var_3))) ? (((!(arr_27 [i_0] [i_1] [i_0])))) : ((var_4 ? -71 : var_3))))) ? (arr_1 [i_0]) : (((arr_8 [i_1] [i_1] [0]) ? var_1 : (min((arr_33 [i_0] [i_0] [i_1] [i_1]), 6)))));
            }
        }
    }
    var_25 = min(var_2, ((((min(4294967295, var_1))) ? var_10 : var_3)));
    #pragma endscop
}
