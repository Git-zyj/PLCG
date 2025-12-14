/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_10 + 2147483647) << ((((max(27121, (41723 && var_9)))) - 27121))));
    var_15 = var_3;
    var_16 = var_8;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = ((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))));
        arr_2 [i_0] [i_0] = ((((((arr_1 [i_0]) ? (!1) : -6116329839725009570))) ? (max(var_2, ((~(arr_0 [i_0]))))) : (arr_1 [i_0])));
        var_18 = (~1);
        arr_3 [12] &= var_10;
        var_19 = ((((max(var_4, (-127 - 1)))) % (((~(arr_1 [i_0]))))));
    }
    #pragma endscop
}
