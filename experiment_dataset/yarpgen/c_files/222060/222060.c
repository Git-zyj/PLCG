/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max((!var_11), var_4))) ? (min(((var_1 ? 144115187002114048 : var_4)), var_3)) : var_3));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((-(max(var_0, var_1)))));
        var_14 &= (((var_6 ? var_7 : (!192))));
    }
    var_15 = (((~var_2) ? (var_10 < var_10) : ((min(var_6, var_6)))));
    #pragma endscop
}
