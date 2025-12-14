/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_4));
    var_20 ^= ((((((!(var_4 % var_18))))) * var_12));
    var_21 = ((var_18 <= ((((64 & 1801696329) > (var_16 || var_3))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_22 = (arr_2 [i_0] [i_0]);
        var_23 = (((((arr_1 [i_0]) ? (((((arr_1 [i_0]) == (arr_0 [1]))))) : (((arr_2 [4] [i_0]) ^ 970053331)))) >= -1801696330));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_6 [2] = ((((((arr_2 [i_1] [i_1]) << (((arr_3 [i_1]) - 111400053))))) ? (((((arr_0 [i_1]) && ((((arr_0 [i_1]) | 231))))))) : (((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_0 [i_1])))));
        arr_7 [i_1] = ((((((arr_1 [i_1]) > (arr_1 [i_1])))) << (((arr_1 [i_1]) - (arr_1 [i_1])))));
        arr_8 [7] = (((((((arr_1 [i_1]) + 2147483647)) << (((arr_3 [i_1]) - 111400057)))) << ((((arr_3 [i_1]) != (arr_3 [i_1]))))));
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_24 = ((((((~(arr_9 [i_2 - 1]))) == (min((arr_2 [i_2 - 1] [i_2 - 1]), (arr_9 [i_2]))))) ? (((((36299 ? (arr_2 [i_2] [i_2]) : (arr_5 [i_2 - 1])))) ? (((arr_0 [i_2]) ? (arr_0 [i_2]) : 95)) : (arr_2 [i_2] [i_2]))) : (((~(arr_3 [i_2 - 1]))))));
        var_25 ^= (max((arr_1 [i_2 - 1]), ((((arr_1 [i_2]) * (arr_9 [i_2]))))));
        arr_11 [i_2] = ((!(24 * 60215)));
        arr_12 [i_2] = (max((((((60833 ? 124 : 23421))) ? -1801696329 : (1801696325 || -4443))), -1801696329));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_16 [i_3] [i_3] = (((arr_14 [i_3]) & (arr_14 [i_3])));
        arr_17 [i_3] = (((arr_14 [i_3]) ? (arr_14 [i_3]) : (arr_14 [i_3])));
    }
    var_26 = ((!((((((var_13 ? var_6 : var_15))) ? ((var_5 ? 1071058932 : var_12)) : (((var_4 ? var_4 : var_14))))))));
    #pragma endscop
}
