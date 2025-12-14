/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (-32767 - 1);
        var_13 = (!1);
        var_14 = ((((arr_1 [i_0] [i_0]) ^ ((min((arr_1 [i_0] [i_0]), 1))))));
        arr_4 [i_0] |= ((1 ? ((var_10 ? 1 : (arr_1 [i_0] [i_0]))) : var_7));
    }

    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_15 += (max((arr_1 [i_1] [i_1]), ((1 ? 0 : 1))));
        var_16 = (arr_2 [i_1]);
        arr_7 [i_1] &= (max(32767, 65534));
        var_17 = (((min(((var_5 ? 33830 : 1)), ((min(1, (arr_6 [i_1] [i_1])))))) - 65535));
    }
    var_18 = var_2;
    #pragma endscop
}
