/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 46;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = (max(var_14, 34));
                var_15 = (min(var_15, (((~(((min((arr_5 [i_0] [i_0] [16]), -58)) & (~var_0))))))));
                var_16 = (arr_3 [i_1]);
            }
        }
    }
    var_17 = (min(var_17, ((max((!var_12), (((((-31 ? -31 : var_1))) ? 46 : var_4)))))));
    var_18 = var_6;
    #pragma endscop
}
