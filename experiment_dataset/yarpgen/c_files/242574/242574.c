/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_12 = ((((((~(arr_1 [i_0] [i_0]))) + 2147483647)) << (((arr_1 [i_0] [i_0]) - 23))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_13 = (((arr_2 [i_0] [i_0]) ? (arr_2 [2] [i_0]) : var_5));
            arr_5 [i_0] [i_1] = ((0 ? var_7 : -var_9));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_14 = (arr_8 [i_0] [i_1] [i_2] [i_1]);
                        arr_11 [i_2] [i_3] = (((32512 | var_6) | ((0 ? var_1 : -1))));
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] |= var_9;
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_15 = ((~(arr_7 [i_0] [i_0] [i_0])));
            arr_15 [i_0] = var_5;
        }
        arr_16 [i_0] = var_11;
        var_16 *= ((+(((arr_0 [i_0]) ? var_4 : var_10))));
        var_17 = var_6;
    }
    var_18 = (max(var_18, (((((min(var_3, ((min(var_0, var_1)))))) > ((32764 ? (var_0 & var_7) : -1)))))));
    var_19 &= (--29599);
    #pragma endscop
}
