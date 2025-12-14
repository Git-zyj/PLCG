/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0 - 1] [1] &= ((~(arr_1 [i_0 + 1] [i_0 + 2])));
        var_16 -= (26452 == 0);
        var_17 = (arr_0 [i_0 + 2]);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_5 [i_1] = (((((!(arr_4 [i_1] [i_1])))) <= (arr_1 [i_1] [i_1])));
        var_18 = ((((max(-1377333883, 6920614966699958902))) ? (max((arr_4 [i_1] [i_1]), 11526129107009592697)) : (arr_4 [i_1] [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_19 *= (((arr_1 [i_2] [i_2]) ? -14 : ((((-9223372036854775807 - 1) || var_3)))));
        arr_10 [i_2] = ((11526129107009592697 * 48) ? 0 : var_1);

        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            var_20 = ((var_1 ? var_7 : 0));
            var_21 = 207;
            arr_13 [i_2] [1] = ((~(arr_7 [i_2])));
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            arr_16 [i_2] [i_2] [i_2] &= (+-1010708332908427145);
            var_22 = (min(var_22, (((-20 ? (arr_9 [i_2]) : -4118058814994949158)))));
            arr_17 [i_4] = ((0 >> (((arr_3 [i_2]) - 58))));
            arr_18 [i_2] [i_2] = 4;
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_23 *= 1834353343;
            var_24 = (((arr_20 [i_2]) || var_11));
        }
        var_25 ^= var_8;
    }
    var_26 = var_4;
    #pragma endscop
}
