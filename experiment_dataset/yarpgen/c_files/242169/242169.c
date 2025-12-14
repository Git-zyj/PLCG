/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((min((((var_11 << (var_0 - 2559804695)))), ((var_8 ? var_2 : var_11)))) * (~3129880272472977615));
    var_16 = (~67108863);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 = (((((arr_1 [i_0] [i_0]) ? -var_12 : (arr_0 [i_0]))) ^ (((max(86, 86))))));
        arr_2 [i_0] [i_0] |= (arr_0 [i_0]);
        var_18 = ((-(arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] |= ((~(((9287596738157521134 ? 0 : (arr_1 [i_1] [i_1]))))));

        /* vectorizable */
        for (int i_2 = 1; i_2 < 12;i_2 += 1) /* same iter space */
        {
            arr_10 [i_2] [11] [i_2 - 1] = (((arr_4 [i_2] [i_1]) ? ((var_13 / (arr_5 [i_1] [i_1]))) : (arr_5 [i_2 - 1] [i_2 - 1])));
            var_19 = (((~170) ? (1568400680543033826 | var_0) : var_10));
            arr_11 [i_2] [i_2] = ((-1 | var_4) >= var_10);
        }
        for (int i_3 = 1; i_3 < 12;i_3 += 1) /* same iter space */
        {
            arr_15 [2] [2] [i_3 + 1] |= (!(((-(~var_7)))));
            arr_16 [i_1] [i_3] [i_1] = 0;
            arr_17 [1] |= (((1568400680543033809 != -8432) / 1));
            arr_18 [i_1] [i_1] [i_3] = (((max((arr_9 [i_3 + 1] [i_3 + 1]), (arr_9 [i_3 + 1] [i_3 - 1]))) ? 18446744073642442753 : ((max((arr_9 [i_3 + 1] [i_3 + 1]), (arr_9 [i_3 + 1] [i_3 + 1]))))));
            var_20 = ((170 ? 25 : -8778));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            arr_22 [i_1] [i_1] [i_1] = (((arr_12 [i_4] [i_4] [i_4]) <= 169));
            arr_23 [i_4] = (~255);
        }
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        arr_27 [i_5] = 1568400680543033809;
        arr_28 [i_5] = (max(2357275411914738234, 1));
        arr_29 [i_5] = ((((-(arr_4 [i_5] [i_5]))) >= var_13));
        arr_30 [i_5] [i_5] = (((-7265 ? 18446744073642442753 : 16420400005535665425)));
    }
    #pragma endscop
}
