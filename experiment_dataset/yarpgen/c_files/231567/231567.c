/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (-18096 <= 102);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_0] = var_5;
                        var_13 += -102;
                        arr_11 [i_0] [i_1] [i_0] [i_2] [11] [i_0] = var_3;
                        var_14 |= (arr_9 [i_0] [i_0] [i_0] [6]);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    {
                        var_15 = 88;
                        arr_17 [i_0] [i_1] [i_1] [i_1] [i_1] = (((!var_7) >= -18096));
                        var_16 = (arr_16 [i_0] [i_1] [i_4] [i_0]);
                        var_17 = 7597;
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        {
                            var_18 &= (~6741463800754639829);
                            var_19 = arr_13 [i_8] [i_7] [i_6];
                            arr_30 [i_0] [i_0] [i_0] = (3811981839 / var_8);
                        }
                    }
                }
                var_20 = 15;
                var_21 |= 482985457;
                var_22 = (var_10 / 1850297510);
                var_23 = (arr_21 [i_0] [i_0] [i_6] [i_0]);
            }
            var_24 = (arr_1 [i_0] [i_0]);
        }
        for (int i_10 = 1; i_10 < 13;i_10 += 1)
        {
            var_25 = arr_34 [i_0] [i_10] [i_10];
            arr_35 [i_0] [i_0] = var_8;
        }
        var_26 += (arr_22 [8] [i_0] [i_0] [8]);

        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            arr_39 [i_0] [i_0] = arr_18 [i_0] [i_11] [i_0];
            var_27 = (~(arr_18 [i_0] [i_0] [i_0]));
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {

            for (int i_13 = 0; i_13 < 16;i_13 += 1)
            {
                var_28 = (max(var_28, ((((((arr_29 [i_0] [1] [i_12] [i_13] [i_13] [i_13] [i_13]) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : var_3)) & var_8)))));
                arr_44 [i_0] [i_12] [i_12] [i_0] = ((-(arr_26 [i_12] [i_12] [i_13] [i_13] [i_12])));
                arr_45 [i_0] [8] [i_12] = (((arr_22 [i_0] [i_0] [11] [i_0]) || (arr_22 [i_0] [i_0] [i_0] [i_0])));
            }
            for (int i_14 = 1; i_14 < 13;i_14 += 1)
            {
                arr_49 [i_0] [i_0] [i_14] = ((!(arr_9 [i_14 + 2] [i_14 - 1] [i_14] [i_0])));
                var_29 = ((-(arr_36 [i_0] [9])));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 16;i_15 += 1)
                {
                    for (int i_16 = 2; i_16 < 15;i_16 += 1)
                    {
                        {
                            arr_56 [i_0] [i_12] [7] [i_0] [i_0] [12] [i_15] = (arr_21 [i_12] [7] [i_15] [i_0]);
                            var_30 = (((arr_12 [i_14 - 1] [i_16 + 1] [15] [15]) ^ (arr_9 [i_12] [i_14 + 2] [1] [i_0])));
                            var_31 = (arr_8 [i_0] [i_12] [i_14] [3] [4] [i_0]);
                            arr_57 [i_0] [i_12] [i_12] [i_14] [i_0] [i_15] [i_16] = (((arr_34 [i_0] [i_16] [i_14]) & (arr_9 [i_0] [i_14 + 3] [i_12] [i_0])));
                            arr_58 [i_0] [i_0] [i_14] [11] [11] [i_15] = var_3;
                        }
                    }
                }
            }
            arr_59 [i_0] [11] [i_12] = var_0;
            arr_60 [4] [1] [i_0] = (((97 * 482985463) || -26444));
        }
        arr_61 [i_0] = (arr_21 [i_0] [i_0] [5] [i_0]);
    }
    for (int i_17 = 0; i_17 < 21;i_17 += 1)
    {
        var_32 = (!643334027);
        arr_64 [i_17] = (max((max((((-(arr_62 [i_17] [i_17])))), ((var_3 % (arr_63 [i_17] [i_17]))))), 58));
    }
    for (int i_18 = 1; i_18 < 1;i_18 += 1)
    {

        /* vectorizable */
        for (int i_19 = 1; i_19 < 17;i_19 += 1)
        {
            arr_71 [i_19] = -var_4;
            arr_72 [i_19] = ((~(arr_66 [i_19 - 1])));
        }
        var_33 += (-328004331 - (arr_70 [i_18]));
    }
    var_34 ^= var_0;
    var_35 = max(var_9, ((min(var_4, -5698769212225114924))));
    var_36 = -97;
    #pragma endscop
}
