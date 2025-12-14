/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_15 != (((var_11 && (var_8 < 0)))));
    var_17 = var_5;
    var_18 = (min(var_8, ((((var_13 ? var_13 : var_5)) / (var_12 + var_10)))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_19 = var_13;

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                arr_10 [7] [i_0] [i_0] = (max(((((arr_9 [i_0 + 1]) && (arr_9 [i_0 - 1])))), (max((arr_9 [i_0 + 1]), (arr_9 [i_0 - 1])))));
                var_20 = (min(1, 0));
                arr_11 [12] &= 0;
            }
            var_21 = (((((arr_0 [i_0 - 1]) ? -var_15 : (arr_1 [i_0 + 1] [i_1 - 1]))) ^ (((((min((arr_3 [i_1] [i_1] [i_0]), var_15)))) % ((var_9 ? (arr_6 [i_0] [i_0] [i_0]) : 1))))));
            arr_12 [i_0] [i_0] = (min(((((arr_2 [i_0 - 1] [i_1 - 1]) >= (arr_1 [i_0 + 1] [i_0 - 1])))), var_0));
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        arr_22 [i_6] [i_5] [i_4] [i_3] = 0;
                        arr_23 [16] [i_4] = ((((var_6 ? var_4 : (arr_2 [i_3] [i_4]))) * var_7));
                    }
                }
            }
            arr_24 [i_3] [5] = (((arr_4 [i_3] [i_3]) < var_1));
        }
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            arr_36 [i_3] [i_7] [i_8] [8] [i_10] [i_10] = (((((~(arr_15 [i_8] [i_3])))) ? (arr_13 [i_3] [i_3]) : (var_4 + 5)));
                            var_22 = (min(var_22, (((~(arr_13 [i_10] [i_7]))))));
                            var_23 ^= ((var_3 && (arr_4 [i_10] [14])));
                        }
                        var_24 = (~var_5);
                    }
                }
            }
            arr_37 [i_3] [i_3] = (((arr_9 [i_7]) >= var_9));
        }
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 23;i_13 += 1)
                {
                    {
                        arr_45 [i_13] [i_13 - 1] = (arr_16 [i_13] [10]);
                        arr_46 [i_11] [i_11] [i_13] = (arr_3 [i_3] [i_11] [i_12]);
                        var_25 = (arr_35 [i_12] [i_12] [i_12] [i_13 - 3] [i_13 - 1] [i_13 - 3] [i_13 - 2]);
                    }
                }
            }
            var_26 = (((((var_0 ? var_6 : var_7))) ? 16 : (arr_27 [i_11] [i_3] [i_3])));
        }
        arr_47 [i_3] = (((-765631766 + 2147483647) << (18446744073709551581 - 18446744073709551581)));
        arr_48 [i_3] = 0;
    }
    #pragma endscop
}
