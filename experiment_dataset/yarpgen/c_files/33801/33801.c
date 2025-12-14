/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((12894937591443949321 - (((30982 ? var_0 : 8443327867514178902)))))) ? ((((var_2 ? var_2 : 0)))) : ((((max(var_10, 870666514))) ? 4702772594949438489 : (60 & 3424300782)))));
    var_16 = (max(-9685, 1152514299674572120));
    var_17 = (((((var_4 ? var_5 : (var_5 >= 8958408215612961338)))) > 122));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (var_2 != ((-3648551715 - (min(var_11, 870666514)))));
                var_19 = 2828671666;
            }
        }
    }
    #pragma endscop
}
