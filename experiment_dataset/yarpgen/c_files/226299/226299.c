/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 += ((-(arr_1 [i_0] [i_0])));
        var_19 = (max(var_19, (--9223372036854775794)));
    }
    var_20 |= var_0;
    var_21 = (max(var_21, (((((min(var_0, ((min(var_17, 47)))))) ? (((((1 ? var_10 : var_0)) <= (((var_4 ? var_9 : var_12)))))) : var_7)))));
    #pragma endscop
}
