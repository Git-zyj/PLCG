/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 += ((((127 < (arr_1 [i_0]))) ? ((var_1 ? ((-(arr_1 [i_0]))) : var_4)) : 0));
        var_21 = min((((arr_0 [i_0] [i_0]) <= 102)), var_19);
        var_22 = (arr_0 [i_0] [i_0]);
    }
    var_23 = ((~((-(129 > 33826)))));
    var_24 = var_7;
    #pragma endscop
}
