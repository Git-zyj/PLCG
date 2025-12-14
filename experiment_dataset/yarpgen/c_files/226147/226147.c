/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -3546054830900156866;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = ((((3546054830900156865 - (arr_1 [i_0]))) * (((max(var_7, var_0)) * (arr_1 [i_0])))));
        var_14 = (arr_1 [i_0]);
    }
    var_15 = -var_5;
    #pragma endscop
}
