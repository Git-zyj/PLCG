/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = (((min(((1729324930 ? -2022765492655181290 : -2022765492655181290)), (arr_3 [i_0] [i_0] [i_0]))) == (((((arr_1 [i_0] [i_1]) == var_4))))));
                var_14 = (max(((((((arr_3 [i_0] [i_0] [i_1]) ? 23496 : var_7))) && (1960419951 || 58667))), (((arr_1 [i_0] [i_1]) || (((arr_3 [i_1] [i_0] [5]) && (arr_0 [1])))))));
                var_15 = (min(var_15, ((((min(var_1, var_10)) < ((((!(arr_0 [i_0]))))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                arr_8 [i_2] [i_2] = ((~(((((var_6 ? 1960419951 : -8498611110397088327))) ? var_0 : (var_6 & var_11)))));
                arr_9 [i_2] [i_3] = (!var_0);
            }
        }
    }

    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        arr_12 [i_4] = ((~(((var_6 != (arr_6 [i_4]))))));
        arr_13 [i_4] = max(var_8, var_5);
        arr_14 [i_4] [i_4] = (!1960419951);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        arr_17 [i_5] [i_5] = 35184372072448;
        arr_18 [i_5] &= (-2022765492655181283 % 667489970);
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        arr_23 [i_6] = (max(((var_6 ? (arr_1 [i_6] [i_6]) : var_2)), (max((max(var_2, 206)), ((min((arr_16 [i_6]), -23509)))))));
        arr_24 [i_6] = (((((arr_20 [i_6]) ? (arr_20 [i_6]) : (arr_15 [i_6] [i_6])))) && (((arr_15 [i_6] [i_6]) != var_8)));
        arr_25 [i_6] = (-(max(((max((arr_19 [i_6] [i_6]), (arr_0 [i_6])))), ((var_1 ? var_7 : var_1)))));
        var_16 = 0;
    }

    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        arr_29 [i_7] = var_12;
        var_17 *= (((arr_4 [i_7]) ? (arr_27 [i_7]) : (((((13564954999415385452 ? 2022765492655181267 : var_6))) ? (((arr_27 [i_7]) ? (arr_26 [i_7]) : (arr_28 [i_7]))) : (arr_6 [i_7])))));
        arr_30 [i_7] = (min(-2022765492655181290, -1960419952));
    }
    for (int i_8 = 2; i_8 < 9;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 7;i_10 += 1)
            {
                {
                    arr_38 [i_8] = ((~((~(((arr_27 [i_8]) ^ -1960419951))))));
                    var_18 = (min(var_18, ((!(((((max((arr_11 [i_8]), (arr_37 [i_8 + 2] [i_9 - 1] [i_9] [i_10 + 2])))) ? (((var_7 < (arr_27 [i_9 - 1])))) : var_11)))))));
                }
            }
        }
        arr_39 [i_8] = max(-1960419964, 1960419951);
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 10;i_12 += 1)
            {
                {
                    arr_45 [i_8] [i_8 - 2] [10] [1] &= (arr_31 [i_11]);
                    var_19 = (max(((((arr_34 [i_8] [i_8 - 2] [i_8]) ? (~1) : (arr_0 [i_8 - 1])))), var_12));
                }
            }
        }
        var_20 = (min(var_20, ((max((((arr_42 [i_8 + 1] [i_8]) - var_12)), 23455)))));
    }
    for (int i_13 = 2; i_13 < 9;i_13 += 1)
    {
        arr_48 [i_13] = (min((arr_4 [i_13 - 1]), -2022765492655181290));
        var_21 ^= ((((((arr_4 [i_13 + 2]) / (arr_4 [i_13 + 2])))) ? (max((arr_4 [i_13 - 2]), (arr_15 [i_13 - 2] [i_13 - 2]))) : (min((arr_4 [i_13 + 1]), (arr_4 [i_13 + 1])))));
    }
    var_22 &= var_12;
    #pragma endscop
}
