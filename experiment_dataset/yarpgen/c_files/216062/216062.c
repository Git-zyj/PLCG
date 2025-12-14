/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((var_9 < ((min(((-4624709978128838486 ? var_4 : 86)), 117))))))));
    var_17 -= (((-112 ? var_14 : ((var_6 ? var_15 : var_13)))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0 + 3] [i_0 + 3] [i_2] [7] = (83 && 4252097131);
                    var_18 = ((((max(-30863, 623821874))) ? (((arr_4 [i_0 + 3]) ? var_8 : 15644)) : ((max(31, 31)))));
                    arr_9 [i_0] [i_0] = 2392544715;

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_14 [i_0] = (min((arr_4 [i_0]), (max((!-30855), ((var_7 ? 3742018997 : 4294967295))))));
                        arr_15 [i_1 + 1] [1] [i_1 + 1] [i_0] = min(-1, var_3);
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_19 = 86;
                            var_20 = (max(var_20, var_15));
                            var_21 = (((arr_4 [i_1 - 1]) > (arr_7 [i_1] [i_2])));
                        }

                        for (int i_6 = 1; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            var_22 = 545205800;
                            var_23 -= ((-var_0 | ((4294967295 ? -26 : 3))));
                            var_24 = ((~(arr_18 [i_6 - 1] [i_6 - 1] [2] [i_6 - 1] [i_6 - 1] [i_4])));
                        }
                        for (int i_7 = 1; i_7 < 13;i_7 += 1) /* same iter space */
                        {
                            var_25 &= ((18 ? var_4 : 213));
                            var_26 |= 127;
                            arr_26 [i_4] [i_4] [i_2] [i_4] [i_0 - 1] = 28480;
                            arr_27 [i_7] [i_4] [i_4] [i_0] = (var_10 % var_7);
                            var_27 = (((16383 / 1406624566) ? (arr_5 [i_0]) : -6841727242247197451));
                        }
                        for (int i_8 = 1; i_8 < 13;i_8 += 1) /* same iter space */
                        {
                            var_28 = (max(var_28, -30834));
                            arr_31 [i_0] [i_0] [i_4] [i_2] [i_4] [i_8] = ((-var_10 % (arr_23 [i_4 + 1] [i_4] [i_0 + 3] [i_4] [i_0])));
                        }
                    }
                }
            }
        }
        var_29 = (arr_17 [i_0] [14]);
        var_30 = (max(var_30, (arr_5 [i_0 - 1])));
    }
    #pragma endscop
}
