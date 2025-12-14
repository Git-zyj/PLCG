/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((var_9 ? var_9 : var_13)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0] [9]);
        var_21 += (arr_1 [8]);
    }
    var_22 -= var_13;
    #pragma endscop
}
