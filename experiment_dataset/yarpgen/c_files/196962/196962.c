/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_18 = var_0;
                            var_19 = -30182;
                        }
                    }
                }
                var_20 = (!4294967295);
            }

            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                arr_18 [i_0] [i_0] [i_0] [i_5] = (--115);
                var_21 = ((var_14 ? 2147483647 : 28404));
            }
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
        {
            var_22 = var_0;

            for (int i_7 = 3; i_7 < 8;i_7 += 1)
            {
                var_23 = (((((var_2 ? var_5 : (arr_13 [i_0] [4] [4])))) ? var_2 : 711333318));
                arr_25 [i_0] [3] [i_0] = (((((32548 ? (arr_23 [i_0] [i_0]) : 32548))) % -2704421887999257379));
                var_24 = ((-((var_12 ? 2147483647 : var_9))));
            }
            arr_26 [i_0] [i_0] = var_6;
        }
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 10;i_9 += 1)
            {
                {
                    arr_32 [i_0] [i_0] [i_9] = 127;

                    for (int i_10 = 1; i_10 < 8;i_10 += 1)
                    {
                        var_25 = (max(var_25, (((711333318 ? (arr_30 [i_8 - 1] [i_10 + 1]) : (((((arr_20 [i_0] [i_8] [9]) != var_3)))))))));
                        arr_35 [i_0] [i_0] [i_9 + 1] [i_10 - 1] = var_13;
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            {
                                arr_40 [4] [i_0] [i_9] [4] = (arr_7 [2] [i_9] [i_11] [10]);
                                arr_41 [i_0] = var_1;
                            }
                        }
                    }
                    arr_42 [i_0] = ((46755 ? 28404 : 18));

                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        arr_46 [i_0] = ((-(arr_31 [5] [i_0] [i_13])));
                        var_26 = (((2147483647 ? -2147483633 : var_1)));
                    }
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        var_27 = ((18446744073709551615 * ((((arr_39 [5] [i_8] [10] [i_9 - 1] [1]) * 1)))));
                        var_28 += 32767;
                        arr_49 [i_0] [i_14] [i_0] [i_14] |= (((arr_9 [i_8] [i_8 - 1] [i_9 + 1] [i_9] [i_8 - 1]) ? var_0 : (arr_9 [i_8] [i_8 - 1] [i_9 + 1] [i_9] [i_9 + 1])));
                        var_29 += var_1;
                    }
                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        arr_52 [i_8] [i_8] [i_8] [i_0] [1] = -32532;
                        var_30 = (arr_7 [i_8 - 1] [i_8] [i_8 - 1] [i_8]);
                        var_31 = (((var_10 << (250 - 225))));
                    }
                }
            }
        }
    }
    for (int i_16 = 0; i_16 < 11;i_16 += 1) /* same iter space */
    {
        arr_55 [i_16] [i_16] = (arr_34 [i_16] [6] [i_16] [i_16] [9]);
        /* LoopNest 3 */
        for (int i_17 = 0; i_17 < 11;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 11;i_18 += 1)
            {
                for (int i_19 = 4; i_19 < 9;i_19 += 1)
                {
                    {
                        var_32 = (min((127 == var_5), (~18789)));
                        arr_64 [i_16] [10] [i_18] [i_18] = (((((2704421887999257379 ? var_10 : var_16))) * ((4294967295 ? 0 : -2147483647))));
                    }
                }
            }
        }
        var_33 = (max(var_33, ((min((arr_5 [i_16] [1] [i_16]), (max((arr_30 [i_16] [4]), (arr_30 [i_16] [i_16]))))))));
    }
    for (int i_20 = 0; i_20 < 11;i_20 += 1) /* same iter space */
    {
        var_34 = (max(var_34, var_0));
        var_35 = (max(var_35, (((44 ? 2147483647 : 18)))));
    }
    /* vectorizable */
    for (int i_21 = 0; i_21 < 11;i_21 += 1) /* same iter space */
    {
        var_36 = (max(var_36, var_0));
        var_37 = var_2;
    }
    var_38 = var_14;

    /* vectorizable */
    for (int i_22 = 2; i_22 < 10;i_22 += 1) /* same iter space */
    {
        var_39 = 3938868120;
        var_40 |= (arr_71 [6]);
        var_41 = 32767;
    }
    /* vectorizable */
    for (int i_23 = 2; i_23 < 10;i_23 += 1) /* same iter space */
    {
        var_42 |= (var_12 << (((arr_70 [i_23 - 2] [i_23 + 1]) - 60)));
        var_43 = (max(var_43, (((3343979718 ? (arr_72 [i_23 - 1]) : (arr_72 [i_23 - 2]))))));
    }
    #pragma endscop
}
