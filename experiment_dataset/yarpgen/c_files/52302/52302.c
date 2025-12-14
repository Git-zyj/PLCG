/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((((120 ? (arr_0 [i_0]) : (arr_0 [i_0]))) >> ((((var_9 ? (arr_1 [i_0]) : var_11)) - 3373148052)))));
        arr_3 [i_0] = (((min(111, ((3620489408 ? var_3 : 5)))) <= (arr_1 [i_0])));
    }
    var_15 *= ((min(var_13, 3)) >> ((min(var_13, 3312082675))));
    #pragma endscop
}
