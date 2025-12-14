/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 7;i_3 += 1)
                    {
                        var_20 = (((arr_4 [i_1]) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (arr_0 [i_0])));
                        arr_10 [i_2] [i_1] = (max(144115188075855871, (arr_0 [i_2 - 1])));
                        var_21 = (max(var_21, (((~(max(var_11, -1474631992)))))));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_22 = (max(var_22, 1474631991));
                        arr_14 [7] [i_1] [i_2] [i_2] = ((((var_10 ? ((var_2 ? (arr_3 [8] [0]) : var_16)) : (arr_12 [i_2 + 1] [i_2 + 1] [i_2] [i_2]))) ^ ((((arr_6 [i_0] [i_0] [i_0] [i_0]) * (arr_6 [i_4] [i_2] [i_1] [i_0]))))));
                    }
                    arr_15 [i_0] [i_1] [i_2] = ((((((!var_8) ? var_7 : ((var_0 ? -4982 : (arr_4 [i_1])))))) ? ((max(((-(arr_1 [i_0] [i_1]))), (((-365288260419874727 ? var_12 : 2147483635)))))) : (arr_7 [i_0] [i_2] [5] [i_0])));
                }
            }
        }
        var_23 = (~var_0);
        arr_16 [i_0] [i_0] = -25;
    }
    var_24 = ((((((var_9 ? var_17 : var_2)))) * (max(((var_8 ? var_7 : var_18)), ((var_7 ? -1474631992 : var_15))))));
    #pragma endscop
}
