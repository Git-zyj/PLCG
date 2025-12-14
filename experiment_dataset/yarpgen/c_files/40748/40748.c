/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((-1 ? var_13 : (!-0))))));
    var_17 = ((((1 >= ((1 ? 1 : 53851))))));
    var_18 *= var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((min((min(var_11, var_11)), (!1)))) ? (((arr_0 [i_0]) | var_6)) : (!8557)));
                var_19 = ((!(arr_3 [i_0] [i_0])));
            }
        }
    }
    #pragma endscop
}
