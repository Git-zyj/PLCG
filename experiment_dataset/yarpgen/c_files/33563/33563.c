/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_2 + 9223372036854775807) << (((((((((106 ? var_6 : 2147483647))) ? var_2 : (var_3 / var_2))) + 3329402418446231869)) - 8))));
    var_12 &= ((-(max(((max(var_3, var_6))), (min(var_4, var_2))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        arr_3 [i_0] = ((arr_0 [i_0]) ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0]))) : 2147483647);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_13 |= (arr_4 [i_0] [i_0]);

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_14 = var_1;
                            arr_13 [i_0 - 1] [i_1] [i_0] [i_3] [i_4] = var_5;
                            arr_14 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] = ((-(arr_6 [i_0 + 2] [i_1] [i_2 + 1] [i_4])));
                            arr_15 [i_0] [i_0 + 2] [i_1] [i_0] [1] [i_4] = (((568483049 ? -2147483633 : (arr_1 [i_0]))));
                        }
                        var_15 = (min(var_15, -var_0));
                    }
                }
            }
        }

        for (int i_5 = 4; i_5 < 6;i_5 += 1)
        {
            var_16 = var_5;
            arr_18 [i_0] = (arr_10 [i_0 - 1] [7] [i_0 - 1] [i_5] [i_5]);
        }
        for (int i_6 = 2; i_6 < 8;i_6 += 1)
        {
            var_17 = ((!(arr_5 [i_0])));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {
                        arr_26 [i_0] [1] [i_0] [i_6] = ((15 ? 69 : (arr_1 [i_0])));
                        var_18 = ((~(arr_21 [i_0] [i_0])));
                    }
                }
            }
        }
        var_19 = (var_6 ? (arr_20 [i_0 - 1] [i_0 + 3] [i_0]) : var_8);
    }
    for (int i_9 = 3; i_9 < 18;i_9 += 1)
    {
        arr_29 [i_9] = ((~(((((28755647 ? 255 : 65527))) ? ((~(arr_28 [1]))) : (arr_28 [i_9])))));
        var_20 = (min(((min((arr_27 [i_9 + 4]), var_3))), ((var_7 ? (((!(-2147483647 - 1)))) : ((-9 ? (arr_28 [i_9 + 4]) : -28755677))))));
    }
    var_21 = var_8;
    #pragma endscop
}
