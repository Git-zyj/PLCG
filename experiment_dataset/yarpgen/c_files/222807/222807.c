/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (max((min(4134, 16090)), var_13))));
                var_18 = (max(var_18, ((min(64480, ((17721572898288078479 ? 39592 : ((1999 ? 33173 : 28453)))))))));
            }
        }
    }
    var_19 = var_13;
    var_20 = (min(var_20, ((((((var_3 ? var_16 : var_7))) ? var_13 : var_11)))));
    var_21 = var_15;
    #pragma endscop
}
