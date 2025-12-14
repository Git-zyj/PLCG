/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((23936 ? 203 : 1008));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, (10677405389302266990 == 83)));
                                var_14 = (!0);
                                arr_12 [i_0] [5] [2] [1] [i_4] [9] = 0;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_15 = (max(var_15, (((0 ? -123 : 1)))));
                        arr_15 [i_5] [3] [i_5] [i_5] [i_5] [i_5] |= (1 <= -1789989433);
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        var_16 = (((18446744073709551615 ? 15872 : 1)));
                        var_17 = ((0 ? 13229 : -3));
                        var_18 = (3995294865228550513 / -9);
                        var_19 = (((~0) ? 1 : 131));
                        var_20 = 0;
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                arr_24 [i_0] [1] = -43873;
                                var_21 = (20 ^ 1);
                            }
                        }
                    }
                }
            }
        }
        arr_25 [i_0] = (1335191010 <= (-9223372036854775807 - 1));
        var_22 = (1 && 5298362870272270282);
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
    {
        var_23 = (max((((!0) || 0)), (max(1, (!-1812391931)))));
        arr_29 [i_9] = (min((((1 || 0) ? 0 : (!31))), (65535 >= -2262)));
    }
    var_24 = ((var_9 ? ((min(-24545, (1500584732 | 420621189)))) : 4503599627370495));
    #pragma endscop
}
