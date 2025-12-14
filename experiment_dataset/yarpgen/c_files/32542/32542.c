/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 11105;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 = ((-(((arr_4 [10] [i_1]) ? -1440550220 : (arr_6 [i_2] [i_2] [5] [5])))));
                    arr_8 [i_2 - 1] [i_1] [14] = -91;
                }
            }
        }
        arr_9 [2] [i_0] = (-1598252478570523731 != -4848613458335765495);
        arr_10 [13] = (arr_3 [10]);
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_19 = ((((!(arr_6 [i_3] [i_3] [i_3] [i_3]))) ? (arr_3 [i_3]) : -var_14));

        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_20 = (max(var_20, (((~(((arr_6 [i_3] [i_3] [i_3] [i_3]) - (arr_6 [i_3] [i_3] [i_4] [i_4]))))))));
            var_21 = (max((((arr_7 [i_3]) ? (arr_7 [i_3]) : var_13)), (((arr_7 [i_4]) ? (arr_7 [i_4]) : var_12))));
            var_22 = (arr_5 [i_3] [i_3] [i_4]);
            var_23 = (max(var_23, ((((((arr_13 [i_3] [i_4]) || (arr_11 [i_4]))) ? ((((4294967295 != (arr_3 [i_4]))) ? -4848613458335765513 : (arr_2 [i_3]))) : (((-((var_5 ? (arr_7 [i_3]) : (arr_1 [i_3])))))))))));
            arr_15 [i_3] [i_4] = ((!((((((var_15 ? (arr_1 [i_4]) : var_5))) ? 4848613458335765507 : (((arr_13 [12] [i_3]) ? (arr_3 [14]) : (arr_0 [i_4]))))))));
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_24 = (min(var_24, (((((((18007896315662452536 - 1048568) ? (((var_9 ? var_1 : var_10))) : (arr_0 [i_3])))) ? ((((min(var_0, var_11))) ? ((7 ? (arr_13 [i_3] [i_3]) : var_1)) : (((1755252554017710244 ? (arr_17 [16]) : var_16))))) : (((-1 ? (arr_11 [i_5]) : var_2))))))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    {
                        var_25 = (((((-(arr_4 [i_3] [18])))) ? ((((((0 ? (arr_16 [9] [i_6] [i_6]) : -28))) ? 164 : (var_9 - -86)))) : (max(((-4848613458335765507 ? (arr_16 [i_7] [i_6] [i_5]) : var_2)), (((var_12 ? var_6 : var_15)))))));
                        var_26 |= (~(min((arr_14 [i_3]), 2063272201)));
                        arr_23 [7] [i_7] [i_5] [i_5] [i_5] [7] = ((-(min(-88, (arr_18 [i_5] [i_5] [i_5] [i_5])))));
                        var_27 = -var_11;
                    }
                }
            }
        }
    }
    var_28 = var_1;

    for (int i_8 = 2; i_8 < 12;i_8 += 1)
    {
        var_29 = ((((max((arr_19 [i_8] [i_8 - 2] [i_8]), var_14))) ? -113 : (((arr_12 [i_8 - 2]) ? (arr_19 [i_8 - 1] [i_8 - 1] [i_8 - 1]) : (arr_12 [i_8 - 1])))));
        arr_28 [i_8] = max(((((arr_6 [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_8 - 2]) ? (arr_6 [i_8 - 1] [i_8 - 2] [i_8 - 2] [i_8]) : (arr_6 [i_8 - 2] [i_8 + 1] [i_8 - 2] [i_8 + 1])))), -var_0);
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        arr_31 [2] = ((arr_22 [i_9] [i_9] [i_9] [i_9]) | (arr_22 [8] [i_9] [i_9] [0]));
        var_30 = 1;
        var_31 = ((var_9 || (arr_17 [i_9])));
        arr_32 [i_9] [i_9] = 1;
        var_32 -= -var_1;
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        arr_36 [i_10] [i_10] = (~-2394861404621276617);
        var_33 = (max(var_33, (~var_6)));
    }
    #pragma endscop
}
