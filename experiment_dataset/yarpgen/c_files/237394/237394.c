/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (0 != 30532);
    var_15 = 0;
    var_16 = (max(var_16, ((((((((min(65535, var_13))) ? (var_2 & 65528) : ((var_3 ? var_11 : var_12))))) && var_13)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 ^= ((((max(var_12, (arr_1 [i_0] [i_0])))) ? (((max(var_12, var_10)) - (arr_0 [i_0] [i_0]))) : (((max((((arr_1 [i_0] [i_0]) < (arr_1 [13] [13]))), (arr_1 [i_0] [i_0])))))));
        arr_3 [i_0] [i_0] &= (min((arr_2 [i_0]), (min(1, var_7))));
        var_18 = (((((arr_0 [i_0] [i_0]) & (arr_0 [i_0] [i_0]))) | (arr_0 [i_0] [i_0])));
        arr_4 [10] = var_1;
        arr_5 [i_0] = (((2029606396 - var_6) - ((var_10 ? 12151612474737913396 : 65528))));
    }
    #pragma endscop
}
