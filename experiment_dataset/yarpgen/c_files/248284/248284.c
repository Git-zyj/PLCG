/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_14 = (max(var_14, (32749 | 137)));
        var_15 = (min((((arr_3 [i_0]) ? var_0 : -3466038851138673418)), var_12));
    }
    var_16 = ((var_3 ? var_5 : var_8));
    #pragma endscop
}
