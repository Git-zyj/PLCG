/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = (arr_0 [i_0]);
        var_19 = (arr_0 [i_0]);
        var_20 += ((((((arr_1 [i_0]) ? -1 : (arr_0 [i_0])))) ? ((142 ? (arr_0 [i_0]) : var_10)) : ((((max(var_2, (arr_1 [i_0])))) ? (min((arr_0 [i_0]), (arr_0 [i_0]))) : (arr_0 [i_0])))));
        var_21 = (arr_0 [i_0]);
    }
    var_22 = (min(var_22, (!var_17)));
    #pragma endscop
}
