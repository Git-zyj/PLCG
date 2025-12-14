/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [15] = (((min(((((arr_2 [i_0]) == 4))), (((arr_1 [1]) ? 49152 : (arr_0 [i_0]))))) >= (((arr_0 [i_0]) ? (var_1 & 9687) : (((49733 != (arr_1 [i_0]))))))));
        var_16 = var_2;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_17 = ((((min(((min(var_5, 65535))), (55828 % 49729)))) ? 49741 : ((min((arr_1 [i_1]), (arr_1 [i_1]))))));
        arr_6 [i_1] = (min(var_1, (((arr_1 [i_1]) ? (arr_1 [i_1]) : (arr_2 [i_1])))));
        var_18 = (min((((arr_0 [i_1]) ? (arr_0 [i_1]) : (arr_0 [i_1]))), (arr_1 [i_1])));
        var_19 = ((((-(arr_1 [i_1]))) % ((var_7 ? var_11 : (arr_1 [i_1])))));
    }
    var_20 = var_10;
    #pragma endscop
}
