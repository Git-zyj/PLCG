/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 = (max((((-127 - 1) + -var_17)), (arr_1 [i_0])));
        var_21 = (((arr_0 [i_0]) ? var_16 : (arr_0 [i_0])));
        var_22 = (arr_0 [1]);
        var_23 = (20118 == var_13);
    }
    var_24 = 12967580242559629866;
    var_25 = 127;
    var_26 = (min(var_26, var_7));
    #pragma endscop
}
