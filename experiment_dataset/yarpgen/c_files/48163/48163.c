/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 += var_13;
        var_17 &= var_12;
    }
    var_18 &= (((((70 / ((3687511257201370758 ? 65515 : -5632012836218985260))))) ? var_1 : var_9));
    #pragma endscop
}
