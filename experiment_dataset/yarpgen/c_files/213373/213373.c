/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_1] = (arr_0 [i_1]);
                var_20 = ((18083668791660937364 ? 14890 : 255));
            }
        }
    }
    var_21 = (min(((var_17 ? 3064804545 : var_5)), ((((((var_1 ? var_10 : var_14))) && ((max(var_15, var_14))))))));
    var_22 = (((-6092 || 1) || ((max(((160 ? 142 : 154)), -18)))));
    var_23 = (!var_4);
    #pragma endscop
}
