/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_10 += (((1 ? var_6 : 12079326804101519348)));
                                arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_4] = (min((((!(var_0 <= -420815742)))), (min((-1 / 18446744073709551615), 2250))));
                                var_11 = 12079326804101519348;
                                arr_12 [i_0] [1] [i_3] [i_3] [i_4] [i_4] |= (((-11 & 32049) / var_7));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_17 [i_1] = -var_8;
                    var_12 = (((((11817 * (arr_0 [i_1 - 1])))) ? (((arr_0 [i_5]) ? (arr_0 [i_5]) : (arr_0 [i_1 + 1]))) : 11));
                }
                arr_18 [i_0] [i_1] [i_0] = 12096734;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                {
                    var_13 = var_2;
                    var_14 = var_3;
                }
            }
        }
    }

    /* vectorizable */
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        var_15 = (!var_3);
        var_16 &= ((18385322651365989526 ? var_3 : ((1195606740 ? -251 : 0))));
        arr_29 [i_9] = (~-2144895032);
    }
    for (int i_10 = 1; i_10 < 16;i_10 += 1) /* same iter space */
    {
        var_17 = (min(((max(((-662 ? 661 : var_5)), 1))), (max((arr_25 [i_10] [i_10] [i_10] [i_10 + 1]), ((~(arr_23 [i_10] [i_10])))))));
        var_18 -= (((-11812 && var_9) ? ((-(-27981 * var_8))) : ((((var_0 == -4) && var_7)))));
    }
    /* vectorizable */
    for (int i_11 = 1; i_11 < 16;i_11 += 1) /* same iter space */
    {
        arr_34 [0] &= (~22063);
        arr_35 [i_11] [5] = ((1178068640 ? (~var_4) : -1));
        arr_36 [i_11] = 125;
    }
    for (int i_12 = 1; i_12 < 16;i_12 += 1) /* same iter space */
    {
        var_19 += (18385322651365989526 > 95);
        var_20 = (((7182466826363811556 ? var_4 : (arr_33 [i_12 + 2]))));
        var_21 = ((~((((((117 ? -6144186396626119307 : 1279857379028861370))) || var_5)))));
        var_22 = min(var_6, ((~((var_3 ? 12079326804101519348 : 32762)))));
    }
    #pragma endscop
}
