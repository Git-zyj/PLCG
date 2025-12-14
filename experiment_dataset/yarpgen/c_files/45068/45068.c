/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((-(((var_5 & var_3) ? ((max(var_8, 42635))) : 22900)))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_16 = (((((-102 ? var_9 : var_14))) ? (~var_9) : (((46925 ? -26 : 118)))));
        arr_3 [i_0] = 28;
        var_17 ^= var_0;
        arr_4 [i_0] [i_0] = ((-(arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_18 = (((arr_0 [i_1]) ? var_11 : var_13));
        var_19 = var_8;

        for (int i_2 = 2; i_2 < 10;i_2 += 1) /* same iter space */
        {
            var_20 ^= ((((((arr_6 [5]) ? 22900 : 1))) ? ((-28 ? 28 : var_7)) : (arr_0 [i_2])));
            var_21 = (((arr_2 [i_2]) ? var_13 : ((16383 ? var_4 : 815276444))));
        }
        for (int i_3 = 2; i_3 < 10;i_3 += 1) /* same iter space */
        {
            arr_14 [i_1] [i_3] [i_3] = var_1;
            var_22 -= (arr_12 [i_3 - 2]);
        }
        arr_15 [i_1] = (((arr_7 [i_1] [i_1]) ? (arr_7 [i_1] [i_1]) : (arr_7 [i_1] [i_1])));
        var_23 = (((arr_6 [1]) ? ((var_9 % (arr_7 [i_1] [i_1]))) : (arr_0 [i_1])));
    }
    for (int i_4 = 2; i_4 < 8;i_4 += 1)
    {
        var_24 = ((var_10 == (((min((arr_2 [i_4]), ((((arr_9 [i_4] [i_4]) || (arr_6 [6]))))))))));
        var_25 *= ((((((arr_12 [i_4 - 1]) ? (arr_12 [i_4 - 1]) : (arr_12 [i_4 - 2])))) ? ((-46 ? (arr_9 [9] [i_4 - 2]) : var_6)) : (arr_9 [i_4 + 1] [i_4 - 2])));
        var_26 ^= ((((((max((arr_11 [i_4] [3] [i_4]), (arr_6 [2])))) ? ((4 ? var_12 : var_12)) : ((((arr_2 [i_4]) ? -815276444 : 56836))))) | var_4));
    }
    #pragma endscop
}
