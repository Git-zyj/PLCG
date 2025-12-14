/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((~var_16) >= var_2)) || (((-var_0 ? -var_17 : ((-1109589485 ? 1109589471 : 110)))))));

    for (int i_0 = 1; i_0 < 8;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((((!((max(var_18, var_1))))))) | ((var_14 * (-1109589443 / 1109589463)))));
        var_20 = var_11;

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (max((var_16 <= var_17), var_15));
            arr_6 [i_0] [1] = (((((-(arr_0 [i_0] [i_0 + 1])))) ? (((var_9 ? (arr_0 [i_0 - 1] [i_0 - 1]) : var_8))) : var_5));
            var_21 = (min(var_21, (((-(17089 || 113))))));
            var_22 *= ((((max(var_12, (arr_4 [i_0 + 2] [i_0 - 1] [i_0 + 2])))) + var_6));
            var_23 ^= (min((max((arr_0 [i_0] [i_0 + 2]), (arr_0 [i_0 + 1] [i_0 + 1]))), (arr_0 [8] [i_0 + 1])));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_24 = (max(var_24, (((((((var_15 + var_18) / (max(17107, var_7))))) ? ((var_8 ? (max((arr_1 [i_2] [i_0 - 1]), -1109589481)) : var_17)) : ((-(!-1109589464))))))));
            var_25 ^= (((((arr_8 [i_0 + 1]) ? (max(var_5, (arr_0 [i_0 + 1] [i_0 + 1]))) : (((arr_4 [i_0 + 2] [i_2] [i_2]) ? var_8 : var_5))))) ? ((((((arr_0 [i_0] [i_2]) ? var_17 : var_10))) - (((arr_7 [i_0] [i_2] [i_2]) / var_7)))) : ((((!(((var_16 ? var_5 : -1109589479))))))));
            var_26 = ((((111 & (var_13 / var_17))) >= 1109589473));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_27 = (((((((max(var_5, var_13)))) + 2147483647)) << (((max(((var_12 ? (arr_1 [i_0 + 2] [i_0]) : var_14)), var_8)) - 18446744072473650905))));
                        var_28 = (min(var_28, (((((((~95) | (((arr_4 [i_0 - 1] [3] [i_3]) ? -1109589464 : -1109589460))))) ? (((var_5 ^ -1109589472) ^ (((~(arr_13 [i_0] [8] [i_4] [i_4])))))) : (((var_7 ? ((var_7 ? (arr_0 [i_0 + 1] [i_0 + 1]) : var_16)) : (min(17, var_2))))))))));
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            var_29 ^= (arr_14 [i_0] [i_0] [i_0] [i_5]);
            arr_18 [i_0] = (arr_13 [i_0] [i_0] [i_0] [i_5]);
            arr_19 [i_5] [i_0] = var_5;
            var_30 = (((min((arr_12 [i_0] [i_0] [i_0 + 2] [i_0 + 1] [i_0 + 2]), (~-6863115084756924584))) - ((((!(var_10 || var_11)))))));
        }
        var_31 = ((~((((((var_4 | (arr_15 [i_0] [i_0] [i_0])))) && (arr_7 [i_0] [i_0] [i_0]))))));
    }
    for (int i_6 = 1; i_6 < 8;i_6 += 1) /* same iter space */
    {
        var_32 -= ((((((max(var_8, 5178885102605578379))) ? (max(var_15, -6863115084756924584)) : 1109589445)) - (((-17107 ? ((var_11 ? (arr_15 [i_6] [i_6] [i_6 + 2]) : (arr_4 [i_6] [i_6] [i_6 - 1]))) : (((arr_7 [i_6] [1] [i_6 + 2]) ? var_13 : var_15)))))));
        var_33 = ((~((-((var_8 ? -29 : var_6))))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 7;i_9 += 1)
                {
                    {
                        var_34 ^= (((-var_14 + var_17) ? (((5178885102605578397 > ((((!(arr_24 [i_6] [i_6] [i_6] [i_6])))))))) : ((((((arr_21 [i_8] [i_6]) ? 1295983395357993000 : (arr_0 [i_6] [i_7]))) <= (var_14 % var_15))))));
                        var_35 += -25025;
                        arr_31 [i_6] [i_7] = (((((var_7 == var_1) > (((arr_16 [9] [1]) ? 1109589436 : 5178885102605578386))))) * (((32766 / var_16) / (min(-1109589503, (arr_0 [i_6] [5]))))));
                    }
                }
            }
        }
        arr_32 [2] &= ((2 ? 48440 : 17098));
    }
    var_36 = (min(var_36, var_9));
    var_37 = (((((var_6 | var_0) ? 2 : var_0)) / var_10));
    #pragma endscop
}
