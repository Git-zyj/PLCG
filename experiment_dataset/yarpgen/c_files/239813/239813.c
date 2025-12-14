/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_8, ((var_7 ? var_14 : (max(var_13, var_9))))));
    var_17 = (((~var_4) % (var_8 ^ 4294967295)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (((!-3084131070598293691) > var_0));
        var_18 = ((((0 ? ((3084131070598293690 ? 27 : (arr_0 [i_0] [i_0]))) : 4294967253)) < 791976875));
    }
    var_19 += var_0;
    #pragma endscop
}
