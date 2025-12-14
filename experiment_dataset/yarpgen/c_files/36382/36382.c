/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_12 = ((-((-(arr_4 [i_1] [i_0])))));
            arr_5 [i_0] [i_1] [9] = ((((var_10 << (var_5 - 6932))) <= (arr_3 [i_0])));
        }
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            var_13 = ((1776440697 ? 3542606449134029130 : (arr_3 [i_2 + 1])));
            var_14 = ((!(arr_7 [i_2] [i_2 + 2])));
            var_15 = (max(var_15, (((1 ? (((arr_1 [i_2] [i_0]) ? var_10 : 1655023563)) : 2207676646)))));
            arr_8 [i_0] = ((2518526598 ? (arr_0 [i_2 + 1] [i_2 - 2]) : (arr_0 [i_2 - 2] [i_2])));
        }
        var_16 = (2518526608 * 1776440694);
        var_17 = (min(var_17, (((-(arr_6 [i_0] [i_0]))))));
        var_18 = (((arr_7 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : ((((arr_3 [i_0]) && (arr_6 [i_0] [i_0]))))));
        arr_9 [i_0] [i_0] = var_7;
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_19 = var_1;
        arr_13 [i_3] = (((-5659 ? 2518526612 : 2207676668)));
        var_20 = (((90 - 11) & (((((-(arr_10 [i_3] [i_3])))) ? (~-9) : (max(1776440690, (arr_11 [2])))))));
        arr_14 [i_3] = (arr_11 [i_3]);
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_21 = (min(var_21, var_8));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 14;i_6 += 1)
            {
                {
                    var_22 = (max(var_22, var_3));
                    arr_22 [i_4] [16] [i_4] [i_4] = ((((((arr_11 [i_6]) ? ((116 >> (var_5 - 6936))) : (arr_15 [i_4])))) ? (127 != 1776440702) : (max((arr_16 [i_5 + 1] [1]), var_6))));
                    var_23 = -var_2;
                }
            }
        }
        arr_23 [i_4] = 92;
    }
    for (int i_7 = 0; i_7 < 0;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                {
                    var_24 = (max(var_24, (max(((((arr_31 [i_8 + 1] [i_7 + 1] [i_7 + 1]) / 26))), ((((((arr_24 [i_7 + 1]) * var_4))) ? (((arr_29 [2]) ? 1 : var_10)) : 2207676661))))));
                    var_25 = (((((~(max(3030104429882249599, (arr_33 [i_8])))))) ? (max((arr_27 [i_7]), var_1)) : (((~(~953114604))))));
                    arr_34 [i_8] [i_9] = ((~(((arr_28 [i_7 + 1] [i_8] [i_7 + 1]) & -1))));
                    var_26 = ((((min(2207676668, var_6))) ? (arr_31 [i_7] [i_7] [i_8 - 3]) : ((min((arr_32 [i_7] [21] [i_8 + 2]), (arr_31 [i_8] [13] [i_8 + 2]))))));
                }
            }
        }
        arr_35 [i_7] = (((!50) ? 1 : 0));
    }
    var_27 = var_10;
    var_28 = (min(var_28, ((((!var_3) ? var_8 : 1)))));
    #pragma endscop
}
