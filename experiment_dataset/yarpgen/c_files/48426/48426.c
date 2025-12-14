/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2 + 1] = (max(1, 124));
                    var_19 -= ((((~(arr_5 [i_2 - 1] [4] [i_2 + 3]))) & var_14));
                }
            }
        }
    }
    var_20 |= var_5;
    #pragma endscop
}
