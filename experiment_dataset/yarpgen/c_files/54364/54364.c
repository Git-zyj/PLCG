/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 16;
    var_13 |= var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_14 = ((!(arr_3 [i_1])));
                arr_4 [i_0] [i_0] = (((!2354206139) ? (max((arr_1 [i_0]), (arr_3 [i_0]))) : (arr_3 [i_1])));
            }
        }
    }
    var_15 = var_8;
    var_16 = var_10;
    #pragma endscop
}
