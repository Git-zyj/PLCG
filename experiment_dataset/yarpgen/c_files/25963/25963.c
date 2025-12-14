/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_3, ((-((var_16 ? 0 : var_17))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_19 = (arr_2 [i_0 + 1]);
        arr_4 [i_0] [i_0] = (~0);
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_20 += ((~((-(!var_0)))));
        var_21 = (-((((((arr_1 [i_1] [15]) + -15)) < (((121 ? -118 : (arr_6 [i_1]))))))));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 8;i_2 += 1)
    {
        var_22 = 118;
        var_23 ^= (arr_3 [i_2 - 1]);
        var_24 = ((117 && ((9 != (arr_6 [i_2])))));
    }
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = ((min((arr_10 [i_3] [i_3 + 1]), var_17)));
        arr_13 [i_3] = (min((arr_2 [i_3]), -1));
    }
    #pragma endscop
}
