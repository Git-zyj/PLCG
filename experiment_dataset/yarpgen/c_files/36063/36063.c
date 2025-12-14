/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    var_13 = ((((26 ? var_8 : -3905763815299129528))) ? (max((min(429354170, var_4)), -24639)) : var_2);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_1] [17] [i_1 + 2] [7] = ((~(min(2443496714, 4116))));
                    var_14 = (arr_4 [i_1] [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
