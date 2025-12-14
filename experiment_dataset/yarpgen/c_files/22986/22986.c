/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = (min(var_16, (arr_0 [i_0])));
        var_17 = (arr_0 [0]);
        var_18 |= (~var_12);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = (((arr_2 [i_1]) ^ 0));
        var_19 = (var_13 && var_0);
    }
    var_20 += ((-(max((~var_5), (max(var_14, 0))))));

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_21 = ((((4080093146 ? 9729561012179205480 : 77)) << ((((min(14593, 126))) - 100))));
        arr_8 [i_2] = ((-((~(arr_3 [19])))));
        var_22 = var_13;
        arr_9 [2] = (min(var_5, ((((((arr_2 [i_2]) << (var_6 - 8071476110360927237)))) ? (~4) : (arr_2 [i_2])))));
        var_23 = (((((-(~4294967295)))) == var_5));
    }
    for (int i_3 = 4; i_3 < 22;i_3 += 1)
    {
        arr_13 [0] [i_3] = (((((arr_11 [12]) ? (((var_14 > (arr_11 [i_3])))) : (arr_12 [i_3 - 1])))) && ((min((var_0 < var_2), (arr_10 [12])))));
        arr_14 [17] = ((~(arr_10 [i_3 - 4])));
        arr_15 [i_3] [i_3] = var_2;
        var_24 = var_8;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        arr_19 [i_4] [i_4] = ((!(arr_3 [i_4])));
        var_25 = (min(var_25, (((!(arr_5 [i_4]))))));
        var_26 = 524287;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        arr_22 [i_5] [i_5] = 0;
        var_27 = (((((63 ? var_13 : var_14))) ? (((arr_3 [i_5]) ? var_0 : var_9)) : var_12));
    }
    #pragma endscop
}
