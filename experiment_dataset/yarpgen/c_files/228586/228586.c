/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_5, var_7));
    var_13 = var_2;
    var_14 = ((var_6 ? ((0 ? 13118550417271494724 : 102)) : ((min(((min(var_0, var_8))), var_6)))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_15 = ((((max(238, 124))) ? (((arr_1 [0] [i_0]) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 + 1]))) : (arr_1 [i_0 - 1] [i_0])));
        var_16 += (((((min((arr_1 [i_0 + 2] [10]), (arr_1 [i_0] [2])))) ? (arr_2 [i_0 + 2]) : (min(var_2, (arr_2 [i_0]))))));
        var_17 = (arr_2 [i_0 + 1]);
    }
    #pragma endscop
}
