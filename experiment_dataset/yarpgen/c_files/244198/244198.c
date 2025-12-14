/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (((var_13 ? var_6 : (arr_1 [i_0 - 1]))));
                arr_6 [i_0] [i_1] [i_1] = (max((var_15 < var_15), (~25332)));
            }
        }
    }
    var_16 = (var_3 ? var_4 : var_11);
    #pragma endscop
}
