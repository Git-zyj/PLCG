/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;
    var_21 = var_1;
    var_22 = max(((var_19 ? ((((((-32767 - 1) + 2147483647)) << (1768843791606780210 - 1768843791606780210)))) : (~5198558993505154537))), (((~(~-23)))));
    var_23 = 1714625531;

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_4 [4] = 1714625525;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 24;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            var_24 = (min(((((var_19 ? var_4 : 6978378002936008458)))), ((((max(var_10, var_8))) ^ (((arr_5 [i_0 - 1]) - (arr_3 [1])))))));
                            var_25 ^= (((((((min(var_11, var_10))) ? 0 : ((((arr_13 [14] [i_1] [i_3] [i_4]) ? var_1 : 14)))))) ? (((!(arr_8 [i_0] [i_0] [i_0])))) : var_15));
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = (((-5067628592032294596 ^ ((min(var_10, 6))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            arr_22 [i_0] [17] [i_0] [i_0] [i_0] [i_5] = var_4;
                            var_26 = (min(var_26, -var_4));
                            var_27 = (((arr_21 [i_3 - 1] [i_3 - 2] [11] [11] [i_3 + 1]) / (arr_21 [i_3 + 1] [i_3 - 1] [0] [i_3 - 2] [i_3])));
                            arr_23 [i_0] [i_1] [i_2] [1] [i_5] = 1;
                        }
                        var_28 = ((((arr_15 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3]) ? (2580341757 | 12) : (((arr_16 [i_3] [i_0 - 1] [21] [i_1] [i_0 - 1] [21]) ? (arr_16 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3]) : 1)))));
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_29 = (((11 && 0) * (arr_18 [22] [22] [i_6] [i_6])));
        var_30 = (!var_15);
        var_31 = (max((arr_16 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]), (arr_26 [i_6] [i_6])));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_32 = ((-6696464568401493744 ? 0 : 65));
        arr_30 [i_7] |= var_15;
        var_33 = (((arr_18 [i_7] [i_7] [i_7] [i_7]) == (arr_13 [i_7] [5] [5] [i_7])));
        arr_31 [2] = (!1714625526);
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 21;i_8 += 1)
    {
        var_34 = var_3;
        arr_34 [i_8] [i_8 - 1] = var_10;
        var_35 = var_3;
        var_36 = ((((-(arr_11 [i_8] [i_8] [i_8])))) ? ((((arr_0 [i_8]) ? (arr_6 [i_8 + 1] [i_8 + 1] [i_8]) : var_1))) : -var_0);
        arr_35 [i_8] = (var_19 ? (0 ^ 1762146972) : ((var_16 - (arr_18 [i_8] [i_8 + 1] [i_8 + 1] [i_8]))));
    }
    #pragma endscop
}
