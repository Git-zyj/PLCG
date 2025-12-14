/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~var_13);

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_15 = (((+(((arr_1 [i_0 + 1] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_1 [i_0] [i_0 - 2]))))));
        arr_3 [i_0] = var_3;
        var_16 = (((arr_1 [i_0] [i_0]) ? (((((arr_1 [i_0 - 1] [i_0]) - (arr_2 [i_0] [i_0]))) - ((((arr_0 [1]) + var_7))))) : var_0));
    }
    #pragma endscop
}
