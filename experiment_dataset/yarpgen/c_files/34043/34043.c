/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((((-120629449 ? var_2 : var_8))) ? (~var_1) : ((var_11 ? 0 : var_2)))) / 9420));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, ((min(var_3, (!26733))))));

                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        var_17 = 21967;
                        var_18 = (min((((!(!-6430)))), (min((~-4750657399355994060), 1))));
                        arr_13 [i_0 + 2] [i_0 + 2] [i_0] [i_1] [i_0 + 2] = ((((arr_3 [i_0 + 1] [9] [i_0]) ? ((max(26750, (arr_7 [i_3] [i_0])))) : ((min((arr_11 [i_2] [i_3 + 2]), (arr_9 [i_0] [3] [i_2] [i_2])))))));
                        var_19 = (min(var_19, (var_13 | var_0)));
                        arr_14 [i_0] [i_1] = (!0);
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                    {
                        arr_19 [i_0 - 1] [i_1] [i_1] [i_0] [i_0 - 1] [i_2] = var_14;
                        arr_20 [i_0] [i_0 + 1] [i_4] [i_1] [i_2] [12] |= (((var_11 ? (((-24715 ? 0 : 602421564))) : ((var_11 ? 26748 : var_11)))));
                        arr_21 [i_0] [i_0] [i_0 + 2] [i_0] [i_0 + 1] [i_0] = (((1719659052 ? ((var_6 ? 1 : var_0)) : ((~(arr_12 [i_0]))))));
                    }
                    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 3; i_6 < 10;i_6 += 1)
                        {
                            var_20 = ((((!(0 | 0)))));
                            arr_27 [i_0] [i_0] [i_0] [i_0] = ((~((((arr_11 [2] [i_2 + 2]) && (((arr_10 [i_6] [i_0] [1] [i_6] [i_6 - 2] [6]) <= var_14)))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_31 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 2] = (((arr_29 [i_0 + 2]) <= (var_4 * 92)));
                            var_21 = -44;
                            arr_32 [i_0] [i_1] [i_2] [i_1] [i_0] = ((1 < (arr_7 [i_2 - 2] [i_0 - 1])));
                            arr_33 [i_0] [i_1] [i_1] [i_5] [i_7] = (arr_3 [i_0 + 1] [i_0 + 2] [i_0]);
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_22 = (max(var_22, -var_11));
                            arr_36 [i_0 + 1] [i_0 + 1] [i_0] [i_1] [i_8] [i_0 + 1] [i_8] = var_10;
                        }
                        var_23 ^= max((((-105 || 4029541333736608131) ? (arr_16 [i_0]) : (arr_35 [i_5] [i_2] [8] [i_0 + 2] [i_0]))), ((min((arr_5 [i_0 - 1] [i_2 + 2]), (arr_5 [i_0 + 2] [i_2 + 1])))));
                        var_24 = (max(var_24, ((((-65535 - 0) || ((min(-65535, -111))))))));
                    }
                    for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
                    {
                        arr_40 [i_0] [i_1] [i_2] [i_1] [1] [i_9] = ((-var_5 ? (max((max(var_5, (arr_25 [i_9] [13] [i_2 + 2] [i_0] [i_0]))), (arr_0 [i_0] [i_0 + 1]))) : (56 + -21023)));
                        arr_41 [i_0] [i_0] [i_2 - 2] [1] [i_9] [i_9] = (var_13 * (max((arr_28 [i_9] [4] [i_9] [i_2 + 1] [2] [i_0 + 1]), var_14)));
                        var_25 = (2 * ((3227 ? 87 : var_12)));
                    }
                    var_26 = ((var_7 ? (min(4029541333736608131, 8343565492943160304)) : (((-(var_6 + var_10))))));
                    arr_42 [i_0] [i_0] [i_0] = ((~(-var_14 || var_3)));
                }
            }
        }
    }
    var_27 = 1;
    var_28 = (min(var_28, (((((((((var_7 ? var_14 : var_3))) ? 0 : ((4294967295 ? var_9 : var_11))))) ? 6849897956038498635 : ((((((var_9 ? var_3 : var_9)) > 1)))))))));
    var_29 |= ((65535 - (((var_6 == var_11) ? (127 + 77) : (min(-17574, 2305843009213693952))))));
    #pragma endscop
}
