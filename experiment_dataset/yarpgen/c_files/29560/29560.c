/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_14 = (((min((arr_2 [i_0] [i_0]), (max((arr_1 [i_0] [9]), var_8))))) ? (arr_0 [i_0]) : ((((arr_2 [10] [i_0 - 2]) ? (arr_2 [i_0 + 4] [i_0 + 2]) : (arr_2 [i_0 - 1] [i_0 + 1])))));
        var_15 = (((((-(arr_1 [i_0] [i_0])))) & (((-7 ? 6 : -14)))));
    }
    #pragma endscop
}
