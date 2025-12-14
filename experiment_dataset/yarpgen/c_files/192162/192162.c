/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 52520;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 = (((arr_0 [i_0]) << var_8));
        arr_2 [2] = (!65535);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] |= ((-(arr_3 [i_1])));
        var_14 = (((52516 + var_9) / var_8));
        arr_6 [i_1] = ((~(((arr_4 [i_1]) ? (arr_3 [i_1]) : 12991))));
        arr_7 [i_1] [i_1] = (((((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_3 [2])))) ? (arr_3 [i_1]) : (arr_3 [i_1]));
        var_15 = (max(var_15, var_8));
    }
    var_16 = ((var_4 || (1 || 13015)));

    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_17 = ((+((var_7 ? ((var_3 ? (arr_9 [i_2]) : (arr_8 [i_2] [i_2]))) : (((arr_9 [i_2]) / (arr_8 [i_2] [i_2])))))));

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_18 = (((((((0 ? 12999 : (arr_11 [i_2] [i_2])))) ? var_2 : ((((((arr_4 [i_2]) + 2147483647)) << (var_10 - 372691364217102060))))))) ? (((max((arr_4 [i_2]), 18446744073709551590)) & 2380745043)) : ((((((arr_4 [i_2]) ? (arr_12 [0]) : (arr_4 [i_3])))))));
            var_19 = ((1 ? 6118807754192565768 : 42));
            var_20 = (((13016 ? -12989 : 1)));
            var_21 = 1;
        }
    }
    #pragma endscop
}
