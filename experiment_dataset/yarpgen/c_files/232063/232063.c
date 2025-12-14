/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_15 != 824);

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_17 = (((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_13))));
        var_18 = (((arr_1 [i_0]) > (((((arr_2 [i_0]) > -144115188075855872))))));
        var_19 = ((~(arr_0 [6])));

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_20 = (min(var_20, var_9));
            arr_6 [i_1] [i_0] [i_0] = (max(((((arr_0 [i_0]) + (arr_3 [i_0] [5] [i_1 - 1])))), (((arr_0 [i_0]) + (!-30289)))));
            var_21 |= (arr_1 [i_1 + 1]);
        }
        var_22 = ((!(arr_1 [i_0])));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_23 *= (min(84, (max((((-1 + 2147483647) << (((((arr_5 [i_2] [i_2]) + 46)) - 18)))), var_15))));
        arr_9 [2] = (((((arr_1 [i_2]) && ((((arr_0 [i_2]) ? (arr_2 [i_2]) : (arr_4 [i_2] [i_2])))))) ? ((min((arr_1 [i_2]), (arr_5 [i_2] [i_2])))) : (arr_8 [i_2])));

        for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
        {
            var_24 = ((((min((arr_1 [9]), 45033))) <= -113));
            var_25 *= (((arr_5 [i_3] [i_2]) * (arr_5 [i_2] [i_2])));
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
        {
            arr_14 [i_4] [i_2] = (((min((arr_0 [i_4]), (~1))) > (((min((arr_5 [i_2] [i_2]), var_0))))));
            var_26 = (arr_8 [i_4]);
            var_27 = (min(var_27, (((((((max((arr_8 [i_2]), (arr_12 [1] [i_4] [i_2]))))) > (arr_11 [i_4] [i_2] [i_2])))))));
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 10;i_5 += 1)
        {
            arr_17 [5] = (((12 ? (arr_3 [6] [2] [0]) : (arr_11 [i_2] [i_2] [i_5]))));
            var_28 = ((~((7258970899745585471 ? var_2 : (arr_11 [i_5 - 1] [i_2] [i_2])))));
            arr_18 [i_2] [i_5 + 1] = (((arr_1 [i_5 + 1]) ? (arr_4 [i_5 - 2] [i_5]) : -3));
        }
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
    {
        arr_21 [i_6] = (min((((!(((28089 | (arr_19 [4]))))))), (((arr_3 [i_6] [i_6] [i_6]) / (arr_13 [i_6] [i_6])))));
        var_29 += ((((((arr_3 [8] [2] [0]) + 2147483647)) >> ((((7483493887698880763 / (arr_10 [i_6]))) - 54624042975904230)))) << (((((((((arr_2 [i_6]) && var_1)))) - (max(7483493887698880763, 6685)))) - 10963250186010670850)));
    }
    #pragma endscop
}
