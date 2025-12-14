/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= (283726776524341248 == (max(-18163017297185210374, var_6)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_8;
        var_20 = ((!-1) && var_14);
        arr_3 [i_0] = (((((var_18 ? 283726776524341250 : var_10))) ? ((var_15 ? 18163017297185210374 : var_14)) : 18163017297185210377));
        var_21 = (var_2 <= 18163017297185210367);
    }
    var_22 = (var_11 <= var_8);
    var_23 = var_6;
    #pragma endscop
}
