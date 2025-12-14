/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] &= ((var_2 || (var_12 / var_7)));
        var_13 *= 6049059957249278856;
    }
    var_14 = (((((((max(1462809240, var_12))) ? (var_9 ^ var_11) : (~7598250870947697531)))) | var_5));
    #pragma endscop
}
