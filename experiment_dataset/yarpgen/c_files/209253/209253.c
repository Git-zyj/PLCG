/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_2 ? ((((max(var_2, var_8))) ? (var_3 % -4763) : (var_2 * var_1))) : var_12);

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_14 = (max(var_14, ((((((((2147483644 ? 1646323532 : -1))) ? (70 ^ var_12) : 1646323532))) ? (((((~(arr_0 [i_0])))) ? (((arr_1 [i_0]) ? (arr_0 [3]) : 1132072593)) : ((-1 ? (arr_1 [21]) : var_12)))) : (min(((9608951534634971666 ? 1 : var_10)), ((14889258494273176722 ? var_2 : var_3))))))));
        var_15 -= ((((((min(1097364144128, (arr_1 [i_0])))) ? (((arr_1 [19]) ? (arr_0 [20]) : (arr_0 [i_0]))) : (((arr_0 [i_0]) ? (arr_1 [i_0]) : -1262036028))))) ? ((+((var_12 ? (arr_0 [i_0]) : 1)))) : ((min((arr_0 [i_0 - 1]), 0))));
        arr_2 [8] = (((arr_0 [1]) ? ((((min(var_3, -11))) ? ((((arr_0 [9]) ? var_9 : (arr_1 [i_0])))) : (min((arr_0 [i_0]), 4274360995119556050)))) : (((((var_3 ? var_10 : (arr_1 [i_0]))) ^ (arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_16 = (max(var_16, (((+(((arr_0 [i_1]) ? (arr_4 [10]) : 1972072206572550481)))))));
        arr_5 [i_1] [i_1] = (var_12 > var_4);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_17 = ((((((arr_4 [i_2]) - (arr_3 [0] [1])))) ? (arr_0 [2]) : (arr_1 [i_2])));
        arr_8 [3] [3] = (((((arr_6 [i_2]) ? (arr_1 [i_2]) : var_8)) >= (arr_0 [i_2])));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        var_18 = ((+((+(((arr_1 [6]) & (arr_6 [1])))))));
        arr_11 [i_3] [i_3] = (max(((((((arr_1 [9]) ? var_8 : (arr_3 [14] [14])))) ? (max(var_8, (arr_10 [i_3]))) : ((((arr_6 [i_3]) + var_7))))), (((-(max((arr_9 [6]), -1646323515)))))));
        arr_12 [i_3] = (((((+(min((arr_6 [i_3]), -1552298818))))) ? ((min(0, (arr_9 [i_3])))) : 55507));
    }
    #pragma endscop
}
