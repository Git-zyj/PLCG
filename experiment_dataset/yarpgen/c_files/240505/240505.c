/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((~-1583296173) ? var_4 : ((max(var_7, 19442))))) + var_3));
    var_11 = (max(var_11, 1583296189));
    var_12 = (~-1);

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_13 = (arr_1 [i_0]);
        arr_4 [i_0] = var_6;
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {
        var_14 &= (((((-2053005701 ? var_0 : (arr_7 [i_1 + 1])))) ? (((max((arr_7 [i_1 + 1]), var_0)))) : (arr_6 [i_1 - 1])));
        var_15 = arr_5 [i_1];
    }
    #pragma endscop
}
