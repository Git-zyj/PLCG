/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (((arr_4 [i_0] [i_1 - 1]) ? var_16 : -13191))));
                var_21 = ((((((arr_4 [i_0] [i_1 + 2]) ? 1 : (arr_3 [i_0])))) ? (((arr_3 [i_0]) ? -var_4 : (arr_4 [i_1] [i_0]))) : (arr_3 [i_0])));
            }
        }
    }
    var_22 = (!var_5);
    var_23 = var_7;
    #pragma endscop
}
