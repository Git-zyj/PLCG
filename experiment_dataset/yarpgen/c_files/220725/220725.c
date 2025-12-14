/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = var_11;
                arr_6 [i_0] [i_1] = ((108 ? 3213269228 : 3213269232));
                var_13 = (min(var_13, 3213269237));
            }
        }
    }
    var_14 += 3213269237;
    var_15 = (((((var_7 & (var_9 != var_10)))) ? (min(1081698058, 1081698068)) : var_4));
    #pragma endscop
}
