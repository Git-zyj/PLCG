/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!(((var_9 ? 7972638368958315435 : var_7)))));
    var_13 = ((~((~(~var_6)))));

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_14 = 7972638368958315435;
        var_15 = (((~var_9) < (((((~-7972638368958315453) != (arr_1 [i_0])))))));
        var_16 = (~-8220);
    }
    #pragma endscop
}
