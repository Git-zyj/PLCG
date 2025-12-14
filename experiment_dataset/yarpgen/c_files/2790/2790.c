/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0 + 1] &= (max((~0), ((((min(var_1, (arr_0 [i_0 + 1])))) ? ((var_6 ? 170693118976210663 : var_2)) : (2036934485 % var_6)))));
                    var_13 ^= (arr_7 [i_0] [i_2]);
                    arr_10 [i_0] [i_0] [i_0] [i_0] = var_7;
                }
            }
        }
    }
    #pragma endscop
}
