/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = var_14;
        var_21 -= -11;
        var_22 = (~var_2);
    }
    var_23 = (((var_4 & var_5) ? (!5680875115491988344) : 127));
    #pragma endscop
}
