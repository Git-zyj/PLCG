/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = ((-(!-5497060022278851773)));
        var_20 *= var_12;
    }
    var_21 = var_7;
    var_22 = -3802530116;
    var_23 &= (var_11 >= ((((min(var_12, var_5))) ? (var_13 + 49939) : var_6)));
    #pragma endscop
}
