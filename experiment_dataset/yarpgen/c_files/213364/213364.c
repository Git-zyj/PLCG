/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;
    var_20 = 1;
    var_21 = 50331648;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = (arr_0 [i_0 + 1]);
        var_22 = (arr_0 [i_0]);
        arr_5 [i_0] = 65505;
        var_23 = (max(var_23, ((((arr_1 [i_0]) ? (arr_3 [i_0 + 1] [i_0]) : (((arr_0 [1]) ? -4321689140648793074 : var_13)))))));
    }
    #pragma endscop
}
