/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 = ((((arr_1 [i_0]) || (var_3 && var_9))));
        var_16 = ((((-((-502077041727546418 ? 15368 : var_13)))) >= (((((124890038 + var_4) == (arr_1 [i_0])))))));
        var_17 = var_1;
    }
    var_18 |= (((!-79) ^ ((var_11 ? ((var_0 ? var_12 : 59230)) : (((27882 ? 179 : -1401)))))));
    #pragma endscop
}
