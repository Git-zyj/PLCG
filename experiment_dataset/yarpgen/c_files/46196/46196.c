/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 3;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((2270606987831120292 ? 3 : 0)));
        var_19 = ((-3 ? -3 : (max(-22, ((var_8 ? (arr_0 [i_0]) : var_3))))));
    }
    #pragma endscop
}
