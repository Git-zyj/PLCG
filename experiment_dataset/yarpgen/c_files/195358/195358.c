/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_15 = ((~(~33554432)));
        arr_2 [i_0] [i_0 - 1] = ((~(min(((1 ? 33554432 : 157)), 1))));
        var_16 = (33554411 && 547653485);
        arr_3 [i_0] = (~4261412884);
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        var_17 = ((!((max(0, 16)))));
        var_18 ^= var_10;
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_19 = ((max((arr_6 [i_2]), (~-55))) <= 12);
        var_20 = var_7;
        var_21 = (min((arr_8 [i_2] [i_2]), (((!(arr_6 [i_2]))))));
    }
    var_22 = 1247901670;
    var_23 = var_0;
    var_24 = var_12;
    #pragma endscop
}
