/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((((((((arr_0 [i_0 + 1]) * 1591858768))) ? (2703108527 * var_4) : (var_9 / var_13)))) ? (min(1591858768, (arr_3 [i_0 + 1] [i_0] [i_0 + 1]))) : ((((arr_4 [i_0 + 1] [i_0 - 1] [i_0]) * (arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 1]))))));
                var_15 |= (arr_0 [i_0]);
            }
        }
    }
    var_16 = var_8;
    var_17 = (max(var_17, (((var_1 << (var_13 + 5827))))));
    #pragma endscop
}
