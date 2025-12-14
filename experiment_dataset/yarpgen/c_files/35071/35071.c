/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (((((~(var_4 | var_0)))) ? -5302673684838671630 : ((((0 ? -30112 : var_5)) ^ (arr_0 [i_0])))));
        var_13 = (max(var_13, (arr_1 [22])));
        var_14 -= (((min(var_4, ((-(arr_0 [2])))))) ? (var_12 && 10899153384099297650) : ((122 ? (var_10 || 1) : (96 > -87))));
        arr_3 [i_0] = (min(((((arr_0 [i_0]) ? ((min(20, 14433))) : (arr_0 [i_0])))), (min((((-(arr_0 [i_0])))), (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] = ((((min(((((arr_5 [i_1]) + (arr_5 [i_1])))), (min(65535, (arr_1 [0])))))) ? (((((-(arr_0 [0])))) ? ((-(arr_5 [i_1]))) : (arr_5 [i_1]))) : ((var_5 ? (arr_0 [12]) : (arr_4 [i_1])))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_15 = ((((((arr_0 [i_2]) - var_10))) ? (arr_0 [i_2]) : (((var_2 || (arr_4 [i_1]))))));
            arr_10 [i_1] [i_2] = (((arr_9 [i_1] [i_1]) >= (arr_9 [i_2] [i_1])));
            var_16 = (var_8 ? (arr_1 [i_2]) : (arr_4 [i_1]));
            var_17 -= ((var_9 - (arr_1 [i_2])));
            var_18 = (arr_0 [i_2]);
        }
        arr_11 [i_1] = var_5;
        var_19 = (((((arr_5 [i_1]) ? (arr_8 [i_1]) : (arr_8 [i_1]))) - ((((-(arr_4 [i_1]))) / 78))));
    }
    var_20 = min((var_2 | -97), ((var_2 ? (min(var_1, -4276214392673761023)) : -var_4)));
    var_21 |= var_10;
    var_22 = (min(-4096, 96));
    var_23 = (min(var_10, var_11));
    #pragma endscop
}
