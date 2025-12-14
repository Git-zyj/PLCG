/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 14802073712957899762;

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_2 [8] = 14802073712957899755;
        var_11 -= (arr_0 [i_0]);
    }
    var_12 *= var_2;
    var_13 = (max(var_5, var_1));

    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_5 [i_1] = -60;
        arr_6 [7] [i_1] = (((((~(arr_3 [i_1] [i_1])))) & (min(8796092891136, (max(3644670360751651848, 14802073712957899762))))));
        var_14 = ((var_3 ? (((min((arr_4 [i_1]), (arr_4 [i_1]))))) : var_4));
    }
    #pragma endscop
}
