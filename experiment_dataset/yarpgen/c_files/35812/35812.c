/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (((~(arr_1 [i_0]))) ^ var_10);
        var_11 = (min(var_11, ((((229 >= 2670429525) / (arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        var_12 += var_6;
        arr_5 [i_1] [i_1] = (((var_10 + 9223372036854775807) >> (((arr_3 [1] [7]) - 1716172196))));
        arr_6 [1] = 18446744073709551601;
        var_13 = 1776258208;
    }
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        arr_10 [7] = (max((arr_7 [i_2 - 2] [i_2 + 1]), ((1 ? 10 : 3965))));
        arr_11 [i_2] = ((var_5 ? ((max(63, 18446744073709551615))) : ((min((arr_0 [i_2 + 1]), ((-64 ? -2 : 2173280719)))))));
    }
    var_14 &= ((var_1 >> (var_6 - 2641458931)));
    var_15 = 2173280721;
    #pragma endscop
}
