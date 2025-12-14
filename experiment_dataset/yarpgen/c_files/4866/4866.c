/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
            {
                var_13 = 15345188859247813808;

                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    arr_10 [i_0] [i_1 + 1] [14] [i_3] = (!var_1);
                    arr_11 [i_3] [i_2] = (((arr_3 [i_0 - 1] [i_0 - 1]) / var_5));
                }
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    arr_15 [i_0 - 1] [i_0] [i_1] [i_2] [i_4] = ((-(var_7 * 15345188859247813808)));
                    arr_16 [20] [i_2] [i_0 - 1] = var_6;
                }
            }
            for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
            {
                var_14 += (!var_10);

                for (int i_6 = 1; i_6 < 18;i_6 += 1)
                {
                    arr_22 [0] [i_5] = (arr_4 [i_0 - 1] [i_1 - 2] [i_6 - 1]);
                    arr_23 [19] [i_1] [i_1] [i_1 - 2] &= (!22);

                    for (int i_7 = 2; i_7 < 18;i_7 += 1)
                    {
                        arr_26 [i_0] [i_5] [i_5] [i_6] [i_7] |= (var_3 & var_8);
                        arr_27 [20] [i_7] = (!5404);
                    }
                    for (int i_8 = 1; i_8 < 18;i_8 += 1)
                    {
                        var_15 = (max(var_15, (arr_24 [i_1])));
                        arr_30 [i_8 + 3] [i_6] [14] [i_1] [11] = ((var_0 & (arr_4 [i_8 + 1] [i_6 + 1] [i_0])));
                        arr_31 [0] [0] [1] [i_6 + 1] [i_8] = 15345188859247813808;
                        arr_32 [3] [i_1] [i_1] [i_5] [i_5] [i_1] = var_3;
                    }
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        var_16 = var_9;
                        arr_36 [i_0] [13] [20] [i_0] [i_0] = var_9;
                    }
                    arr_37 [i_0] [i_0 - 1] [i_5] [4] = (~var_11);
                }
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    arr_41 [i_10] [i_5] [5] [i_1] [16] = 0;

                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        arr_46 [i_11] [i_1 - 2] [i_5] [i_11] = 1;
                        arr_47 [i_0] [i_1] [5] [i_5] [i_10] [i_11] = ((-((-22 ? 21 : 60132))));
                    }
                    arr_48 [i_0] [i_1 - 1] [2] [i_1 - 1] = ((!(arr_14 [i_0 - 1] [i_0 - 1] [i_1 + 1] [i_5])));
                }
                for (int i_12 = 3; i_12 < 18;i_12 += 1)
                {
                    var_17 = (max(var_17, (((var_11 >= (arr_12 [i_0] [i_0 - 1] [i_5] [6] [i_12] [i_12]))))));

                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        arr_54 [19] [i_12] [i_1] [i_12] [4] [i_12] [i_13] = var_1;
                        arr_55 [18] [i_12] [i_5] [i_12] [i_5] = 155;
                    }
                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        var_18 *= (var_9 * var_11);
                        var_19 *= (155 + -618677057);
                        arr_59 [i_0 - 1] [1] [i_12] = -var_0;
                        arr_60 [i_0] [i_1] [i_12] [i_12 - 3] [i_14] = 14177738591046140370;
                    }
                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        var_20 *= (-5061163958617616598 < 1);
                        arr_63 [i_12] = (!var_5);
                    }
                    arr_64 [i_12] [i_12] = (arr_21 [10] [i_5] [11] [i_12 + 2]);
                    var_21 = (min(var_21, 155));
                }

                for (int i_16 = 1; i_16 < 18;i_16 += 1) /* same iter space */
                {
                    arr_67 [i_1] [i_16 + 1] = (((((-77 ? 54 : -77))) < (var_6 % var_11)));
                    arr_68 [1] [3] [i_5] [14] = var_1;
                    arr_69 [i_1] [i_5] = (!-22);
                    arr_70 [i_0] [i_0 - 1] [i_0 - 1] [1] = ((arr_44 [i_0 - 1] [i_1 - 3] [i_16 + 2] [10] [i_16] [i_16]) ? (-32767 - 1) : 114);
                    arr_71 [i_0] [i_0 - 1] [i_5] [i_16] [i_16] = 5132956898933046208;
                }
                for (int i_17 = 1; i_17 < 18;i_17 += 1) /* same iter space */
                {
                    arr_74 [i_17 + 3] = var_10;
                    arr_75 [i_0] [i_1] [i_0 - 1] [6] [i_1] = ((var_2 ? (arr_65 [i_0] [i_0] [i_0] [i_0 - 1] [i_17 + 3]) : (var_3 >= 1)));
                    arr_76 [i_0] [i_1 - 2] [i_5] [i_17 + 2] = var_8;
                }
            }
            arr_77 [i_0] = var_7;
        }
        var_22 = ((~((15928 >> (127 - 101)))));

        for (int i_18 = 1; i_18 < 20;i_18 += 1)
        {
            arr_82 [i_18] [1] = var_9;

            for (int i_19 = 2; i_19 < 20;i_19 += 1) /* same iter space */
            {

                for (int i_20 = 0; i_20 < 21;i_20 += 1)
                {
                    var_23 |= (min(-76, (!var_8)));
                    arr_87 [i_0] [i_18] [i_19] = (min(var_1, ((min(var_6, var_10)))));
                    arr_88 [0] [11] [7] [i_18] [i_20] [13] = -22;
                }
                /* LoopNest 2 */
                for (int i_21 = 2; i_21 < 20;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 21;i_22 += 1)
                    {
                        {
                            arr_94 [i_18] = (((~230) / (max(var_8, var_11))));
                            var_24 = (max(var_24, ((min(var_11, ((var_1 ? -var_7 : var_10)))))));
                        }
                    }
                }
                arr_95 [i_0] [i_0 - 1] [i_18] [i_19 - 2] = ((((var_8 + (arr_49 [i_0 - 1] [i_18 + 1] [i_18] [i_19 - 2] [i_19 + 1]))) ^ ((min(var_5, (arr_8 [i_0 - 1] [i_18 + 1] [8]))))));
                arr_96 [16] [i_18] = (!1);
            }
            for (int i_23 = 2; i_23 < 20;i_23 += 1) /* same iter space */
            {
                arr_100 [i_18] = min(((var_1 / (-22 - var_3))), (((min(var_11, var_10)) * (max(var_3, var_3)))));
                /* LoopNest 2 */
                for (int i_24 = 1; i_24 < 1;i_24 += 1)
                {
                    for (int i_25 = 1; i_25 < 19;i_25 += 1)
                    {
                        {
                            arr_109 [i_0 - 1] [i_18] [8] [i_0 - 1] [i_18] = (~var_11);
                            arr_110 [i_18 + 1] [i_18] [13] = 5132956898933046208;
                            var_25 += (~0);
                            var_26 = (min(var_26, var_11));
                        }
                    }
                }
                var_27 = ((0 ? 25 : -14602));
            }
            arr_111 [i_18] = (min((max((!4294967295), (~3111895716))), (((var_1 ? ((~(arr_79 [19] [i_18] [i_0]))) : var_4)))));
            arr_112 [i_18] = ((((min((max(1, 165)), var_9))) / 42));
        }
    }
    var_28 = (max(var_28, -1369054740));
    var_29 = (max(var_0, 5132956898933046208));
    #pragma endscop
}
