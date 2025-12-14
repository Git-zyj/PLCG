/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (max((min((arr_1 [i_0]), (arr_1 [i_0]))), (arr_1 [i_0])));
        var_16 = 4886;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_17 &= ((min(44218, (arr_0 [i_1]))));
        var_18 = max(((((arr_1 [i_1]) ? var_4 : 4886))), -2276055796);
    }
    var_19 &= ((var_6 == (~98)));
    var_20 = var_2;
    #pragma endscop
}
