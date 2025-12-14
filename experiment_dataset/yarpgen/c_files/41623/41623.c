/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41623
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
                var_13 = var_7;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_14 = (arr_4 [i_0]);
                            var_15 = var_4;
                        }
                    }
                }
                arr_12 [i_0] = (arr_5 [9]);
                var_16 = (min((arr_6 [i_1]), (arr_6 [i_0])));
                var_17 = (max((min((arr_3 [i_0] [2]), -5410567598112199553)), (arr_8 [i_0] [i_0] [i_1] [i_1] [i_1])));
            }
        }
    }

    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        arr_15 [i_4] = (max((min(114, (arr_7 [i_4] [i_4] [0] [0]))), (arr_10 [i_4] [i_4] [i_4] [i_4])));
        var_18 *= 1782994365;
        var_19 = var_9;
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        arr_19 [10] = var_5;
        var_20 -= var_2;
        arr_20 [i_5] = 12185;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        var_21 = (arr_21 [i_6] [i_6]);
        var_22 = var_8;

        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            var_23 = (arr_26 [i_7] [i_6]);
            var_24 -= 128;
        }
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 21;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        {
                            var_25 = (arr_34 [i_6] [i_8] [i_6] [i_6]);
                            arr_38 [i_8] [i_8] [i_9] [8] [i_8] [i_9] [i_11] = 9223372036854775808;
                            arr_39 [i_6] [i_10] [i_9] [i_10] [i_11] &= (arr_24 [i_6]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        {
                            var_26 = (arr_42 [i_6] [i_8] [i_8] [i_9] [i_8] [i_13]);
                            arr_45 [i_8] [i_12] [i_6] [i_9] [i_8] [i_6] [i_8] = (arr_27 [i_6] [i_8] [i_9]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 23;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 23;i_15 += 1)
                    {
                        {
                            var_27 = (arr_50 [i_6] [i_8] [i_8]);
                            var_28 = var_5;
                            var_29 = (max(var_29, (arr_41 [i_15] [i_15] [i_15] [i_15])));
                        }
                    }
                }
                var_30 = (max(var_30, 144));
                var_31 = 32;
            }
            var_32 *= 0;
        }
        for (int i_16 = 0; i_16 < 23;i_16 += 1)
        {
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 23;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    {
                        arr_60 [i_6] [i_6] [i_17] = var_2;
                        arr_61 [i_18] [i_18] [i_6] [i_18] = (arr_35 [i_17] [8] [i_17] [8] [i_17] [i_18]);
                    }
                }
            }
            var_33 = (max(var_33, (arr_25 [i_6] [i_6])));
        }
        for (int i_19 = 0; i_19 < 1;i_19 += 1)
        {
            /* LoopNest 3 */
            for (int i_20 = 0; i_20 < 23;i_20 += 1)
            {
                for (int i_21 = 3; i_21 < 21;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 23;i_22 += 1)
                    {
                        {
                            var_34 *= (arr_47 [i_6] [i_19] [i_20] [i_20] [i_22] [i_20]);
                            arr_72 [i_22] [i_21] [i_6] [i_19] [i_6] |= 0;
                        }
                    }
                }
            }
            arr_73 [1] [1] [1] = arr_24 [i_6];
        }
        var_35 = (arr_59 [i_6] [i_6] [i_6] [i_6]);
    }
    /* LoopNest 2 */
    for (int i_23 = 0; i_23 < 21;i_23 += 1)
    {
        for (int i_24 = 2; i_24 < 20;i_24 += 1)
        {
            {
                arr_79 [20] = (min(((max((arr_44 [i_23] [i_23] [i_23] [i_23] [i_23]), (min(1, (arr_42 [6] [i_23] [i_24] [i_23] [i_23] [i_23])))))), (min(var_1, (arr_51 [i_23] [i_23] [10] [i_24 + 1] [i_23])))));
                var_36 |= (min(var_3, 1635905206));
                var_37 = (arr_64 [i_23] [i_24 + 1]);
            }
        }
    }
    #pragma endscop
}
