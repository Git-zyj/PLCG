/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_7;
        arr_4 [i_0] = var_10;
        var_11 = (((((((((arr_0 [i_0] [i_0]) ? var_3 : 24094))) && 1))) != (max(-1, 31457280))));
        arr_5 [i_0] [i_0] = var_2;
    }
    var_12 = (max(var_12, var_6));
    var_13 = (var_4 && var_2);
    var_14 = var_6;
    #pragma endscop
}
