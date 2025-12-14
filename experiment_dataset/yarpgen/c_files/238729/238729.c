/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 6;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_19 = ((((((752 && 816129324) ? (-127 - 1) : ((((-127 - 1) <= 119)))))) ? (max((var_13 && 1799990107), ((122 ? (arr_0 [i_0]) : (arr_2 [i_0 - 1] [i_0]))))) : ((123 - (((!(arr_1 [i_0] [i_0]))))))));
        var_20 = (max(-var_6, -107));
        arr_4 [i_0] [i_0] = 68;
    }
    var_21 = (max(var_21, ((((((max(119, 88))) ? (max(8010778720678200344, 124)) : var_4))))));
    #pragma endscop
}
