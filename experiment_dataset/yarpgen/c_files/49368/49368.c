/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_9 [2] [i_1] [i_1] = var_5;

                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            var_19 = (arr_11 [i_0 - 2] [i_1] [i_2] [i_3] [i_2]);
                            var_20 |= (-26334 % var_11);
                        }
                        arr_13 [i_0 - 2] [i_1] [i_2] [i_3] = 8;
                    }
                    var_21 = (((arr_10 [i_0 - 1] [i_0 - 1] [1] [i_0 - 1] [10]) ? (arr_12 [i_0] [i_0 - 2] [i_0 + 1] [i_0] [i_0 + 1]) : (arr_12 [4] [i_0 - 1] [i_0 - 3] [i_0 + 1] [i_0 + 1])));
                    arr_14 [i_0] [i_0 - 3] [i_1] [i_2] = ((var_16 / (arr_3 [i_0 + 1])));
                    var_22 ^= (975901872 && 45698);
                }
            }
        }
        var_23 = var_2;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_24 ^= (((arr_16 [i_5]) - (arr_16 [i_5])));
        var_25 = (~var_1);
        var_26 = ((133 ? var_2 : (arr_15 [i_5] [i_5])));
        arr_17 [i_5] [i_5] = 0;
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        var_27 = (((975901872 ? (arr_15 [i_6] [i_6]) : var_0)));
        arr_22 [i_6] = (((arr_18 [i_6] [1]) | (((-(arr_16 [i_6]))))));
    }

    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {

        for (int i_8 = 4; i_8 < 9;i_8 += 1)
        {
            arr_28 [i_8] [1] = (arr_16 [i_8 - 2]);
            var_28 = (((((arr_4 [i_7] [9] [i_8 - 2]) ? var_1 : var_1)) / (arr_16 [i_8 - 4])));
        }
        arr_29 [i_7] = (arr_3 [3]);
        /* LoopNest 3 */
        for (int i_9 = 4; i_9 < 8;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 9;i_11 += 1)
                {
                    {
                        arr_38 [i_9] [i_9] [i_10] = -5679;
                        var_29 = var_12;
                        var_30 = (min(var_30, (~51548)));
                    }
                }
            }
        }
        var_31 = (arr_11 [i_7] [i_7] [i_7] [i_7] [i_7]);
    }
    for (int i_12 = 4; i_12 < 15;i_12 += 1)
    {
        arr_41 [i_12 - 4] = ((((((!(((40401 ? -26335 : var_18))))))) % var_3));
        arr_42 [7] = (((~var_8) ? (((-17 || (arr_21 [i_12 + 1])))) : (!31839)));
    }
    var_32 = var_2;
    var_33 = max(var_13, 19);
    #pragma endscop
}
