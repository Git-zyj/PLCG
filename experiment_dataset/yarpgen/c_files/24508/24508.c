/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = ((((((arr_2 [i_0]) ? 1 : (arr_2 [i_0])))) ? (((((max(0, 3))) || 1))) : ((((var_0 ? (arr_2 [6]) : (arr_2 [i_0])))))));
        var_11 = ((((((arr_1 [i_0]) ? (arr_0 [i_0]) : var_10))) ? ((((arr_1 [i_0]) || (((~(arr_1 [i_0]))))))) : (var_2 || var_8)));
    }
    var_12 |= 32704;
    var_13 = var_3;
    var_14 = (((((1 || var_5) || (~var_3))) || var_5));
    #pragma endscop
}
