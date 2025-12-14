/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_17 = (~var_1);
        var_18 = (var_12 + var_3);
        arr_2 [i_0] = ((((min(var_12, ((var_13 ? var_6 : var_11))))) ? (((!(arr_1 [i_0 - 1])))) : (arr_1 [i_0 + 1])));
        arr_3 [i_0] [i_0] = var_10;
        arr_4 [i_0] = ((((min(var_7, var_9))) ? (((min(var_8, var_9)))) : (var_2 <= var_13)));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_19 = (((((((min((arr_7 [i_1]), -126))) % var_1))) ^ var_14));
        var_20 = var_3;
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                {
                    arr_18 [i_3] [i_3] [i_4] = 9;
                    var_21 = (min((((var_11 ? 2147483647 : (arr_13 [i_4 + 1] [i_3 - 3])))), (8 - var_14)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 11;i_6 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        arr_27 [i_2] [i_5] = 2939439349104898352;
                        arr_28 [i_2] [1] [i_6 - 2] [i_5] = -var_1;
                        var_22 = 18446744073709551610;
                    }
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        var_23 = (min((var_14 >= var_9), var_15));
                        var_24 = ((((min((arr_16 [i_2] [i_5 + 3] [i_8] [0]), -2147483625))) && (((arr_24 [i_2] [i_6] [i_5]) && (!1)))));
                        var_25 = (((((-127 - 1) || 116)) ? 31 : 65535));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 12;i_10 += 1)
                        {
                            {
                                var_26 = (!18594);
                                arr_36 [i_2] [i_5] = (min((max(var_1, (arr_17 [i_5] [i_6 + 2] [i_2] [i_5]))), ((((var_4 <= 110) <= ((var_4 ? var_2 : var_15)))))));
                                arr_37 [i_9] [i_5] [5] [i_5] [i_2] = ((((min(((max(var_12, (arr_23 [i_2] [9] [i_5])))), ((var_1 ? var_5 : var_0))))) ? (min((-2147483631 || var_0), var_10)) : (((151 && ((min((arr_26 [i_2] [i_2]), (arr_29 [i_5])))))))));
                            }
                        }
                    }
                    arr_38 [2] [i_5] [i_5] [i_5] = ((~((2939439349104898354 ? (arr_13 [i_6 - 2] [i_5 - 2]) : 15507304724604653263))));
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 11;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            {
                                arr_45 [i_2] [2] [2] [i_5] [i_12] [i_5] [i_5] = ((var_7 ? ((min((var_16 % 13), ((min(36, var_1)))))) : ((2939439349104898352 * (((max(var_4, var_9))))))));
                                arr_46 [2] [i_6 + 1] [2] [i_5] = var_3;
                                var_27 = (((-1966380116 | var_1) ? ((3251102456 ? var_3 : var_10)) : var_2));
                            }
                        }
                    }
                    var_28 = -var_9;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 13;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 9;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 10;i_15 += 1)
                {
                    {
                        var_29 = var_4;
                        var_30 = var_2;
                        var_31 = (((arr_50 [i_2] [5] [i_15 + 3]) ? ((((min(var_6, var_3))) ? ((max(var_4, var_7))) : var_15)) : (((-1312754090 ? var_13 : var_9)))));
                    }
                }
            }
        }
    }
    var_32 = var_11;
    #pragma endscop
}
