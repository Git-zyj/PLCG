/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_13 = (((((arr_1 [i_0]) ? (arr_2 [1] [i_0]) : (var_3 % var_11))) % ((((((((arr_2 [8] [1]) >> (((arr_1 [i_0]) + 12488))))) || (arr_3 [i_0])))))));
        var_14 = var_9;
    }
    var_15 = (~(var_4 & var_10));
    #pragma endscop
}
