/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!(((-(var_8 - var_5))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = 0;
        var_13 |= ((-((((max(var_4, 0))) ? var_8 : (180 <= var_3)))));
    }
    var_14 = -36;
    #pragma endscop
}
