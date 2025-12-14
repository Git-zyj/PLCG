/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 3767003619062141491;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = 9467312793690100296;
                var_19 -= ((((!(!var_15))) && (!3767003619062141486)));
                var_20 = (16957570522688173922 ? 3767003619062141486 : 14679740454647410124);
                var_21 = (max(var_21, (!var_4)));
            }
        }
    }
    var_22 = ((!(((var_15 ? var_16 : ((var_0 ? 17614948256539491682 : var_15)))))));
    #pragma endscop
}
