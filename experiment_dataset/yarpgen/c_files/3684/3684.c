/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [0] = (1095 ^ (arr_5 [i_1] [i_1] [i_1] [i_0]));

                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        var_15 |= (((arr_1 [i_0 + 1]) ? (arr_3 [i_0] [i_1] [i_3]) : (((345126554 ? 12039 : var_5)))));
                        var_16 = ((var_0 ? (arr_7 [i_3 + 1] [i_2] [i_0]) : (arr_7 [i_0 + 1] [i_0] [i_0 + 1])));
                    }
                    for (int i_4 = 2; i_4 < 13;i_4 += 1)
                    {
                        arr_12 [i_0] [i_0] = 64437;
                        var_17 = (35206 != 1110);
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_15 [i_5] [i_5] = (4284058535 / 1076);
                        var_18 = (arr_3 [i_0] [i_1] [12]);
                        var_19 -= (arr_13 [i_0] [i_0] [i_0 + 1]);
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        arr_19 [i_0] [i_0] [1] [i_6] = (arr_5 [12] [i_0] [i_0 + 1] [i_0 - 1]);
                        var_20 = (arr_1 [i_0]);
                        arr_20 [i_0] [i_1] [i_1] [i_6] [i_0 + 2] = arr_7 [i_6] [i_2] [i_1];
                    }
                }
            }
        }

        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            var_21 = (((arr_22 [i_0 - 1]) == (arr_22 [i_0 + 1])));
            var_22 = (min(var_22, (arr_24 [i_0] [i_7] [14])));
            var_23 = (max(var_23, (((((arr_14 [0] [i_0]) ? (arr_22 [i_7]) : var_5))))));
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            var_24 = var_5;
            var_25 = (min(var_25, 1095));
            var_26 = ((240 ? 19 : 15031641722722222305));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        var_27 = (((var_2 | var_2) ? var_6 : (((arr_30 [i_8] [i_9] [i_8] [i_0]) ? var_4 : var_2))));
                        var_28 = (((var_11 || 240) && (var_3 && var_11)));
                        var_29 = var_4;
                        var_30 = (var_13 - 21777);
                        var_31 ^= (arr_9 [i_0] [i_0] [i_0 + 1] [i_0] [i_0]);
                    }
                }
            }

            for (int i_11 = 3; i_11 < 16;i_11 += 1)
            {
                arr_36 [i_8] [12] [i_8] = (((arr_10 [i_0 + 1] [i_0 + 1] [i_11 - 2] [i_0 + 1]) ? (arr_10 [i_0 + 1] [i_8] [i_11 - 2] [i_11]) : (arr_7 [i_0 + 1] [16] [i_11 - 2])));
                var_32 = var_12;
            }
        }
        var_33 = ((var_6 ? var_11 : (arr_27 [i_0 + 1])));
    }
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        var_34 = (max(var_34, 7508585371265477167));
        var_35 = 64446;
    }
    for (int i_13 = 2; i_13 < 20;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 2; i_14 < 21;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 21;i_15 += 1)
            {
                {
                    var_36 += (((arr_44 [i_15 - 1] [i_13 + 1] [i_13 + 1]) | ((((arr_40 [20] [i_14 - 1]) < (arr_43 [i_13 + 1] [i_13 - 1]))))));
                    arr_48 [i_15] [i_15] = (((2897924829 <= 28268) ? (var_11 * 1) : (((2897924837 ? ((0 ? 64446 : 64438)) : (arr_42 [i_14] [i_13]))))));
                    var_37 = (arr_37 [i_13] [i_13]);
                    var_38 = -1;

                    for (int i_16 = 2; i_16 < 20;i_16 += 1)
                    {
                        var_39 = arr_39 [i_13];
                        var_40 |= (((60383 && (-127 - 1))));
                    }
                    /* vectorizable */
                    for (int i_17 = 1; i_17 < 20;i_17 += 1)
                    {
                        var_41 = ((47190 ? 37268 : (arr_53 [i_17 + 2] [i_17 + 2] [i_15])));
                        var_42 = (min(var_42, (arr_42 [i_13 + 1] [i_13 + 1])));
                        var_43 = (((var_12 ? var_2 : 1)));
                    }
                }
            }
        }
        var_44 = (min(var_44, ((((((((var_0 ? 129 : (arr_44 [1] [i_13] [i_13])))) ? var_12 : var_3)) > ((((var_3 && (arr_39 [1]))))))))));
        var_45 = (((arr_42 [i_13] [i_13]) + ((48 % ((var_8 ? (arr_53 [i_13] [i_13] [i_13]) : var_10))))));
    }
    var_46 = ((4294967295 ? -39 : -11));
    var_47 += (min(var_10, var_10));
    var_48 = (var_8 + var_9);
    #pragma endscop
}
