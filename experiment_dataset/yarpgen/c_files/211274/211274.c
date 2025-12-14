/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (((((min((((arr_0 [i_0] [i_0]) >> (var_12 - 26032))), (((arr_1 [i_0] [1]) ? (arr_1 [i_0] [8]) : (arr_0 [i_0] [i_1])))))) ? ((((((arr_1 [i_0] [10]) ? -24921 : (arr_3 [i_0] [i_0])))) ? 18446744073709551615 : (max(var_12, (arr_3 [i_0] [i_1]))))) : var_12)))));
                var_15 += (((((arr_1 [i_0 + 2] [4]) ? (arr_1 [i_0 + 2] [6]) : (arr_1 [i_0 + 1] [12]))) <= ((max((arr_1 [i_0 + 1] [2]), (arr_1 [i_0 + 1] [8]))))));
                arr_4 [i_0] [i_0] = (1 & 12563584769243283294);
                arr_5 [i_0] [i_0] = ((max((arr_1 [i_0 + 3] [i_0]), (arr_1 [i_0] [i_0]))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                {
                    arr_12 [i_2] = 1;
                    arr_13 [i_2] [i_2] [i_2] [i_2] = (((arr_6 [i_3] [i_2]) / -110));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_17 [0] &= (arr_15 [i_5]);

        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            var_16 = var_8;
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 15;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            arr_29 [i_5] [i_9] [i_8] [i_5] [i_5] [i_6] [i_5] = (min(((((max((arr_2 [i_8] [i_6] [i_7]), var_13))) ? var_11 : (arr_11 [i_9] [i_9] [i_9] [i_5]))), 1));
                            var_17 = var_11;
                            var_18 = ((min(((((arr_1 [i_8] [i_5]) ^ (arr_1 [i_5] [i_5])))), ((var_3 ? (arr_18 [i_5] [i_5]) : 18446744073709551614)))));
                        }
                        arr_30 [i_5] = (max(10, 1));
                        arr_31 [i_5] [i_5] [i_8] [i_8] = ((((min(18446744073709551615, var_0))) ? ((((arr_27 [i_8 - 1] [i_8] [i_8 - 1] [i_8] [i_8]) ? var_9 : (arr_27 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1])))) : (((arr_22 [i_5] [i_5] [i_8] [i_8]) ? (arr_22 [i_5] [i_8] [i_8] [i_8]) : (arr_22 [i_5] [i_8] [i_8] [i_8])))));
                    }
                }
            }
            var_19 += var_9;
        }
        for (int i_10 = 2; i_10 < 13;i_10 += 1)
        {
            var_20 &= (min((arr_20 [i_5] [i_10] [i_10 - 1]), (arr_3 [i_10 + 2] [i_10 - 1])));
            /* LoopNest 2 */
            for (int i_11 = 3; i_11 < 15;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 14;i_12 += 1)
                {
                    {
                        var_21 *= ((var_12 > (min(var_12, ((43177 ? (arr_27 [i_5] [i_10] [i_11] [i_11] [i_12]) : (arr_1 [i_5] [i_10])))))));
                        var_22 -= (((arr_23 [i_10 + 2] [i_11 - 1] [i_12 + 2]) / (((arr_40 [i_10] [i_10]) ? (((arr_28 [i_5] [i_10] [i_11] [i_11]) ? var_10 : 25432)) : var_10))));
                    }
                }
            }
            arr_41 [i_5] [i_5] = var_4;
        }
        var_23 -= (((arr_15 [i_5]) >> (var_11 - 6854487430009979209)));
    }
    var_24 &= var_4;
    #pragma endscop
}
