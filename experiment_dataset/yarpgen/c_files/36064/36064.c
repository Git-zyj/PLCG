/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        var_19 = var_13;
        arr_3 [i_0] = (((arr_0 [i_0] [i_0]) / (arr_0 [i_0] [i_0])));
        var_20 -= ((((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : var_6))) ? ((var_12 | (-32767 - 1))) : var_7));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] = (min((((var_18 != (arr_5 [i_1] [i_1])))), (((arr_5 [i_1] [i_1]) - (arr_5 [i_1] [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    var_21 = (arr_10 [i_2] [i_2]);
                    var_22 = ((var_16 ? (((arr_12 [i_1]) << (((((-32767 - 1) + 32780)) - 12)))) : (arr_11 [i_1] [i_1] [i_1])));
                    arr_14 [i_1] [13] [i_1] [i_3] = ((var_9 ? (((((32767 ? 32748 : 0))) ? var_0 : var_14)) : (((var_13 % (arr_5 [i_1] [i_3]))))));
                }
            }
        }
        var_23 = ((((max(-32765, (arr_8 [i_1])))) > (((arr_8 [i_1]) ? (arr_8 [i_1]) : (arr_8 [i_1])))));
    }
    for (int i_4 = 2; i_4 < 10;i_4 += 1)
    {
        var_24 = (max(((((arr_13 [i_4] [i_4] [i_4] [i_4]) ? (arr_12 [i_4 + 2]) : (arr_12 [i_4 + 1])))), (arr_1 [i_4])));
        arr_18 [i_4] = ((var_8 ? ((min(1, (arr_12 [i_4 - 1])))) : 1603998353327258111));
        var_25 |= (max(((-54 ? -32742 : 7)), ((((arr_4 [i_4 + 2] [i_4 + 1]) != (arr_4 [1] [i_4 + 2]))))));
        arr_19 [i_4] = ((var_9 ? ((((arr_16 [i_4 - 2]) ? var_4 : var_2))) : ((-((var_9 >> (((arr_0 [i_4] [i_4]) - 1263228703))))))));
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 10;i_6 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 11;i_7 += 1)
                    {
                        var_26 = (arr_26 [i_6 - 1] [i_5 + 1] [i_4 + 2] [i_4]);
                        var_27 += ((var_13 >> (var_15 - 141)));
                        var_28 = 88;
                        var_29 &= ((!(arr_13 [i_7 + 1] [i_5] [i_6 - 1] [i_5 + 1])));
                    }
                    for (int i_8 = 3; i_8 < 11;i_8 += 1)
                    {

                        for (int i_9 = 1; i_9 < 11;i_9 += 1) /* same iter space */
                        {
                            arr_33 [i_8] [i_5] [9] [i_5] [i_5] = ((((min((arr_31 [i_4 - 2] [i_5 - 2] [i_6 - 1] [9] [1] [i_8 + 1]), (arr_31 [i_4 + 1] [i_4 + 2] [i_4 + 1] [i_4 - 2] [i_4] [i_4 - 1])))) ? (((((2147483646 ? var_14 : var_16))) ? var_1 : var_18)) : (((arr_11 [i_8] [i_4 + 1] [i_4 + 1]) ? (arr_30 [i_8 - 2] [i_5] [i_8] [2] [2] [i_5] [i_4 + 1]) : -2147483647))));
                            var_30 = (min(((((var_2 ? (arr_32 [i_4] [5] [i_6] [i_8] [i_8]) : (arr_1 [7]))) / (((var_5 ? var_13 : var_6))))), (min((((arr_8 [4]) | var_14)), ((((arr_13 [8] [i_5] [5] [i_5]) / var_5)))))));
                            var_31 = ((((((arr_6 [i_8 + 1] [i_8 + 1]) ? 60526 : (arr_6 [i_6 + 2] [i_5 - 1])))) ? var_2 : (min((!var_14), (arr_0 [i_9] [i_9])))));
                        }
                        for (int i_10 = 1; i_10 < 11;i_10 += 1) /* same iter space */
                        {
                            var_32 = (((((max((arr_9 [i_4 - 1]), (arr_9 [i_5 - 1]))))) != (((var_10 != var_17) ? var_3 : 16965879575813214933))));
                            var_33 = (1 ? 1 : 1);
                        }
                        var_34 = var_14;
                    }
                    var_35 = (max((((((min((arr_16 [i_4]), (arr_31 [i_4] [7] [i_5] [7] [7] [i_6])))) || (((0 ^ (arr_12 [i_4]))))))), (max(92, ((((arr_1 [i_4]) == var_1)))))));
                }
            }
        }
    }
    var_36 &= -var_14;
    var_37 -= (min(var_10, var_16));
    var_38 = var_1;
    var_39 = (min(var_39, var_18));
    #pragma endscop
}
