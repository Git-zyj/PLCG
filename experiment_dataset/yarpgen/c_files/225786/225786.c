/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= -var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [1] = -14369;
                arr_6 [i_0] = (arr_0 [13] [13]);
                var_19 -= (((arr_2 [4] [4]) ? ((max((min(228, var_6)), (var_14 > var_1)))) : var_14));
            }
        }
    }
    #pragma endscop
}
