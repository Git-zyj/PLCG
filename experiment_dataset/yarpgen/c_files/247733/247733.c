/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = var_7;
                    var_13 = -1359960711;
                    arr_9 [i_1] = (max((((arr_7 [i_1 + 1] [i_1 + 1] [i_2] [i_2]) ? (arr_7 [i_1 - 1] [i_1] [i_2] [i_0]) : (arr_7 [i_1 + 1] [i_2] [i_2] [i_1]))), (!135)));
                    arr_10 [i_1] [i_1] = ((min(((var_11 ? var_6 : var_7)), (~26762))));
                    arr_11 [i_0] [i_0] [i_0] [i_1] = 1359960711;
                }
            }
        }
    }
    var_14 ^= ((var_4 ? (min(((min(var_2, var_8))), var_7)) : 1));
    #pragma endscop
}
