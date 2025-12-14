/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((max((((584948450 ? var_8 : -1502886646))), var_10)) + 222951560);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (((804786521 - 2147483637) ? (((arr_1 [i_0]) / (arr_1 [i_0]))) : (arr_1 [i_0])));
        var_13 ^= (max(((((min(-1613060777, 2388822087))) ? (((arr_1 [8]) ^ var_0)) : (arr_1 [0]))), 13070));
        arr_2 [i_0] = (((((~-8319395102099256904) / ((min(628342347, var_7))))) << (((min(-107, 245070168)) - 245070164))));
        var_14 = min(((((arr_0 [i_0]) || (-32767 - 1)))), (max((arr_0 [i_0]), 27762)));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_5 [4] = 1;
        arr_6 [i_1] [i_1] = ((((((arr_0 [i_1]) + (arr_3 [i_1] [i_1])))) ? ((var_7 ? (arr_4 [i_1]) : -7)) : (arr_3 [i_1] [i_1])));
    }
    #pragma endscop
}
