/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (var_6 > 25900)));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = max(((var_7 ? (arr_1 [i_0]) : (arr_1 [i_0]))), (((arr_1 [i_0]) / (arr_1 [i_0]))));
        var_18 = (max(var_18, ((((((((min(var_8, 112))) ? (arr_0 [7] [i_0]) : ((4294967295 | (arr_2 [i_0])))))) % 14233143447006523279)))));
        arr_3 [i_0] [i_0] = (((arr_2 [i_0]) ? (min(var_9, (arr_2 [i_0]))) : (min((arr_2 [i_0]), 206))));
        arr_4 [i_0] = ((2062189808 ? (var_3 ^ 39) : (((((((arr_1 [6]) && var_5))) << (((arr_0 [10] [i_0]) + 12543)))))));
    }
    #pragma endscop
}
