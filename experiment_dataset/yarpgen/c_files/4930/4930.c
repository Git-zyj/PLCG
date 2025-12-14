/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((max(var_15, -22742))) ? -22742 : ((var_8 ? 57599 : var_3))))) ? var_2 : 127));
    var_17 = (((max(((min(var_11, -21))), (max(-2116303120, 57574)))) / ((((max(var_3, var_9))) ? (~67108862) : var_15))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 += ((+((-(((arr_1 [12]) ? var_10 : var_2))))));
        var_19 = (arr_0 [i_0] [i_0]);
    }
    #pragma endscop
}
