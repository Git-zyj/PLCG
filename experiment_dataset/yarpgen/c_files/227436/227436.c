/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((var_11 <= var_2), ((-(max(var_4, var_6))))));
    var_13 = var_7;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = ((~(~-var_6)));
        var_14 -= (~var_6);
        arr_3 [i_0] = (~var_4);
        var_15 += ((+(((arr_1 [i_0]) ? (arr_0 [i_0]) : -0))));
    }
    for (int i_1 = 4; i_1 < 17;i_1 += 1)
    {
        var_16 ^= 1;
        var_17 = ((-(((arr_5 [i_1 + 3] [i_1]) << (((arr_5 [i_1 - 2] [i_1]) - 70))))));
        arr_7 [4] = var_3;
        var_18 += ((-(arr_6 [i_1] [i_1])));
    }
    var_19 = (!var_4);
    #pragma endscop
}
