/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= 1;
    var_14 += ((!((!(!var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 -= ((var_3 | ((((!((min(-12041, var_6)))))))));
                var_16 += (((-5322 / (min(-5124731318895755500, -5124731318895755500)))) - -13693);
            }
        }
    }
    #pragma endscop
}
