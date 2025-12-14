/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, 63));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 = -var_9;
        arr_3 [i_0] [i_0] |= (arr_0 [i_0]);
        var_14 = (min(var_14, (~var_8)));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_15 = (max(var_15, (((!(arr_1 [i_0]))))));
            arr_6 [i_1] = ((var_2 ? ((var_4 ? (arr_5 [i_1]) : (arr_2 [i_1]))) : (var_1 - var_1)));
            var_16 += (((arr_4 [i_1] [i_0] [i_0]) ? var_11 : (arr_4 [i_0] [2] [i_1])));
            var_17 = (min(var_17, (((65489 ? ((127 ? (arr_1 [i_0]) : 65473)) : var_3)))));
            var_18 = (arr_0 [i_0]);
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_19 = ((-(((!(arr_1 [8]))))));
            var_20 = var_2;
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_21 = (max(var_21, var_2));
            var_22 -= arr_0 [i_3];
            var_23 = arr_4 [i_3] [i_3] [i_3];
            var_24 = (max(var_24, var_0));
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            arr_15 [i_4] = var_2;
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        var_25 ^= arr_8 [i_0] [i_0];
                        var_26 ^= var_7;
                    }
                }
            }
            var_27 = (max(var_27, var_3));
        }
        arr_21 [i_0] [i_0] = (((arr_11 [i_0] [i_0] [i_0]) | (arr_0 [i_0])));
    }
    #pragma endscop
}
