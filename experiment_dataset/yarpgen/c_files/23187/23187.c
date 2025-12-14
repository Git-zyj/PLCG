/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~var_13);
    var_15 = (max(var_15, (~var_1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (((!(arr_1 [i_1]))))));
                var_17 = (min((((((((arr_4 [i_0]) ? (arr_5 [i_0]) : (arr_3 [i_0] [i_0] [i_0])))) ? 1 : ((1 ? (arr_4 [i_1]) : 1))))), (max((arr_3 [i_1 + 2] [i_1 - 1] [i_1 + 1]), (arr_3 [i_1 + 2] [i_1 - 1] [i_1 + 1])))));
            }
        }
    }
    var_18 = var_3;

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_8 [i_2] = (((((arr_7 [i_2]) ? -32 : (var_10 ^ -1)))) ? (((!(arr_6 [i_2])))) : (~var_4));
        var_19 = var_12;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = var_5;
        var_20 = (arr_4 [i_3]);
    }
    for (int i_4 = 2; i_4 < 16;i_4 += 1)
    {
        var_21 *= (((-2147483647 - 1) ? ((-(arr_13 [i_4 - 2] [i_4 + 4]))) : ((((!1) | 1)))));
        arr_14 [i_4 + 2] = (((((-var_10 ? 938005654088941471 : var_3))) ? var_10 : (((((arr_12 [i_4 + 3] [i_4]) == (arr_12 [i_4 + 2] [i_4 + 2])))))));
    }
    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_22 = var_1;
            var_23 |= 34;
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            arr_25 [i_5] [i_7] [i_5 + 1] = (((((1 ? (arr_22 [i_5 - 1] [i_5 - 1] [i_5 + 1]) : (arr_22 [i_5 + 1] [i_5 - 1] [i_5 + 1])))) ? (1 / var_1) : ((((arr_22 [i_5 + 1] [i_5 - 1] [i_5 + 1]) * (arr_22 [i_5 + 1] [i_5 - 1] [i_5 - 1]))))));
            var_24 = ((((min((arr_24 [i_5] [i_5 + 1] [i_5 + 1]), (arr_24 [i_5 + 1] [i_5 + 1] [i_5 + 1])))) <= (var_6 % 135)));
            arr_26 [1] [1] = (arr_23 [i_5 - 1] [i_5] [i_5 - 1]);
        }
        arr_27 [i_5] = var_12;
    }
    #pragma endscop
}
