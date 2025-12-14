/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_6 ^ var_3) / (((-1 ? var_4 : var_4))))) != ((((var_3 != (1 * 2583916302310854)))))));
    var_12 = (max(var_12, (((17743199456777836053 * (((((var_9 == var_10) >= var_1)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = -524547254;

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                var_13 = (((arr_0 [i_0] [i_1]) ? (arr_4 [i_0] [i_1]) : (arr_0 [i_0] [i_0])));
                var_14 |= ((!(arr_5 [i_0])));
            }
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            arr_17 [1] [i_4] [i_5] = ((var_9 ? (arr_16 [i_4 - 1] [i_4] [i_4] [4]) : (arr_9 [i_1])));
                            var_15 = var_5;
                        }
                        for (int i_6 = 3; i_6 < 23;i_6 += 1)
                        {
                            var_16 = arr_7 [i_0] [17] [8] [8];
                            var_17 = var_2;
                            var_18 = var_0;
                        }
                        arr_20 [8] [i_1] [18] [i_1] = ((var_8 == (arr_18 [i_4 - 1] [i_4 - 1])));
                        var_19 ^= var_3;
                        arr_21 [18] [i_0] [23] [i_3] [i_3] [i_4] = (arr_16 [i_0] [i_4 - 1] [i_3] [i_4]);

                        for (int i_7 = 2; i_7 < 24;i_7 += 1)
                        {
                            arr_26 [23] [i_4] [18] [i_0] [i_0] [i_0] = (var_1 >= 703544616931715545);
                            var_20 ^= (((arr_16 [i_0] [i_1] [i_7 - 1] [i_4 - 1]) ? (arr_25 [i_7] [i_7 - 1] [i_7 + 1] [i_7] [i_7]) : (~1)));
                        }
                    }
                }
            }
            var_21 = (!126);
        }

        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            var_22 &= (((arr_11 [20] [16] [1] [i_0]) ^ ((((13 >= (arr_18 [i_0] [1])))))));

            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 22;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_23 += ((var_5 / (arr_25 [i_0] [i_8] [i_9] [i_10 - 1] [i_11])));
                            arr_37 [i_0] [i_8] [20] [14] [i_8] [14] [i_0] = ((((17743199456777836070 > (arr_35 [i_8] [i_8])))) * 48);
                        }
                    }
                }

                for (int i_12 = 1; i_12 < 21;i_12 += 1)
                {
                    var_24 = (arr_27 [i_12 - 1]);
                    var_25 = var_6;
                    var_26 = var_4;
                }
            }
            var_27 = (max(var_27, (((1572985376 ? ((6941702214030247926 ? (arr_31 [i_8] [i_0] [i_0]) : var_1)) : (1 >> 0))))));
            var_28 ^= (arr_35 [16] [i_8]);
        }
        for (int i_13 = 3; i_13 < 23;i_13 += 1)
        {
            var_29 = 38323;

            for (int i_14 = 1; i_14 < 22;i_14 += 1)
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 25;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 23;i_16 += 1)
                    {
                        {
                            var_30 = -var_3;
                            var_31 += (var_8 * var_6);
                            var_32 = (((115 - var_1) ^ (arr_41 [i_0] [i_13 - 3] [i_14 + 1])));
                            arr_49 [i_15] [i_15] [22] [i_15] [i_13] = arr_32 [i_0] [i_13] [5] [19] [i_16] [i_16 + 2];
                        }
                    }
                }
                var_33 = ((arr_40 [i_13 + 2] [i_13] [i_14 - 1]) ? (arr_40 [i_13 + 2] [i_14] [i_14 + 3]) : (arr_40 [i_13 + 1] [16] [i_14 + 1]));
            }
            var_34 *= 204;
        }
        arr_50 [i_0] [i_0] = (arr_11 [1] [i_0] [i_0] [i_0]);
        var_35 = var_3;
    }
    #pragma endscop
}
