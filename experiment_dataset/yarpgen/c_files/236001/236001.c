/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (((((var_7 ? (((((arr_2 [i_0]) + 2147483647)) >> (var_4 - 77))) : (arr_0 [i_0])))) ? 4294967276 : (arr_2 [i_0])));
        arr_4 [i_0] = (min(((var_14 ? var_9 : (arr_2 [i_0]))), (arr_2 [i_0])));
        arr_5 [i_0] [i_0] = ((((((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (min(var_8, (arr_2 [i_0])))))) ? (((arr_1 [i_0] [i_0]) ? var_5 : (min((arr_2 [i_0]), var_11)))) : var_6));
    }
    var_15 = (~var_0);
    var_16 = (min(var_10, var_12));
    #pragma endscop
}
