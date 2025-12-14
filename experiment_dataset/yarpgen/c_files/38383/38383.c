/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [8] [6] &= 18446744073709551615;
        arr_5 [i_0] = ((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [1] [i_0]));
        var_11 = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_9 [10] = (arr_8 [i_1]);
        arr_10 [i_1] [9] = var_0;
        var_12 = ((((4009531654861908073 ^ (arr_7 [i_1]))) & -31159));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    var_13 = (((((~(arr_8 [i_1])))) | 18446744073709551615));

                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_14 = arr_17 [i_4] [i_3] [i_3] [14] [i_3] [i_1];
                        arr_19 [4] [4] [i_3] [i_3] [i_1] [i_1] = (max(-2910825846399217739, var_2));
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                    {
                        var_15 = (((18446744073709551610 ^ 17508389253509734850) ^ (((arr_14 [23] [23]) | 9891762513713302565))));

                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            arr_27 [19] [i_3] [i_6] = (~var_4);
                            var_16 *= (((arr_25 [5] [i_2]) & ((var_10 & (arr_26 [i_6 + 3] [i_6] [i_6] [i_6 - 1] [i_6 - 1])))));
                        }
                        var_17 = var_2;
                        var_18 = (max(var_18, (arr_11 [i_1] [i_1] [i_1])));
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                    {
                        var_19 = max(((9 ^ (((arr_7 [19]) ? -6211665568602942115 : 127)))), 880753861471255910);
                        var_20 = ((((((((9184362090110276443 >> (((arr_14 [i_2] [i_3]) + 3379457877485996803))))) ? var_6 : ((-5380242025846249104 ? var_2 : (arr_13 [i_3] [0] [i_1])))))) ? 9546713718943821665 : (((arr_13 [i_1] [i_2] [1]) | 0))));
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        arr_34 [i_3] [i_3] [i_2] [i_3] [i_3] [i_3] &= (((((var_8 ? 3714 : (arr_26 [i_1] [i_3] [i_2] [i_1] [i_1])))) ? (max(var_4, (arr_26 [i_1] [i_2] [i_2] [1] [i_8]))) : -149085415826597881));
                        var_21 = (~8);

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            var_22 = var_2;
                            var_23 = (arr_30 [i_1] [i_2] [i_3] [i_8]);
                        }
                    }
                    var_24 -= (~((18446744073709551597 << (var_0 - 10275))));
                    arr_39 [i_3] [i_3] = (var_6 * (min(((var_9 ? (arr_24 [i_1] [i_1] [i_1]) : var_5)), ((max((arr_18 [i_3]), var_0))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        for (int i_11 = 3; i_11 < 18;i_11 += 1)
        {
            {
                var_25 = (18446744073709551607 && 6);
                var_26 -= ((var_10 ? var_6 : (((arr_7 [i_11 - 2]) ? -2141822831107464597 : 8258992297858126530))));
                arr_45 [i_11] [i_11 + 2] [i_11 - 1] = (((13623321218187533212 / 12605) ? ((((var_3 / var_2) * -15642))) : var_1));
            }
        }
    }
    #pragma endscop
}
