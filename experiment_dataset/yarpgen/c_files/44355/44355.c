/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_8;

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_13 &= -1891978315922245738;
        var_14 = (max(var_14, (~7395889789521299163)));
    }
    #pragma endscop
}
