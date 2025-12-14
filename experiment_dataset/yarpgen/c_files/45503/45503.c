/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    var_13 = (max(255, (((0 | 8) ? 1071644672 : var_1))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((((-2075860632 > (arr_1 [i_0]))) ? (((arr_0 [i_0]) ? (arr_1 [i_0]) : var_9)) : var_2))) ? var_2 : ((((((arr_0 [19]) | (arr_0 [i_0]))) > (arr_0 [22]))))));
        arr_3 [i_0] = ((-(((arr_1 [i_0]) / var_3))));
        var_14 = ((19 | 244) | var_0);
        arr_4 [i_0] [i_0] = 112;
    }
    #pragma endscop
}
