/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;
    var_20 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_1] [i_1] = (arr_0 [i_1]);

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_1] [6] [1] = (-(arr_10 [i_2] [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4]));
                            arr_14 [i_1] [i_2] [5] [i_1] = 184;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            arr_20 [i_1] = var_17;
                            var_21 -= var_0;
                            var_22 = (!-985175822);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 21;i_8 += 1)
                    {
                        {
                            var_23 ^= (2147483647 & var_8);
                            arr_28 [i_1] = ((-82 ? var_0 : var_17));
                        }
                    }
                }
            }
        }
        arr_29 [i_0] = 42;

        for (int i_9 = 3; i_9 < 20;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                arr_37 [i_0] [i_9] [i_10] [i_10] = var_9;
                arr_38 [i_9] [i_0] [i_10] [1] = var_14;
                var_24 = ((var_2 ? (arr_2 [i_9 + 1]) : (arr_19 [i_10] [i_10] [i_9] [i_10])));

                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    arr_42 [2] [2] [i_9] [i_9] [i_10] [i_11] = (~var_6);
                    arr_43 [i_11] [i_9] [i_9] [i_0] = (arr_15 [i_0] [i_9] [i_10] [i_11]);
                    var_25 -= var_10;
                    arr_44 [i_0] [i_9] [i_10] [i_11] = (!92);
                    var_26 = (min(var_26, var_1));
                }
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    var_27 = (min(var_27, ((var_5 ? var_2 : 109))));
                    arr_47 [i_12] = var_8;
                    arr_48 [i_0] [i_9 + 1] [i_12] = var_18;
                }
                for (int i_13 = 2; i_13 < 20;i_13 += 1)
                {
                    arr_52 [i_13] = ((var_1 ? var_9 : var_1));
                    arr_53 [i_9] [i_9] [i_13] [i_9 + 1] [i_9] [i_9] = var_13;
                }
            }
            arr_54 [i_0] = 74;
            arr_55 [i_0] = var_3;
        }

        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            arr_60 [i_0] [i_14] [i_0] = var_6;
            arr_61 [6] [i_0] |= var_2;
            var_28 = -109;
        }
        arr_62 [i_0] [i_0] = -75;
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 11;i_15 += 1)
    {

        for (int i_16 = 0; i_16 < 11;i_16 += 1)
        {
            var_29 = var_8;
            var_30 -= ((1820046822 ? (arr_19 [i_15] [i_16] [i_16] [2]) : (arr_19 [14] [i_16] [14] [18])));
            var_31 = ((-126 ? var_5 : (arr_36 [i_15] [i_16] [i_16] [i_16])));
        }
        for (int i_17 = 0; i_17 < 11;i_17 += 1)
        {
            arr_71 [i_15] [i_17] = ((370335933 ? 74 : ((96 ? 1 : -75))));
            arr_72 [10] [i_17] [i_15] = ((231 >= (arr_34 [i_15] [i_15])));
            arr_73 [i_15] [i_15] = -var_5;
        }
        arr_74 [i_15] = (arr_7 [i_15] [i_15]);
    }
    var_32 = ((!-109) ? (max(((var_6 ? var_6 : var_11)), var_16)) : ((((var_10 - 74) ? (~var_15) : ((var_13 ? 2098864715 : var_15))))));
    #pragma endscop
}
