/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 -= ((-(arr_1 [i_0] [i_0])));
        var_17 -= (((((124 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])))) - var_6));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_5 [i_1] = (arr_1 [i_1] [i_1]);
        arr_6 [i_1] = (((((~(min(var_13, -109))))) ? ((((!(arr_2 [i_1]))))) : (max(((var_14 ? 6464893480649860954 : (arr_0 [i_1]))), (arr_1 [i_1] [i_1])))));
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 23;i_3 += 1)
        {
            var_18 = (max(var_18, ((((((~(max((arr_8 [i_2]), var_10))))) ? ((var_13 ? (arr_13 [i_3 - 2] [i_3 + 1] [i_3 + 1]) : (var_2 && var_2))) : (max(164, (arr_9 [i_2] [i_3 - 1]))))))));
            arr_14 [i_2] [2] [i_3] = (~var_8);
        }
        var_19 = var_1;
        var_20 = 251;
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_18 [i_4] = (arr_13 [i_4] [i_4] [i_4]);
        var_21 = (arr_8 [i_4]);
        arr_19 [i_4] [i_4] = (((var_0 ? 104 : (!-125))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        arr_23 [0] [i_5] = (((arr_22 [i_5]) ? (arr_22 [i_5]) : (arr_22 [i_5])));
        var_22 = var_2;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        arr_26 [i_6] [i_6] = 124;
        arr_27 [9] = (((1 | -18897) ? var_5 : (arr_10 [i_6] [i_6] [i_6])));

        for (int i_7 = 1; i_7 < 9;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    {
                        arr_34 [i_8] = (arr_1 [i_6] [i_8]);
                        arr_35 [i_8] [i_8] [i_8] = var_6;
                    }
                }
            }
            arr_36 [i_6] [i_7] = ((-(arr_12 [i_6])));
        }
        for (int i_10 = 1; i_10 < 9;i_10 += 1) /* same iter space */
        {
            arr_40 [i_10] [i_10] = ((-(arr_8 [19])));
            arr_41 [i_10] = 63;
            var_23 -= ((var_0 ? (arr_15 [i_10 + 1] [i_10 + 2]) : (arr_17 [i_10 + 1] [i_10 + 2])));
        }
        for (int i_11 = 1; i_11 < 11;i_11 += 1)
        {

            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                arr_48 [i_12] [i_12] [i_12] = 1;
                var_24 -= 34796;
                arr_49 [i_12] [i_11] [i_6] [i_6] = (~var_15);
            }
            var_25 = (((arr_44 [i_11 + 1]) ? (arr_44 [i_11 - 1]) : 13042));
            var_26 = (((arr_32 [i_6] [i_11 - 1] [i_11] [i_11 - 1]) < (arr_32 [i_6] [i_11 - 1] [i_11] [i_11 + 1])));
        }
        for (int i_13 = 4; i_13 < 8;i_13 += 1)
        {
            var_27 = (arr_37 [i_13 + 4] [i_13 + 2] [i_13 + 2]);

            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 12;i_15 += 1)
                {
                    for (int i_16 = 3; i_16 < 10;i_16 += 1)
                    {
                        {
                            var_28 -= 1;
                            var_29 = (arr_56 [i_6] [i_6] [i_6] [i_15] [i_16 + 2]);
                        }
                    }
                }
                arr_60 [0] [i_13] [0] [i_13] = ((~(arr_16 [i_13 - 2] [i_13])));
            }
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                arr_63 [i_17] [i_6] [i_6] = (259570445340427428 != var_5);
                arr_64 [i_6] [i_6] [i_6] = (arr_51 [i_13] [6]);
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 12;i_18 += 1)
                {
                    for (int i_19 = 1; i_19 < 8;i_19 += 1)
                    {
                        {
                            arr_71 [i_6] [i_13 + 1] [i_17] [i_18] [i_13 + 1] [i_17] [i_18] = (((arr_67 [i_17] [1] [i_19 + 2] [1] [7] [1]) ? (arr_67 [i_13 - 4] [i_13 - 4] [i_13 - 4] [i_13 - 4] [i_13 - 2] [i_17]) : (((arr_67 [i_6] [i_17] [i_17] [i_17] [i_17] [i_19]) ? -64 : var_4))));
                            arr_72 [1] [1] [1] [i_18] [i_19] = ((-((var_5 ? (arr_3 [i_6]) : (arr_68 [i_6] [i_13 + 4] [i_17] [i_18] [i_19 - 1])))));
                            var_30 -= -9948;
                        }
                    }
                }
                arr_73 [i_6] [i_13 + 4] [i_17] [i_13 + 4] = (((arr_54 [i_13 - 3] [i_6]) ? var_5 : (arr_57 [i_6] [i_6] [i_13 - 2])));
                arr_74 [i_13] [i_13] [i_13] [i_6] = 259570445340427428;
            }
            var_31 = (min(var_31, -114));
        }
    }
    for (int i_20 = 2; i_20 < 18;i_20 += 1)
    {
        var_32 = -259570445340427429;
        /* LoopNest 2 */
        for (int i_21 = 3; i_21 < 16;i_21 += 1)
        {
            for (int i_22 = 2; i_22 < 16;i_22 += 1)
            {
                {
                    var_33 = ((819855948 > ((min((arr_11 [i_20 - 1]), (arr_11 [i_20 - 1]))))));
                    var_34 = (max(var_34, 111));
                    arr_85 [i_20] [i_22] [i_22] = (min(-13042, (((((-(arr_78 [i_20] [16] [i_20])))) ? (arr_7 [i_20] [i_21]) : 13041))));
                }
            }
        }
        var_35 -= (arr_80 [i_20 + 1] [i_20 - 2]);
        arr_86 [i_20] = ((!(arr_77 [i_20 + 1] [i_20 + 1] [i_20 - 1])));
    }
    var_36 = 6794;
    #pragma endscop
}
