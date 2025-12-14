/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = var_13;
        arr_4 [13] = (arr_0 [i_0]);
        var_16 -= (((((((arr_2 [i_0]) == (arr_1 [i_0]))))) | ((var_13 ? (arr_0 [i_0]) : (min(var_12, (arr_1 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    var_17 += (((((var_9 == var_5) < var_4)) ? var_14 : (((var_3 ? (arr_6 [i_2 - 1]) : (arr_6 [i_2 - 1]))))));
                    var_18 = (((arr_2 [i_1]) ? ((((((arr_1 [i_1]) ? var_0 : var_0))) ? -var_6 : (max(4723660211965484707, 7340032)))) : var_8));

                    for (int i_4 = 2; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        var_19 = var_1;
                        var_20 = (max(var_20, ((((((~(min(1698605026, -15132))))) ? ((min((~var_0), (arr_12 [i_3] [i_4 - 1] [i_4 - 1] [8])))) : (min((max((arr_7 [i_1]), var_11)), (~var_12))))))));

                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            var_21 = ((~((110 ? 5229955312299791042 : 8640))));
                            var_22 = ((((((((var_5 - (arr_8 [i_3])))) ? ((var_4 ? (arr_16 [i_4]) : var_10)) : ((min(var_4, var_12)))))) ? ((((((var_6 & (arr_13 [i_1] [i_4] [i_3]))) >= ((~(arr_5 [i_2 - 1]))))))) : (((((var_2 ? var_8 : var_14))) ? (!var_9) : 1787181464))));
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_23 -= ((!(((-(arr_10 [i_2 - 1] [i_3] [i_4 + 2]))))));
                            var_24 += (arr_18 [i_2 - 1] [i_4 + 2] [i_4 + 1] [i_4 - 1] [2]);
                            arr_21 [i_3] [i_4] [0] [i_3] = var_12;
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 14;i_7 += 1)
                        {
                            var_25 ^= var_6;
                            arr_25 [i_4] [6] = (arr_23 [i_7 + 2] [i_4 - 2] [i_3] [i_3] [i_3]);
                            var_26 = (min(var_26, ((1 ? 108 : 0))));
                            var_27 = (max(var_27, (((var_7 ? (arr_15 [i_1] [7] [i_3] [5] [i_4] [5] [i_7 - 1]) : (var_6 & var_0))))));
                        }
                        var_28 = (min(var_28, (((+(max((arr_17 [i_1] [i_2 - 1] [i_2 - 1] [i_3] [i_4 + 1] [i_1] [i_4 - 2]), 4294967286)))))));
                    }
                    for (int i_8 = 2; i_8 < 16;i_8 += 1) /* same iter space */
                    {
                        var_29 = var_13;
                        var_30 ^= (((((((arr_10 [i_1] [i_2] [i_3]) ? var_4 : -1177232118)) > (max(var_7, (arr_22 [i_2 - 1]))))) ? ((((arr_0 [i_2 - 1]) ? (arr_0 [i_2 - 1]) : (arr_0 [i_1])))) : ((-((14712625875980882587 ? var_9 : 3734118197728669040))))));
                        arr_30 [i_8] = ((var_11 ? (arr_24 [i_8] [i_8]) : ((((((arr_14 [i_1] [7] [i_3] [7]) ? var_10 : 128))) ? (((var_9 >= (arr_0 [i_1])))) : (((arr_10 [i_1] [i_2] [8]) ? (arr_28 [i_1] [i_2]) : (arr_24 [i_8] [i_8 + 2])))))));
                        arr_31 [i_1] [i_1] [14] [i_8] [i_1] = (arr_9 [i_1] [i_2] [15]);
                    }
                    arr_32 [i_1] [i_2] [i_2 - 1] [i_3] = ((~(((arr_7 [i_2 - 1]) ? (arr_7 [i_2 - 1]) : (arr_12 [i_3] [i_3] [i_2 - 1] [i_2 - 1])))));
                }
            }
        }
        arr_33 [i_1] = ((~(arr_12 [8] [i_1] [i_1] [8])));
        var_31 = (((((-(arr_6 [8])))) ? ((-1177232118 ? (arr_8 [i_1]) : (arr_8 [i_1]))) : ((((!(arr_8 [i_1])))))));
    }
    for (int i_9 = 1; i_9 < 21;i_9 += 1)
    {
        arr_37 [2] &= ((!((min(8, 4450568411656554650)))));
        var_32 -= 65518;
        arr_38 [i_9] = ((((((arr_36 [i_9]) ? (arr_36 [i_9]) : (arr_36 [i_9])))) ? ((min((arr_35 [i_9 - 1]), (arr_35 [i_9 - 1])))) : (arr_34 [i_9])));
        var_33 = (max(var_33, ((347866083 ? (((arr_36 [12]) ? 4287627254 : ((((arr_35 [0]) | (arr_36 [10])))))) : (!16183)))));
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 20;i_10 += 1)
    {
        arr_42 [i_10] = -1177232134;
        arr_43 [i_10] = (((arr_41 [i_10] [i_10]) ^ ((1893828249 ? -1205477970 : -16187))));
    }
    #pragma endscop
}
