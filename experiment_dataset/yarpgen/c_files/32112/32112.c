/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 ^= (arr_0 [i_0]);
        var_19 = (max(var_19, ((((((((arr_1 [0] [i_0]) && 12617977830858453273)))) ^ (arr_1 [i_0] [i_0]))))));
        var_20 = 96;
        arr_2 [2] |= (arr_1 [i_0] [11]);
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    {
                        var_21 = (arr_7 [i_0] [i_1] [i_3]);
                        arr_12 [i_2] [i_1] [i_2] [i_3] [i_0] = var_4;
                        var_22 = (arr_7 [i_1] [i_1 - 1] [i_3 - 1]);
                        var_23 = (arr_11 [i_0] [i_2]);
                        var_24 = (((((arr_3 [i_3 + 3] [i_3 + 4] [i_3 + 4]) ? var_0 : ((var_16 ? (arr_5 [i_0] [i_1] [i_1 + 3]) : var_9)))) * 12617977830858453266));
                    }
                }
            }
        }
    }
    var_25 ^= (((((187 ? 12617977830858453257 : var_3)) == (((var_6 >> (12617977830858453263 - 12617977830858453233)))))));
    #pragma endscop
}
