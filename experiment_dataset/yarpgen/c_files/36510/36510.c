/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        var_20 = (arr_0 [i_0] [i_0]);
        var_21 -= ((~((65515 << ((((max((arr_1 [i_0] [i_0]), 26))) - 20))))));
    }
    for (int i_1 = 4; i_1 < 9;i_1 += 1)
    {
        arr_5 [i_1] = (arr_1 [i_1] [i_1 - 3]);

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_8 [i_2] [i_2] = (min((((arr_7 [i_1 + 1] [i_2]) / 20)), ((-(arr_7 [i_1 + 2] [i_2])))));
            var_22 = ((1 / (arr_0 [i_1 - 2] [i_1 - 3])));
        }
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            arr_13 [i_1] = ((((((-(((arr_6 [i_1] [i_3] [i_3]) ? (arr_12 [i_1] [i_1] [i_1]) : var_17)))) + 2147483647)) >> ((((0 ? (min((arr_11 [i_1] [i_3 - 1] [i_3]), var_14)) : (((22 ? (arr_0 [1] [1]) : (arr_1 [i_1] [i_1])))))) - 4294945387))));
            var_23 -= ((~((1 ? (arr_7 [i_1 - 4] [i_3]) : var_19))));
        }
        var_24 = var_7;
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 13;i_6 += 1)
            {
                {
                    var_25 = 20;
                    var_26 = var_15;
                    var_27 = (min((min((((var_9 * (arr_16 [i_4])))), 1175268197)), (arr_14 [i_6 - 1] [i_4])));
                }
            }
        }
        arr_23 [i_4] = -var_3;
        var_28 = 81;
    }
    var_29 = (~var_4);
    #pragma endscop
}
