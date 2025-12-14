/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 = ((((min(194, ((var_4 ? (arr_0 [i_0] [i_0]) : var_1))))) ? ((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [0]) : (arr_1 [22] [i_0])))) : (((~(arr_0 [i_0] [i_0]))))));
        arr_2 [i_0] = ((+(((arr_1 [i_0] [9]) - (((-(arr_0 [i_0] [i_0]))))))));
    }
    var_14 = (max((((536870911 > (min(var_1, var_6))))), ((((max(var_5, var_3))) ? (var_2 <= 536870926) : (~var_4)))));
    #pragma endscop
}
