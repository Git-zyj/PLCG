/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((-27174 ? var_10 : var_10)), (((((var_10 ? var_4 : var_9)) != var_2)))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0 + 2] [i_0 + 2] |= var_14;
        arr_4 [i_0 + 2] &= (arr_2 [i_0]);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_9 [i_1] = (((max((arr_0 [i_1]), var_5)) % ((((arr_6 [i_1]) ? (arr_7 [i_1]) : (arr_0 [i_1]))))));
        var_16 = (((var_11 ? (arr_5 [i_1]) : ((max((arr_8 [i_1]), (arr_6 [i_1])))))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 7;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 8;i_3 += 1)
            {
                {
                    var_17 = (min(var_17, (((((((arr_11 [i_3 + 1] [i_2 - 1] [i_2 - 2]) ? ((var_13 ? var_13 : 65300)) : ((~(arr_13 [i_1] [i_1] [i_3])))))) < ((((3788192230 ? 16985591278806611390 : (arr_15 [i_1] [i_1] [i_1]))) - (var_11 - var_1))))))));
                    arr_16 [i_3] = 65300;
                    arr_17 [i_3] = ((max((var_12 || var_7), (min((arr_8 [i_3]), (arr_11 [i_3] [i_2 + 3] [i_1]))))));
                }
            }
        }
        arr_18 [i_1] [i_1] = (min((((!(arr_7 [i_1])))), 9951602599109364594));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_18 = (min(var_18, ((((!var_7) ? (((arr_21 [i_4]) ? var_3 : (arr_21 [i_4]))) : ((var_3 - (((!(arr_19 [i_4])))))))))));

        for (int i_5 = 3; i_5 < 16;i_5 += 1)
        {
            var_19 ^= ((((min((arr_24 [i_5 + 2] [i_5 + 1]), 6834))) ? var_8 : ((((var_8 ? (arr_21 [i_4]) : 224)) % var_7))));
            arr_26 [i_5] = (((arr_22 [i_4] [i_5 + 1]) << ((((max(var_0, 13115699020826530645))) ? ((((arr_23 [i_4]) != 1))) : var_11))));
            var_20 = ((((min(var_10, (arr_24 [i_5 - 3] [i_5 + 2])))) ? (7973816328720096797 + 9570) : (((64449 >> (((arr_19 [i_5 + 1]) - 57216)))))));
            arr_27 [i_4] [i_5 + 3] [i_4] = (min((min((max(-1, var_6)), (min(var_6, 43753)))), var_0));
        }
        /* vectorizable */
        for (int i_6 = 2; i_6 < 18;i_6 += 1)
        {
            arr_30 [i_4] [i_4] [i_4] = ((var_13 ? (arr_28 [i_6 + 1] [i_6 + 1] [i_6 - 1]) : (((334503463452131142 ? var_12 : var_3)))));
            var_21 = ((((((arr_24 [i_4] [i_4]) & var_3))) ? ((var_11 | (arr_20 [i_6 - 1]))) : ((~(arr_21 [i_6 - 1])))));
            var_22 = (min(var_22, (((var_6 & -2147483632) ? ((var_10 ? (arr_29 [i_4]) : 0)) : (var_1 < 125)))));
            arr_31 [i_4] [i_6 - 1] = ((32736 ? (((arr_21 [i_4]) ? 10839 : 10472927744989454824)) : 8605));
        }

        for (int i_7 = 2; i_7 < 18;i_7 += 1)
        {
            arr_35 [i_4] [i_7] [i_7 - 2] = (((arr_25 [i_4] [i_4] [i_4]) | 2314417329157913000));
            var_23 = (min(var_23, (min(((var_3 ? (arr_34 [i_7 + 1] [i_7] [i_7 - 1]) : (var_10 > var_0))), ((((max(var_10, -8609))) - (var_4 == 1)))))));
        }
    }
    var_24 ^= var_10;
    #pragma endscop
}
