/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            arr_4 [9] [i_0] [i_0] = (((arr_1 [i_0]) > (((((var_3 ? (arr_2 [i_0]) : var_7))) ? (-2147483646 > 1880710690) : (max(var_7, var_8))))));
            arr_5 [i_0] [i_0] = var_10;
        }
        var_12 = (arr_0 [i_0]);
        arr_6 [i_0] = ((((((arr_2 [i_0]) ? (((var_8 ^ (arr_3 [i_0] [i_0 + 3])))) : ((131068 ? var_1 : (arr_3 [i_0] [i_0])))))) ? (((((arr_2 [i_0]) ? var_9 : (arr_3 [i_0] [i_0 + 3]))))) : 28384));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_13 = 7823;
        var_14 = (var_8 || 53773);
        arr_9 [i_2] = ((var_10 ? (9242 && 40265) : var_4));

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 18;i_4 += 1)
            {
                arr_15 [i_4] [i_3] [i_3] [i_2] = ((!(arr_14 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_3])));
                arr_16 [16] [i_3] [i_2] = (((arr_13 [4] [4]) ? ((51064 * (arr_10 [i_4]))) : (~-1570806052)));
                arr_17 [15] [i_3] = ((~(arr_2 [i_2])));
            }
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                var_15 = (((arr_14 [i_2] [i_3] [i_5] [i_5]) ? (arr_14 [i_2] [i_3] [i_3] [i_5]) : (arr_14 [i_3] [3] [18] [i_3])));
                arr_20 [i_3] = (arr_2 [i_3]);
                arr_21 [i_5] [i_2] [i_2] |= (((arr_14 [7] [16] [7] [i_2]) ^ ((-7193757072450130396 ? var_9 : var_3))));
            }
            for (int i_6 = 1; i_6 < 17;i_6 += 1)
            {
                arr_24 [i_6] [i_3] [i_6] = (((arr_22 [i_6 + 1] [i_6] [i_6] [i_6 + 2]) & (arr_23 [i_6 - 1] [i_6] [i_6] [i_3])));
                arr_25 [i_6] [i_6] = (((arr_18 [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 - 1]) ? (arr_18 [i_6 + 1] [i_6] [i_6 + 1] [i_6 - 1]) : (arr_18 [i_6 + 2] [12] [i_6 - 1] [i_6 - 1])));
            }
            arr_26 [i_3] = (-var_7 + 18345);
            var_16 = (arr_14 [11] [i_3] [i_2] [i_2]);
        }
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        arr_29 [i_7] [i_7] = (((var_8 >> (((arr_8 [i_7]) - 1860124133009838476)))));
        arr_30 [i_7] [i_7] = (arr_23 [i_7] [i_7] [i_7] [18]);
    }
    for (int i_8 = 3; i_8 < 12;i_8 += 1)
    {
        arr_34 [i_8] = ((arr_12 [i_8 + 2]) > (arr_23 [16] [16] [12] [i_8]));
        var_17 += ((((((min(var_1, -2795136630542923683))) ? (arr_1 [4]) : (max(24353, var_1)))) ^ (arr_32 [i_8 + 1])));
        arr_35 [i_8] = (((-(arr_32 [i_8 + 1]))));
        arr_36 [i_8] = ((((min((arr_23 [i_8 + 2] [1] [1] [2]), 1065748212399988626))) && ((((arr_23 [i_8] [i_8 + 1] [12] [i_8 + 1]) / var_7)))));
    }
    var_18 &= var_10;
    #pragma endscop
}
