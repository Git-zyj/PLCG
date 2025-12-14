/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_0 [i_0]) / (arr_2 [i_0])));
        var_12 = (((var_0 ? var_10 : (arr_0 [i_0]))));
        var_13 = ((var_5 ? var_1 : var_5));
        arr_4 [10] = ((~(var_6 ^ var_0)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_14 = (min(var_14, (((~(arr_6 [i_1]))))));

        for (int i_2 = 4; i_2 < 24;i_2 += 1)
        {
            arr_9 [i_1] [i_1] = (10579331925827858405 | -9199117312716610370);
            arr_10 [i_2] [i_2] [i_2] &= (-543459523393333360 | -694767375);
        }
        var_15 += (arr_8 [13]);
        var_16 = (63123 | -1);
        var_17 *= ((!(var_9 || var_3)));
    }
    for (int i_3 = 2; i_3 < 13;i_3 += 1)
    {
        arr_15 [i_3] |= ((63114 / ((63123 ? 387914778 : (((-2147483647 - 1) | (-127 - 1)))))));
        arr_16 [i_3 + 2] [i_3] = (((var_2 > var_5) * (((((var_0 ? var_2 : var_6))) ? (arr_1 [i_3]) : var_2))));
        var_18 = (min(var_18, var_5));
    }
    for (int i_4 = 3; i_4 < 13;i_4 += 1)
    {
        var_19 = ((0 / (-9223372036854775807 - 1)));
        var_20 = (min(var_20, (((((-(!var_9))) >> ((((arr_7 [i_4 + 1] [i_4 + 1]) || var_8))))))));
    }

    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        arr_21 [i_5] [i_5] = max(0, -34346186);
        var_21 ^= (max((((arr_6 [i_5]) / var_11)), (4294967288 / -5852185951369400410)));
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 11;i_6 += 1)
    {
        arr_24 [i_6] = (var_0 ? var_0 : ((((arr_13 [6]) > var_2))));
        arr_25 [i_6] [i_6] = (((((-127 - 1) - 60005))) + (var_2 | var_8));
    }
    #pragma endscop
}
