/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = (((((var_12 | var_13) == (arr_0 [i_0]))) ? ((((8 ? 39 : 0)))) : ((((var_1 ? (arr_0 [i_0]) : var_11)) >> (((arr_3 [2] [i_1]) - 19309))))));
                var_18 = ((((min(((((arr_3 [i_0] [i_0]) != (arr_5 [i_1] [7] [4])))), (min(var_1, (arr_0 [i_1])))))) ? (((((var_7 * (arr_5 [i_0] [i_1] [i_0])))) ? ((((arr_0 [i_1]) * var_7))) : (arr_5 [i_0] [i_0] [i_1]))) : ((((((arr_5 [i_0] [i_0] [i_0]) ? (arr_0 [14]) : (arr_1 [i_0]))))))));
            }
        }
    }
    var_19 = (((((var_13 ? var_15 : (var_13 ^ var_1)))) ? ((((max(var_9, var_2)) < var_0))) : ((((min(var_7, var_0))) - var_8))));

    for (int i_2 = 1; i_2 < 6;i_2 += 1)
    {
        arr_9 [i_2] = (((((((((arr_1 [i_2]) ? var_13 : var_14))) ? (((var_8 ? var_12 : var_11))) : (max(var_12, (arr_5 [i_2] [i_2] [i_2])))))) ? (arr_5 [i_2] [11] [11]) : (max((((var_8 ? (arr_1 [i_2]) : var_13))), ((65535 ? 65523 : 6012922525094844188))))));
        var_20 *= (min((((arr_1 [i_2]) == var_3)), (((arr_1 [i_2]) || var_5))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
        {
            arr_15 [i_4] = ((((var_4 ? var_2 : (arr_12 [i_4]))) - (65523 < 65523)));
            var_21 = ((((arr_12 [i_4]) ? 4321 : 10283587197357210177)));
            arr_16 [i_3] [i_4] = var_8;
            arr_17 [i_4] [9] = (((var_11 ? var_3 : (arr_12 [i_3]))));
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
        {
            arr_20 [i_3] [i_3] = var_9;
            arr_21 [i_3] [10] [i_3] = (((((var_14 < (arr_18 [i_5] [i_5] [i_5]))))) - (((arr_18 [i_5] [22] [2]) ? (arr_14 [12] [10]) : var_14)));
        }
        arr_22 [i_3] [22] = ((((arr_10 [i_3]) + var_10)));
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
    {
        var_22 = var_15;
        var_23 = 6491108839851634711;
        arr_26 [i_6] = (((((max((arr_18 [18] [9] [9]), (arr_4 [i_6] [6] [i_6])))) ? ((max(var_15, (arr_3 [i_6] [i_6])))) : (min((arr_13 [i_6] [6] [i_6]), (arr_11 [i_6]))))) | (((arr_4 [i_6] [i_6] [i_6]) ? (((arr_3 [i_6] [i_6]) ? (arr_11 [4]) : var_5)) : (((var_5 ? (arr_4 [i_6] [i_6] [i_6]) : (arr_2 [8])))))));
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
    {
        arr_31 [i_7] [i_7] = (max(((((((arr_0 [i_7]) ? (arr_18 [i_7] [23] [i_7]) : var_15))) ? (((max(var_11, var_10)))) : ((47868 ? 549755809792 : 0)))), (((((6571879132892830001 ? -549755809787 : 9223372036854775807)) == 549755809792)))));
        arr_32 [i_7] = (((((((13 ? -549755809818 : -8187223142158803238))) ? 8187223142158803237 : (((max(65517, 39412)))))) - 126));
    }
    var_24 = (8187223142158803238 & var_5);
    #pragma endscop
}
