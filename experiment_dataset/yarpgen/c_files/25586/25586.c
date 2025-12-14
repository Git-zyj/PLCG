/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_13;
    var_15 = 4377;
    var_16 = (min(var_16, var_10));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_8))) ? (min((arr_0 [i_0]), (arr_1 [i_0]))) : (max(20956, (arr_0 [i_0])))));
        var_17 = (((max((arr_0 [i_0]), var_13))) ? (((arr_0 [i_0]) ? var_12 : (arr_0 [i_0]))) : (arr_0 [i_0]));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_1] = ((var_4 ? (arr_3 [i_1]) : (arr_1 [i_1])));
            var_18 = (max(var_18, ((((arr_0 [i_0]) >> (((arr_1 [i_1]) - 1308021687)))))));
            var_19 = (arr_3 [i_1]);
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_20 *= ((arr_6 [i_0] [i_2]) ? (arr_7 [i_0]) : ((-(arr_4 [i_2] [i_2]))));
            var_21 += ((245 ? 0 : (max((arr_3 [16]), 114))));
        }
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            var_22 ^= (((((~(((arr_9 [i_0] [4] [i_0]) ? 0 : 31007))))) ? (min((min(10890357666692412220, 11)), 96)) : (((-(((arr_7 [3]) ? 4380 : var_0)))))));
            var_23 *= ((!(arr_7 [i_3 + 1])));
            var_24 = 145;
            var_25 = (arr_9 [i_0] [i_3] [i_3]);
        }
        var_26 &= (min(((min(1, (arr_4 [i_0] [i_0])))), (((arr_8 [i_0]) ? var_4 : (arr_3 [8])))));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {
        var_27 ^= (((~245) ? (((arr_11 [2]) ? var_1 : (arr_11 [6]))) : (((arr_11 [14]) ? var_1 : (arr_11 [1])))));
        var_28 |= (((min((arr_7 [i_4]), (!var_13))) ? ((((-11393 * var_8) * (min(0, 1))))) : ((((max(var_2, var_1))) ? (arr_11 [12]) : (((arr_3 [0]) ? var_13 : 0))))));
        arr_12 [i_4] = (arr_1 [7]);
    }
    #pragma endscop
}
