/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_7, ((var_6 ? (min(1, var_4)) : (((min(var_0, var_8))))))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_11 ^= ((!((((((2147483647 % (arr_2 [i_0])))) ? (arr_1 [i_0]) : 95)))));
        var_12 = var_5;
    }
    #pragma endscop
}
