/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!(~4246829185)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_8 [i_0] = ((~(min((arr_1 [i_1 - 1] [i_1]), ((var_2 ? var_7 : var_6))))));

                for (int i_2 = 3; i_2 < 24;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        var_11 = (min(8293, (min((arr_7 [i_2 - 1] [i_2 - 3] [i_2 + 1]), var_0))));
                        arr_15 [2] [i_1] [1] [18] &= (min((max(91, (max(var_8, 1252364501)))), (((91 ^ 1) - -92))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_12 *= ((var_2 ? var_6 : ((min(-89, var_8)))));
                        var_13 = (min((((arr_4 [i_0]) + (((8293 ? 1 : var_4))))), (~1628644650)));

                        for (int i_5 = 2; i_5 < 24;i_5 += 1)
                        {
                            var_14 = (max(1048591290469752908, 1));
                            var_15 = (min(var_15, ((((~var_7) ? 1 : ((var_7 ? var_3 : var_8)))))));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_16 = var_8;
                            var_17 ^= var_7;
                            arr_24 [20] [i_1 - 1] [i_2] [i_4] [i_0] = (arr_0 [i_0]);
                            var_18 = ((~(min((max(var_2, var_1)), (~var_4)))));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            var_19 -= var_5;
                            var_20 -= (((((~(max(2047, 0))))) ? 8293 : (((var_1 / var_4) + var_0))));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                        {
                            var_21 = (min(var_21, (~0)));
                            var_22 = (max((max((var_1 && var_4), -11328)), 0));
                            var_23 = 1;
                            var_24 = (min(var_24, var_9));
                            var_25 = -11342;
                        }
                    }
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        var_26 = (((max((min(var_4, var_0)), (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) + (((~(arr_27 [i_0] [i_0] [i_1] [i_2] [18] [i_9] [i_9]))))));
                        var_27 = (max(var_27, ((max(1358899066, var_0)))));
                    }
                    arr_32 [i_0] [i_0] = max((arr_23 [21] [21] [i_1] [i_0] [i_0]), ((var_1 ? (~var_8) : (min(var_6, var_2)))));
                    var_28 = (min(var_28, (((max((~var_8), 296983721))))));
                }
            }
        }
    }
    #pragma endscop
}
