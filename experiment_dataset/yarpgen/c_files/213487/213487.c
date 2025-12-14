/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = ((~((~(arr_0 [i_0])))));
        arr_4 [i_0] [i_0] = ((30132696 ? var_0 : 1));
        var_13 = ((!((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_9 [i_0] [i_0] [i_0] = var_4;
            arr_10 [i_0] [i_0] [i_0] = (((((-2067310412 ^ 1) ? (max(var_5, 65472)) : ((((arr_6 [i_0]) != var_4)))))) > (((-1 - var_6) ? (arr_5 [i_0] [i_1]) : ((((arr_8 [i_0] [i_1]) ? (arr_1 [i_0]) : var_5))))));
        }
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            arr_15 [i_0] [1] |= (((((-(arr_5 [i_2 - 1] [i_2 + 1])))) ? (((arr_5 [i_2 + 1] [i_2 + 2]) ? (arr_5 [i_2 - 1] [i_2 - 2]) : (arr_7 [i_2 - 1] [i_2 + 2]))) : (64 + 1)));
            var_14 = ((!((((min(-2067310412, (arr_14 [i_0] [i_0] [i_0])))) >= (((arr_5 [i_0] [i_2 - 1]) ? var_1 : var_2))))));
            arr_16 [i_0] [i_0] = ((~((((((arr_6 [i_0]) ? var_3 : var_2))) ? (arr_8 [i_0] [i_0]) : (65472 * 255)))));
            arr_17 [i_0] = ((((((arr_12 [i_0]) ? var_8 : var_11)) > (((arr_12 [9]) ? -2067310417 : 105)))) ? (((((((arr_8 [i_0] [i_2]) ? 164 : var_2))) && (99 || var_1)))) : (arr_14 [i_2 - 2] [i_2 + 2] [i_2 + 1]));
        }
        arr_18 [i_0] [i_0] = ((!(arr_11 [i_0])));
    }

    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        arr_22 [i_3] [i_3] = (arr_7 [2] [i_3]);
        arr_23 [9] [i_3] = (~11);
        var_15 |= min(-var_10, (((var_1 * var_4) ? ((min(7592, 31))) : (arr_6 [i_3]))));
    }
    var_16 = (max(var_16, ((((((!var_10) && (((var_1 ? 18446744073709551615 : var_9))))) ? ((-((var_0 ? var_0 : var_10)))) : ((var_8 ? ((23 ? 31 : 63)) : var_5)))))));
    #pragma endscop
}
