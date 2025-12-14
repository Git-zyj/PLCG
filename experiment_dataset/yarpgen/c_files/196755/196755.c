/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = 1;
        arr_4 [i_0] = (arr_2 [i_0]);
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                var_18 = (min(var_18, 2147483647));
                var_19 = (arr_11 [i_1] [i_1] [i_1]);
            }
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                arr_15 [i_1] [i_1] [i_1] [i_1] = (arr_5 [i_1]);

                for (int i_5 = 3; i_5 < 14;i_5 += 1)
                {
                    arr_20 [i_1] [i_1] = 15;
                    var_20 = (arr_1 [i_1] [i_1]);
                }
                arr_21 [i_1] = (arr_12 [i_1] [i_2] [i_4]);
                arr_22 [i_1] [i_2] [i_2] = 12224;
            }
            arr_23 [14] [14] [i_1 + 2] &= 65519;
            arr_24 [i_1] = 4294967288;
        }
        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            var_21 = (arr_14 [i_1] [i_1 - 1] [i_1] [7]);
            arr_28 [i_1] [i_1] = 51618;
            var_22 = (max(var_22, (arr_26 [i_1])));
        }
        for (int i_7 = 1; i_7 < 14;i_7 += 1)
        {
            var_23 = 109;
            arr_31 [i_1] [i_7 + 2] [4] = (arr_1 [i_1] [i_1]);
            var_24 = (max(var_24, 18446744073709551607));
        }
        arr_32 [i_1] = (arr_7 [i_1] [5]);
    }
    for (int i_8 = 1; i_8 < 1;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                {
                    arr_40 [i_8] [i_8] [i_10] [i_10] = 1224225678;

                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        arr_43 [i_9] [i_9] = 3478689469;

                        for (int i_12 = 1; i_12 < 15;i_12 += 1)
                        {
                            var_25 = (arr_47 [i_12] [i_12 + 1] [i_12] [i_12] [i_10]);
                            var_26 = 2147483647;
                            var_27 = (arr_0 [i_11]);
                            var_28 -= 1;
                        }
                        var_29 = (max(var_29, (arr_2 [i_8])));
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        arr_50 [10] [i_8] [i_8] [i_8] = (arr_48 [i_8 - 1] [i_9] [i_10] [i_8 - 1] [1]);
                        arr_51 [i_13] [i_13] [i_10] [i_9] [i_8] [i_8] = (arr_44 [i_8] [i_8 - 1] [5] [5] [i_8 - 1] [i_8]);
                        var_30 = (min(var_30, (arr_1 [i_8 - 1] [i_8 - 1])));
                    }
                    var_31 = 65518;
                    var_32 = (max(var_32, (arr_34 [10] [10])));
                }
            }
        }
        var_33 = (arr_33 [i_8 - 1]);
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 17;i_16 += 1)
                {
                    {
                        arr_59 [i_8] [i_8] = 4294967292;
                        arr_60 [12] [i_14] [12] [i_14] [i_14] = -8151;
                        arr_61 [i_14] [i_14] [10] [i_14] = (arr_57 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]);
                        var_34 = (arr_53 [i_14]);
                    }
                }
            }
        }
        arr_62 [i_8] = 128;
    }
    /* LoopNest 3 */
    for (int i_17 = 0; i_17 < 18;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 18;i_18 += 1)
        {
            for (int i_19 = 1; i_19 < 16;i_19 += 1)
            {
                {
                    var_35 = 1;
                    var_36 = (max(var_36, (arr_2 [12])));
                    var_37 = 42;
                    var_38 = (arr_63 [i_17] [i_17]);
                }
            }
        }
    }
    #pragma endscop
}
