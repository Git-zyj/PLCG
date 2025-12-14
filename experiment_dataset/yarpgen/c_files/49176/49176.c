/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_2 [i_0]) ? (((arr_1 [i_0]) ? var_5 : -53)) : (((arr_0 [i_0]) ? (arr_3 [i_0]) : (arr_0 [i_0])))));
        var_16 = (arr_2 [i_0]);
        var_17 = (max(var_17, ((((arr_0 [i_0]) ? (arr_1 [i_0]) : var_10)))));
        var_18 = (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_19 |= (((arr_8 [i_0]) * (arr_8 [i_0])));
            var_20 = -107;
            var_21 = (arr_1 [i_0]);
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {
            var_22 = arr_0 [12];
            var_23 = ((+(((arr_8 [i_0]) ? (arr_2 [3]) : (arr_5 [i_0] [i_0] [i_2])))));
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_24 = ((+(((arr_2 [i_0]) ^ (arr_10 [i_0] [i_0])))));
            var_25 = 72;
            var_26 = (arr_6 [i_0] [i_0]);
            var_27 = (((arr_6 [i_0] [i_3]) || (arr_6 [i_0] [i_3])));
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_28 = ((((~(arr_13 [i_4]))) << (((arr_14 [i_4]) + 107))));
        var_29 = -76;
        var_30 = (((arr_13 [15]) ? (arr_13 [i_4]) : (arr_13 [i_4])));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_31 = (min(var_31, (((~(min(((min((arr_17 [i_5]), var_1))), (~78))))))));
        var_32 = ((-(arr_17 [i_5])));
    }
    var_33 ^= 75;
    #pragma endscop
}
