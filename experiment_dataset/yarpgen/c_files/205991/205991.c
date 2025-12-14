/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= var_1;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_18 = (((arr_1 [i_0 - 2] [i_0 + 4]) != ((var_2 >> (18446744073709551615 - 18446744073709551585)))));
        arr_2 [i_0 - 1] = (((arr_1 [i_0 + 1] [i_0 - 2]) ? (arr_0 [i_0 + 4]) : var_7));
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        var_19 = ((((((2147483647 ? (arr_0 [i_1 + 1]) : 10538803461044674273)))) ? (arr_4 [i_1] [i_1 - 1]) : ((10 ? ((min((arr_0 [i_1]), (arr_0 [i_1 - 2])))) : (arr_1 [i_1 - 2] [i_1 - 2])))));
        arr_5 [i_1] = (((max(var_0, (((65535 ? (arr_0 [i_1 + 1]) : (arr_0 [i_1])))))) | var_0));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    var_20 = (max(var_20, ((min(39, 10538803461044674273)))));
                    arr_13 [i_3] [i_3] [i_3] [i_4] |= (max((((arr_7 [i_2]) * (arr_7 [i_2]))), ((min((arr_7 [i_3]), (arr_7 [i_4]))))));
                    arr_14 [i_2] [i_2] |= ((((((arr_8 [i_2] [i_4]) ? (((791824941 ? (arr_6 [i_3]) : (arr_0 [i_2])))) : ((var_13 ? 0 : 25324))))) ? (((!((min((arr_11 [i_2] [i_2] [i_4] [6]), 18446744073709551609)))))) : ((((((arr_6 [i_2]) ? (arr_11 [i_2] [i_3] [i_4] [6]) : -2147483646))) ? var_5 : (((var_12 > (arr_6 [i_3]))))))));
                    var_21 = ((-(((arr_1 [i_2] [i_2]) ? (arr_8 [i_4] [i_3]) : (arr_1 [i_2] [i_3])))));
                }
            }
        }
        var_22 -= (min(15, 8776724973292151960));
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
    {
        arr_17 [i_5] = (min(((((1231519078 >> 1) || ((min((arr_3 [i_5] [i_5]), 1)))))), (max((-1884373349 && 4783144621051285039), (arr_4 [i_5] [i_5])))));
        var_23 &= (((-(max(var_9, var_11)))));
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 12;i_8 += 1)
                {
                    {
                        var_24 = (max(var_24, (((((26627 ? -1321147952 : var_12)))))));
                        arr_25 [4] [i_5] [4] [i_5] [12] |= (((((min((min((arr_1 [18] [i_7]), (arr_7 [i_6]))), -26628)))) ^ (min(((((arr_4 [i_5] [12]) & var_7))), (((arr_20 [i_7 - 1] [i_8]) & 13663599452658266561))))));
                    }
                }
            }
        }
    }
    var_25 = (!4294967295);
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 16;i_10 += 1)
        {
            {
                var_26 = (((arr_1 [i_9] [i_9]) ^ var_1));
                var_27 = (max(var_27, ((((arr_27 [5] [i_10 + 4]) && ((((arr_27 [i_9] [i_9]) ? 1 : (arr_1 [i_10] [i_9])))))))));
                arr_31 [0] [i_10] = ((((max(var_11, 4783144621051285018))) ? 4783144621051285038 : (max((-1709 + -6710616761989062681), (((arr_1 [i_9] [i_10]) ^ (arr_28 [0] [i_10 + 4])))))));
            }
        }
    }
    var_28 = ((-((var_12 ? var_16 : (min(var_9, 65535))))));
    #pragma endscop
}
