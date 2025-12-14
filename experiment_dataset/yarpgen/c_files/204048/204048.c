/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_14;
    var_17 = (((min(127, 37)) == var_10));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (((min(0, 37992)) >> ((max((min(var_10, 1)), ((min((arr_0 [i_0 + 3] [i_0 + 3]), 1))))))));
                var_19 = (!37992);
            }
        }
    }
    var_20 = (!((min(((var_9 ? 1 : -62)), var_14))));
    #pragma endscop
}
