/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] |= (max((max((((var_8 ? (arr_0 [i_0]) : (arr_1 [i_0])))), (min((arr_2 [i_0] [i_0]), var_10)))), ((-(max(32767, var_10))))));
        var_14 = (arr_2 [i_0] [i_0]);
        var_15 *= (((~2169299442) ? (((((min(var_9, (arr_1 [i_0])))) ? (arr_0 [i_0]) : (((min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))))))) : (((-(arr_2 [i_0] [i_0]))))));
        var_16 *= (((((~(arr_1 [i_0])))) ? (max((arr_1 [i_0]), (arr_1 [i_0]))) : (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
    }
    var_17 = var_9;
    var_18 = var_12;
    #pragma endscop
}
