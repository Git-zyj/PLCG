/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_16 ? var_10 : ((min(0, -528583170))))) & ((((((min(-1896516472, 1896516472)) + 2147483647)) << (4294967295 - 4294967295)))));
    var_19 = (max(var_16, ((((min(var_16, var_4))) ? ((-1285165000 ? 3295199770 : -1896516485)) : var_13))));
    var_20 = 4294967291;
    var_21 = (max((max(var_4, var_2)), ((var_14 ? ((var_7 ? var_14 : var_1)) : var_17))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_22 = (263614378 % 2147483647);

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_0] = (((arr_4 [i_0] [i_1 + 2]) | (arr_4 [i_1 - 1] [i_2])));
                        var_23 = (min(var_23, (((1285165000 ? ((16738 ? 1 : 69)) : 65472)))));
                        arr_12 [i_0] = ((arr_4 [i_1 - 2] [i_1 + 1]) ? (arr_8 [i_1 - 1] [i_3 + 4] [i_1 - 2] [i_1 - 1]) : var_7);
                        arr_13 [i_0] [i_1] [i_2] [1] [i_0] [i_2] = (((arr_1 [i_1 + 1]) ? -4400026793970974454 : (arr_1 [i_1 - 1])));
                    }
                    arr_14 [i_0] [i_0] [i_0] [i_0] = var_7;
                }
            }
        }
    }
    #pragma endscop
}
