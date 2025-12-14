/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_10 ? var_4 : var_15);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= var_14;
        arr_3 [15] = (((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) << (((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : var_3)) - 29447))));
    }
    #pragma endscop
}
