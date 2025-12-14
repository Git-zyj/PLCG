/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_8;
    var_19 = (min(var_2, ((min(var_9, var_14)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = var_11;
        arr_3 [i_0] = (min(((((max(var_12, var_2)) & (arr_0 [i_0] [i_0])))), (max((min(var_0, var_0)), ((min(var_17, var_8)))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] [10] [i_1] |= (min(68, 1));
                        arr_12 [i_0] [i_2] [3] = var_11;
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_15 [i_4] [1] = var_10;
        arr_16 [i_4] = var_17;
    }
    for (int i_5 = 2; i_5 < 14;i_5 += 1)
    {
        var_20 = ((var_10 > (((arr_17 [i_5 + 1]) * (arr_17 [i_5 + 1])))));
        var_21 = var_16;
        arr_19 [0] = (min((min(var_10, (arr_18 [i_5 - 2]))), ((((min(var_14, (arr_17 [i_5])))) - var_3))));
    }
    #pragma endscop
}
