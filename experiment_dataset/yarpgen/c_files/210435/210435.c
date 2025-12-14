/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_0 > (((~(~var_11))))));
    var_14 = (min(var_0, (min(3353045624, var_11))));
    var_15 |= ((var_8 - (max(var_9, var_0))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_16 = (arr_1 [i_0]);
        var_17 += (!var_7);
    }
    #pragma endscop
}
