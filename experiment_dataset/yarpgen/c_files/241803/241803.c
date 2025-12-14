/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_17 -= (arr_0 [i_0] [1]);

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            var_18 += (arr_2 [i_0] [i_0]);
            arr_6 [12] [i_1] [i_1 + 1] |= (arr_1 [i_0]);
            var_19 &= (arr_1 [i_0]);
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_10 [i_0] = (arr_3 [i_0 + 3] [8]);
            var_20 = arr_1 [2];
            var_21 = (arr_0 [i_0 + 3] [i_2]);
        }
        arr_11 [3] = (arr_7 [i_0 + 2]);
        var_22 += (arr_5 [i_0] [i_0] [10]);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_23 = (arr_13 [i_3]);
        arr_15 [i_3] = (arr_14 [i_3]);
        var_24 = (arr_14 [i_3]);
    }

    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        var_25 = (arr_16 [2]);
        var_26 = (arr_16 [i_4]);
        arr_20 [i_4] = (arr_19 [i_4]);

        /* vectorizable */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_27 -= arr_18 [i_4];
            arr_23 [i_4] [i_5] = (arr_12 [i_5] [i_4]);

            for (int i_6 = 2; i_6 < 19;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    arr_29 [i_4] [i_7] [i_7] [i_4] = (arr_24 [i_4] [20] [i_6 + 2] [2]);
                    var_28 |= (arr_19 [10]);
                    var_29 = (min(var_29, (arr_26 [i_5] [i_5])));
                }
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    arr_32 [i_4] [i_8] [i_6 - 2] = (arr_19 [i_4]);
                    arr_33 [i_8] [12] [i_5] [i_6] [i_8] = arr_22 [i_4] [i_4];
                }
                var_30 -= (arr_16 [i_4]);
                arr_34 [i_4] [i_4] [i_6] [i_6] = (arr_13 [i_4]);
                arr_35 [i_4] [i_4] = arr_14 [i_4];
            }
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 21;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 20;i_11 += 1)
                    {
                        {
                            arr_42 [i_4] [i_4] [4] [16] [i_5] [i_4] |= (arr_40 [i_4] [i_10] [i_5] [i_5] [i_4]);
                            var_31 ^= (arr_40 [i_4] [i_5] [i_5] [i_10 + 2] [i_11]);
                        }
                    }
                }
                arr_43 [i_4] [i_5] [i_9] [i_9] = (arr_37 [i_4] [i_4] [i_4] [i_4]);
                arr_44 [19] [i_9] = arr_40 [i_4] [i_4] [i_5] [i_5] [i_9];
                var_32 *= (arr_41 [i_4] [i_4] [i_5] [i_9]);
            }
        }
    }
    for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
    {
        var_33 = (min(var_33, (arr_27 [i_12])));
        var_34 = (arr_38 [i_12] [i_12] [7] [i_12]);
        var_35 = (max(var_35, (arr_22 [i_12] [i_12])));
    }
    for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
    {

        for (int i_14 = 2; i_14 < 20;i_14 += 1)
        {
            var_36 -= arr_47 [16];
            var_37 -= (arr_13 [i_14]);
            var_38 = (arr_36 [1] [i_14 + 3]);
            var_39 &= (arr_50 [i_14 - 1] [i_13]);
        }
        for (int i_15 = 0; i_15 < 23;i_15 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 23;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 23;i_17 += 1)
                {
                    {
                        var_40 = (arr_45 [i_13]);
                        var_41 = (arr_53 [i_13] [i_15] [i_13]);
                    }
                }
            }
            var_42 &= (arr_52 [i_15]);
            var_43 = (max(var_43, (arr_40 [i_13] [i_13] [i_13] [i_13] [i_13])));
            var_44 = (min(var_44, (arr_49 [i_13] [i_13])));
            var_45 = (arr_17 [i_13]);
        }
        for (int i_18 = 0; i_18 < 23;i_18 += 1) /* same iter space */
        {
            arr_65 [i_18] = (arr_47 [i_13]);
            var_46 -= (arr_60 [i_13] [5]);
            arr_66 [i_13] [i_18] = (arr_18 [i_13]);
        }
        var_47 = (arr_54 [i_13] [i_13] [i_13]);
        arr_67 [7] [i_13] = (arr_62 [i_13] [i_13] [i_13]);
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 14;i_19 += 1)
    {
        var_48 |= (arr_55 [i_19]);
        var_49 *= (arr_18 [i_19]);
        var_50 = (arr_63 [i_19] [i_19]);
        var_51 = (arr_57 [i_19] [i_19] [i_19]);
    }
    var_52 = var_6;
    #pragma endscop
}
