/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;
    var_18 = (max(var_18, var_1));
    var_19 = ((var_6 ? (!var_7) : (((((var_4 ? var_15 : var_15))) ? var_0 : var_11))));
    var_20 = (((var_2 ? (~16215) : var_9)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_21 = (((((~(~var_5)))) ? var_12 : var_5));
                var_22 = ((~((-var_16 ? ((8227399968722401245 ? -30179 : 1)) : var_10))));
            }
        }
    }
    #pragma endscop
}
