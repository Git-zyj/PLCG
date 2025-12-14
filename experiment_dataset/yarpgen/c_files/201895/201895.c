/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~var_0);
    var_15 *= ((!((!(((var_9 ? 4259005352 : var_10)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 *= var_7;
        arr_3 [i_0] = ((var_8 % (arr_0 [i_0] [i_0])));
        var_17 &= (((arr_1 [i_0] [i_0]) ? 26 : (arr_2 [i_0])));
    }
    #pragma endscop
}
