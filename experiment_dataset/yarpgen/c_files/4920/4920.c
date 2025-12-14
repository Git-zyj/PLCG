/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;
    var_20 = 166;

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_21 = (min(var_21, (((((var_16 && ((!(arr_3 [i_0]))))) ? (((arr_1 [14]) ? var_18 : (var_15 > var_16))) : (min((((arr_3 [20]) * var_6)), (arr_2 [6] [24]))))))));

        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_0] = (arr_1 [i_0]);
            var_22 = (min(var_22, ((((54 << 2) ? ((min((min((arr_2 [24] [24]), 64)), (min((arr_4 [24] [i_1]), (arr_0 [6])))))) : (177 | 160))))));
        }
        for (int i_2 = 1; i_2 < 24;i_2 += 1)
        {
            var_23 = ((-177 ? (arr_5 [18] [i_0] [i_0]) : (24 * var_3)));
            var_24 = min(245, 19);
            var_25 = (((((((254 ? 184 : (arr_5 [i_0] [i_0] [i_0])))) ? ((max((arr_5 [i_0] [i_0] [i_0]), (arr_3 [i_2])))) : ((var_17 ? var_17 : 6)))) < (!175)));
            var_26 = arr_5 [i_0] [i_0] [i_0];
            var_27 = ((((((((((arr_9 [i_2] [i_2] [18]) - var_4)) + 2147483647)) << (((arr_9 [i_0] [i_0] [i_0]) - 24))))) ? (arr_8 [i_0] [i_0] [i_2]) : (arr_4 [i_0] [i_2])));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_28 = (((((var_12 > (((arr_2 [i_0] [i_3]) - (arr_0 [i_0])))))) == (((arr_11 [i_3] [i_3] [i_3]) ? (arr_11 [i_0] [i_0] [i_0]) : (arr_2 [i_0] [17])))));
            var_29 = (((((((arr_5 [i_0] [i_3] [i_0]) - (arr_12 [i_0]))) & ((202 | (arr_2 [i_0] [i_3]))))) >= (arr_10 [i_0] [i_0])));
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            arr_17 [i_0] [i_0] [i_0] = arr_11 [i_0] [i_0] [i_0];
            var_30 += ((((((((arr_3 [11]) ? var_18 : (arr_5 [i_0] [12] [6]))) > (((arr_12 [8]) ? (arr_7 [i_0]) : (arr_4 [0] [8])))))) / (((((var_2 ? (arr_4 [12] [12]) : var_13))) ? (101 | var_6) : (((arr_8 [i_0] [11] [i_4]) | (arr_16 [i_0] [i_0] [i_0])))))));
            var_31 = arr_4 [i_0] [7];
            var_32 *= (((((arr_14 [i_0]) == (arr_11 [i_0] [i_0] [i_4]))) ? (arr_8 [i_0] [2] [i_4]) : ((var_18 ? (arr_10 [i_0] [i_4]) : (arr_13 [i_0] [i_4])))));
        }
        arr_18 [i_0] = (((arr_2 [i_0] [i_0]) ? (((arr_4 [i_0] [i_0]) ? ((~(arr_11 [i_0] [i_0] [i_0]))) : ((var_0 ? 15 : var_2)))) : ((((min((arr_15 [i_0] [i_0]), (arr_14 [i_0])))) | ((248 ? (arr_15 [i_0] [i_0]) : var_13))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
    {
        var_33 ^= ((-((6 - (arr_10 [i_5] [i_5])))));
        var_34 = ((15 ? 236 : 192));
    }
    var_35 = var_13;
    #pragma endscop
}
