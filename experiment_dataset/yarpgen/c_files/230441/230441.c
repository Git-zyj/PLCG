/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((-((1193089628990109939 ? 1193089628990109922 : 32755))))) ? var_8 : 159));
    var_16 = (max((max((max(var_8, var_10)), (9223372036854775800 && var_4))), ((((min(var_11, 1193089628990109922))) ? ((var_5 ? var_1 : var_14)) : (max(0, var_4))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = (min(var_17, (arr_0 [i_0])));
        arr_2 [i_0] [i_0] = var_8;
        var_18 = var_8;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_19 += min((((arr_4 [i_1]) ^ (arr_3 [i_1]))), -65524);
        arr_5 [i_1] [i_1] = (max((0 <= 65531), (~-var_11)));
    }
    #pragma endscop
}
