/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = (((((max((arr_0 [i_0] [i_0]), (arr_2 [i_0]))) - (arr_2 [i_0]))) <= (arr_2 [i_0])));
        arr_5 [i_0] [i_0] = ((+(((arr_0 [i_0 - 1] [i_0 - 2]) ? (arr_0 [i_0 - 1] [i_0 + 1]) : var_9))));
        var_13 = (max(var_13, ((((!402653184) * (((!(arr_0 [i_0] [8])))))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_14 = 8283267777813020255;
        arr_9 [i_1] = ((var_1 | (10163476295896531347 & 4044595938568948944)));
        arr_10 [i_1] [i_1] = (arr_2 [i_1]);
    }
    var_15 = var_0;
    var_16 = var_11;
    var_17 = (((~(~var_5))) & (((min(1404710882, var_9)) >> (var_8 - 1119))));
    #pragma endscop
}
