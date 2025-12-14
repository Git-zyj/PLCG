/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_13 -= (arr_1 [i_0 + 2]);
        arr_2 [i_0 - 1] [i_0] |= var_0;
    }

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_7 [17] [i_1] = -129;

            for (int i_3 = 2; i_3 < 18;i_3 += 1)
            {
                var_14 = ((var_6 / ((((arr_0 [i_1] [i_1]) && var_2)))));
                arr_10 [i_3 + 1] = ((14949478292335304386 ? -127 : var_2));
                var_15 = (!var_10);
            }

            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                var_16 = (min(var_16, ((((arr_1 [i_4 + 1]) << (((arr_1 [i_4 + 1]) - 152)))))));
                var_17 = (((arr_11 [i_1] [i_2]) << (((arr_11 [i_1] [i_2]) - 3893801400))));
            }
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {

                for (int i_6 = 1; i_6 < 16;i_6 += 1)
                {
                    arr_17 [10] [i_2] [i_2] [10] [i_5] [10] = var_7;
                    arr_18 [i_1] [i_1] [1] [i_1] [3] [16] = var_11;
                    var_18 = var_2;
                }
                arr_19 [i_1] [i_2] [i_5] [i_5] = (((((((arr_12 [16]) ? -87 : (arr_14 [14] [i_5] [14] [i_1]))) + 2147483647)) >> var_11));
                var_19 = (((arr_1 [i_1]) ? 129 : (arr_1 [i_1])));
            }
            var_20 = ((var_3 * (arr_13 [i_1] [i_2] [i_2])));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_22 [i_1] [i_1] = (max((arr_14 [i_1] [i_7] [i_7] [i_7]), (min(var_12, (arr_11 [i_1] [i_7])))));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 4; i_10 < 16;i_10 += 1)
                    {
                        {
                            var_21 = ((var_9 ? (((((max(var_3, (arr_23 [10] [10] [i_7] [10])))) ? 33 : 1))) : (max(var_2, (arr_24 [i_10 - 4] [i_10 - 2] [i_10] [i_10 - 4])))));
                            var_22 |= 0;
                            var_23 = ((((25 % ((~(arr_1 [i_8]))))) | var_10));
                            var_24 = var_3;
                            var_25 = 33;
                        }
                    }
                }
            }
            var_26 = ((!(((var_11 ? (min(38, 0)) : -75)))));
            var_27 = ((((((576460752303423487 ? var_2 : var_0))) ? (var_0 ^ var_10) : (((arr_25 [i_7] [i_1] [i_1] [i_1]) * 0)))));
            var_28 = ((((1 ? -1 : var_4)) & (((((var_3 * (arr_1 [i_1]))) <= (!var_11))))));
        }
        var_29 = (max(((((((var_7 ? var_6 : 0))) / (arr_8 [i_1] [i_1] [i_1])))), (arr_13 [i_1] [i_1] [i_1])));
    }
    var_30 = var_3;
    var_31 = (((-(-1363060126899544820 <= var_11))));
    #pragma endscop
}
