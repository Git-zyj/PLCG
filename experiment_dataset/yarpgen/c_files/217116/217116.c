/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [13] = ((((arr_1 [i_0]) / ((0 ? (arr_1 [i_0]) : 2840914006)))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_5 [i_0] [10] [i_1] = (arr_0 [8]);
            arr_6 [i_0] [i_1] = (5259100457498282272 + -5259100457498282259);
            arr_7 [7] [i_0] [i_1] = var_9;
            arr_8 [i_0] [i_1] [i_0] = (~0);
            arr_9 [i_0] = ((+(((!5259100457498282252) - (((arr_1 [i_1]) ? var_14 : var_5))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_12 [4] [i_0] [i_2] = ((0 ? (arr_0 [i_0]) : (var_10 ^ var_14)));
            arr_13 [i_2] = (((((var_1 | (arr_4 [i_0])))) ? (2826653017807710534 / var_11) : (arr_3 [i_0] [i_0] [i_2])));
            arr_14 [i_2] [i_2] [i_0] = (((arr_3 [i_0] [11] [i_0]) | (arr_3 [i_0] [i_0] [i_2])));
        }
        arr_15 [i_0] = (arr_10 [i_0]);
        arr_16 [i_0] = ((((15505903542409296789 ? 5 : (arr_0 [i_0]))) | (((-7352001119982316848 ? 0 : var_12)))));

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            arr_19 [i_0] [6] [i_3] = (arr_18 [7] [i_3]);
            arr_20 [i_3] = var_14;
            arr_21 [i_0] [i_3] = (((((180 ? (!var_14) : var_11))) ? ((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_10))) : ((~((0 ? 4264865612303101470 : (arr_1 [i_0])))))));
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            arr_24 [i_4] [i_4] = (((!var_8) ? ((+((2 ? (arr_11 [i_4] [11] [7]) : 5259100457498282296)))) : (var_2 - var_4)));
            arr_25 [i_0] = ((1 ? 2995825875463025837 : -5546));
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_29 [i_5] [i_5] = var_15;
        arr_30 [6] [i_5] = (((-9223372036854775807 - 1) != -var_16));
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        arr_33 [i_6] [i_6] = (((((((arr_31 [i_6]) ^ (arr_31 [i_6])))) ? (arr_31 [i_6]) : var_4)));
        arr_34 [i_6] = ((-8 || (((3029473581420909518 << (((arr_32 [i_6]) + 19547)))))));
        arr_35 [i_6] = (min(((var_6 ? 2051261249885789863 : var_16)), ((((arr_31 [i_6]) ? (arr_32 [i_6]) : (arr_32 [i_6]))))));
        arr_36 [21] = (((((arr_32 [i_6]) ? (arr_32 [i_6]) : (arr_32 [i_6])))) ? (((((arr_32 [i_6]) != 4)))) : (max((arr_32 [i_6]), -2051261249885789858)));
    }
    var_18 = (((((var_12 ? var_5 : var_8))) ? ((var_13 ? (~619160105) : -7731432523102590884)) : var_8));
    var_19 = (((max(26192, var_15)) % (((-1 ? var_9 : var_0)))));
    #pragma endscop
}
