/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_20 += var_14;
                var_21 = (min(var_21, (~var_10)));
            }
        }
    }
    var_22 = (4096 % -1);
    var_23 = ((((((~var_10) ? var_15 : var_15))) ? var_10 : (-var_4 + var_14)));
    #pragma endscop
}
