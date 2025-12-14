/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (~0);
                var_18 = (max(var_18, (((64 ? (((arr_2 [i_0] [i_0] [i_0]) ? var_16 : (arr_2 [i_0] [i_0] [i_0]))) : (((arr_2 [i_0] [i_0] [i_1]) ? (arr_2 [i_0] [i_0] [6]) : var_13)))))));
                var_19 = (((arr_1 [i_0] [i_0]) >= ((((7864320 ? var_15 : (arr_1 [i_0] [i_1]))) + (((max((arr_0 [i_0]), (arr_0 [i_1])))))))));
            }
        }
    }
    var_20 = ((!((max((~var_14), (max(var_0, var_15)))))));
    #pragma endscop
}
