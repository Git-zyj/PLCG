/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = ((((1 ? -20088 : -839065392)) & (((((1 ? 0 : 98)) <= ((((arr_2 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])))))))));
        var_13 = (max(var_13, (((-99 ? 99 : 8)))));
        arr_4 [i_0] = (((((((11315 ? (arr_1 [i_0] [i_0]) : (arr_2 [i_0]))) == var_11))) >> (var_6 + 1042309695020714293)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_9 [i_1] = (((((((arr_5 [i_1]) || (arr_8 [6] [i_1]))) && ((max(-1, (arr_1 [6] [2])))))) ? (((((min(1, var_0))) || (((var_1 ? (arr_2 [22]) : 40)))))) : (arr_1 [18] [i_1])));
        var_14 = (max(var_14, 4294967295));
        var_15 = (max(var_15, (((0 ? -25705 : -98)))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_16 = (max(((((40908 || (arr_7 [12]))) ? (arr_1 [i_2] [i_2]) : (-10145 || 0))), (arr_1 [i_2] [i_2])));
        arr_12 [i_2] |= var_6;
        arr_13 [i_2] [i_2] = (arr_11 [i_2]);
        var_17 = (((((((((arr_2 [i_2]) ? var_4 : (arr_2 [i_2])))) ? (((2619855189 ? (arr_5 [i_2]) : -815611128))) : (((arr_11 [i_2]) | var_6))))) ? 25045 : (min((((!(arr_7 [i_2])))), ((-99 ? 68 : -3585))))));
        var_18 = (min(var_18, (((((min((arr_6 [i_2]), (((arr_10 [i_2]) & var_9))))) ? ((((((arr_2 [i_2]) ? (arr_1 [i_2] [i_2]) : var_8))) ? (((arr_10 [i_2]) << (((arr_8 [i_2] [1]) - 236890861)))) : (arr_2 [i_2]))) : ((+((var_10 ? (arr_8 [i_2] [i_2]) : var_2)))))))));
    }
    var_19 = var_0;
    var_20 = var_8;
    var_21 = (0 * var_12);
    var_22 = (((min(var_0, var_10)) ^ 22487));
    #pragma endscop
}
