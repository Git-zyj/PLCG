/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 -= (((!-325596807) << (!var_13)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, (((-((((((-1222100977 ? 325596794 : 58610))) || 13813))))))));
                                var_19 = (min(var_19, (!-116)));
                            }
                        }
                    }
                    arr_16 [i_1] [8] [i_1] = -325596834;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    var_20 *= -325596834;
                    var_21 = (max(var_21, (arr_8 [i_0])));

                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 11;i_7 += 1)
                    {
                        var_22 = (max(var_22, 0));
                        var_23 -= 18;
                        var_24 = ((var_2 ? -325596850 : (arr_0 [i_0] [i_0])));
                        var_25 *= (!51711);
                        arr_25 [i_0] [i_5] = var_10;
                    }
                }
            }
        }
        arr_26 [9] [i_0] = (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
    {
        var_26 = (min(var_26, 8));
        var_27 = (max(var_27, (((max(-325596835, -325596807))))));

        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            var_28 -= 0;

            for (int i_10 = 2; i_10 < 13;i_10 += 1)
            {
                arr_35 [i_8] [i_9] = (max(-30274, 16777215));
                arr_36 [i_8] [i_9] [i_9] [i_9] = -109;
            }
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                var_29 += 120;
                arr_41 [i_8] [i_9] [5] [i_8] = ((9169 ? var_7 : (max(16777215, 92))));

                /* vectorizable */
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {

                    for (int i_13 = 1; i_13 < 12;i_13 += 1)
                    {
                        arr_47 [i_8] [13] [13] [13] [1] [11] [i_9] = ((15058 ? 13430 : 159));
                        arr_48 [i_8] [i_9] [i_9] [i_9] [i_13 + 2] = (((arr_12 [i_13 + 1] [i_9] [i_13 + 2] [i_9] [i_13 + 2]) / var_13));
                        var_30 += 52111;
                        var_31 -= (arr_19 [i_8] [i_13 + 1]);
                    }
                    var_32 = 168;
                    arr_49 [i_8] [4] [i_9] [9] [i_12] [i_12] = (arr_43 [i_9]);
                }
            }
            var_33 ^= (max(var_8, (max(107, 21058))));
            var_34 -= ((((((arr_19 [i_8] [i_9]) + 2147483647)) >> ((((var_12 ? var_9 : 9169)) + 62)))));
        }
        arr_50 [i_8] [i_8] = (max((((arr_3 [i_8] [i_8] [i_8]) ? 37 : (arr_3 [i_8] [i_8] [i_8]))), 92));
    }
    var_35 = ((var_8 ? var_9 : -42));
    #pragma endscop
}
