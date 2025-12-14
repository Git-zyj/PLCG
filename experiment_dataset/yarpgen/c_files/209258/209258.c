/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_13 = (!1073741823);
            arr_6 [i_0] [i_0] [2] |= (((96 ? var_3 : (arr_4 [6]))));
        }
        var_14 = (arr_4 [i_0]);
        arr_7 [i_0] [i_0] = (((((-3181957584340840365 ? 65518 : (arr_0 [i_0])))) ? ((((arr_0 [i_0]) || 48))) : (arr_2 [i_0])));
        arr_8 [2] |= (var_1 ? (arr_3 [i_0] [i_0]) : (((arr_2 [7]) ? var_4 : (arr_4 [0]))));
        arr_9 [i_0] = (arr_0 [i_0]);
    }
    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            arr_17 [i_3] [i_3] = (max(2147483634, (max((arr_12 [i_2 - 1]), 3268556798))));
            arr_18 [i_3] = -1;
        }
        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                var_15 = (max(var_15, (((+((((arr_22 [12] [2] [7] [15]) || (arr_20 [14] [4])))))))));
                arr_24 [i_4] [i_4] = ((-(min(var_7, ((var_6 ? 127 : var_0))))));
            }
            arr_25 [4] [i_2] [i_4] = (134 || -1811697195);
            var_16 |= ((((((((-(arr_21 [6])))) ? var_0 : (arr_19 [14] [i_4 + 2] [i_4 + 2])))) ? (min(12, (arr_15 [i_2 - 2] [i_4 - 1]))) : ((((arr_19 [i_4 + 2] [i_4 - 1] [i_2 - 2]) ? ((-1811697218 ? (arr_16 [6]) : (arr_23 [14] [i_2] [9]))) : (((((arr_14 [2] [2] [2]) || var_5)))))))));
            arr_26 [i_4] = (((69 || 992) || 180));
        }
        var_17 = ((min(41, (arr_22 [10] [i_2] [i_2] [i_2 - 3]))));
    }
    var_18 = var_1;
    #pragma endscop
}
