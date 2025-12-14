/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (var_12 | 0)));
    var_16 = var_10;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 -= (((arr_0 [i_0] [i_0]) / (((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))));
        arr_4 [i_0] = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_7 [7] [16] = (arr_5 [i_1] [i_1]);
        var_18 ^= (arr_6 [i_1]);
        var_19 = var_10;
        var_20 = (min(((((arr_5 [i_1] [i_1]) || (arr_5 [i_1] [i_1])))), ((var_5 ? var_6 : (arr_5 [i_1] [i_1])))));
    }
    var_21 = (var_11 ? var_11 : var_3);
    #pragma endscop
}
