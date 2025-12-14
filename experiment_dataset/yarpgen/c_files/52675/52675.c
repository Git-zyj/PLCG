/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_1] |= var_9;
                    arr_9 [i_0] [i_0] [i_1] [i_0] = ((!((max((arr_0 [i_1 + 1]), (arr_5 [i_2 - 2]))))));
                }
            }
        }
    }
    var_13 *= (max(var_3, (((1 / (1 - 2147483646))))));
    var_14 = max((((var_9 / var_2) + (!var_0))), (((max(var_4, 1)) / var_9)));
    var_15 = (((((max(1, var_1)))) ? ((max((var_10 - var_12), ((max(17053, var_1)))))) : (((var_1 / var_5) ? var_3 : -var_1))));
    #pragma endscop
}
