/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    var_19 = var_16;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 = (((((arr_3 [i_0] [i_0]) ? var_3 : (arr_3 [5] [i_0])))) ? (((arr_3 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : 827884045)) : (min((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0]))));
        var_21 = (max(1401845603, 10860998453224858946));
    }
    var_22 = 1;
    #pragma endscop
}
