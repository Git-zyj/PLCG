/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] = ((((((10278747860569730500 * 248) / (((var_1 ? (arr_1 [i_0]) : (arr_3 [15]))))))) ? (((((!(arr_1 [20])))))) : 10278747860569730495));
        arr_5 [i_0] = ((-(arr_0 [i_0] [i_0])));
        var_10 = (!var_7);
        var_11 = (max(var_11, ((((((arr_0 [3] [i_0]) ? (((~(arr_1 [i_0])))) : (arr_2 [i_0] [i_0]))) % (((124 ? (arr_0 [i_0] [i_0]) : (max(var_6, -12530))))))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_12 = var_1;
        arr_10 [10] |= -9223372036854775792;
    }
    var_13 ^= ((var_1 ? var_5 : 14));
    var_14 |= (((!8167996213139821113) << (var_3 - 60399)));
    #pragma endscop
}
