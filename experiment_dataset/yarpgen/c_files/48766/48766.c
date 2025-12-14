/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= 16;
    var_13 = (!1);
    var_14 = (max(var_14, ((min(var_7, 1)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = (max(var_15, (((((min(-24458, 2147483636))) ? ((((~(arr_1 [9]))))) : var_4)))));
        var_16 = (min(((((arr_1 [i_0]) - (arr_1 [i_0])))), ((max(1, (arr_0 [i_0] [i_0]))))));
        arr_2 [i_0] [i_0] &= (max((arr_1 [i_0]), 1));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_17 = 113;
        var_18 *= 26901;
        var_19 = -24458;
    }
    #pragma endscop
}
