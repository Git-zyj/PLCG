/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (-((~((var_11 ? -18462 : var_7)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = (arr_2 [i_0]);

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_21 = (arr_6 [i_0] [i_1] [i_1]);
            var_22 = (max(var_22, (arr_6 [i_0] [i_1] [i_1])));
            var_23 = (((arr_1 [i_0]) ? (arr_1 [i_0]) : 3178061180306707475));
            arr_7 [0] [0] = var_16;
        }
        var_24 = (((arr_3 [i_0] [i_0]) == var_7));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_25 = -8415;
                                arr_19 [i_5] [6] [0] [4] [0] [i_0] &= ((-(arr_3 [1] [i_2])));
                            }
                        }
                    }
                    var_26 = (var_5 * -8420);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 22;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 21;i_8 += 1)
            {
                {
                    var_27 = (~var_3);
                    var_28 *= (((((-(arr_22 [18] [18])))) ? 1 : 57715));

                    for (int i_9 = 2; i_9 < 21;i_9 += 1)
                    {

                        for (int i_10 = 2; i_10 < 20;i_10 += 1) /* same iter space */
                        {
                            var_29 = 64164;
                            var_30 = (var_16 < 1);
                            var_31 = (((var_12 - var_9) ? 7809 : (arr_23 [14] [i_6] [i_6 - 1])));
                        }
                        for (int i_11 = 2; i_11 < 20;i_11 += 1) /* same iter space */
                        {
                            var_32 = (~7823);
                            var_33 = (!65516);
                            arr_34 [i_7] [i_6] [i_11] = (!var_12);
                            arr_35 [i_6] [i_6] [i_6] [i_11 + 3] = (arr_21 [i_6]);
                        }
                        var_34 = 20;
                        arr_36 [i_6] [i_6] [2] [i_9] = arr_27 [i_6] [i_9];
                        var_35 = ((-(~7804)));
                        arr_37 [i_6] [i_6] = (arr_27 [7] [i_6]);
                    }
                    for (int i_12 = 2; i_12 < 20;i_12 += 1)
                    {
                        var_36 = var_16;
                        var_37 = (var_3 ? 65535 : 3509855878803802843);
                        arr_40 [i_6] [i_6] [i_6] [i_6 + 1] [i_6] = (arr_39 [i_6]);
                    }
                    var_38 = (arr_26 [i_6] [i_6] [i_7 + 2] [i_8]);
                    var_39 *= var_17;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 23;i_14 += 1)
            {
                {
                    var_40 = 93908213;
                    var_41 ^= ((arr_44 [i_6] [i_6] [6] [i_14]) ? -65524 : ((~(arr_44 [i_6] [i_13] [i_13] [i_6]))));
                }
            }
        }
        arr_47 [i_6] = var_1;
    }
    var_42 = ((-(((var_6 < ((var_10 ? 32767 : var_11)))))));
    #pragma endscop
}
