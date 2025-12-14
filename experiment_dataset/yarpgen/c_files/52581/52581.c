/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] = ((1510011469 ? (arr_3 [i_0] [i_0 + 4]) : var_7));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = (7 >> 1);
                            var_17 = ((-(((arr_11 [i_0] [i_3] [i_2] [i_0] [i_2] [i_3]) ? var_1 : (arr_10 [i_0] [i_1] [i_2] [i_3])))));
                            arr_17 [i_0] = (((((arr_2 [i_4] [i_0]) ? (arr_13 [i_4]) : 1510011469)) & (arr_14 [i_0 + 1] [i_4])));
                        }
                    }
                }
            }
            arr_18 [i_0] [i_0] [i_0] = (((arr_13 [i_0]) && (!28999)));
        }

        for (int i_5 = 4; i_5 < 22;i_5 += 1)
        {
            arr_21 [i_0] [i_0] [i_5] = ((!(((+(((arr_9 [i_0] [i_0] [i_0]) ? (arr_10 [i_0 + 1] [i_0] [i_0 + 1] [i_5]) : var_11)))))));
            arr_22 [i_0] [i_0] = ((+(min((arr_3 [i_0 + 4] [i_5]), (arr_3 [i_5 + 1] [i_0 - 1])))));
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_18 = 2784955827;
            var_19 = (arr_6 [i_0] [i_0 + 3] [i_0 + 1]);

            /* vectorizable */
            for (int i_7 = 3; i_7 < 22;i_7 += 1)
            {
                arr_30 [i_0] [i_0] [i_0] [12] = (((((arr_7 [i_0 + 1] [i_6] [i_6] [20]) & (arr_13 [i_0 + 2]))) << (((!(arr_13 [i_7]))))));

                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    var_20 = ((!(((248 ? (arr_2 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))));
                    var_21 = (!var_6);

                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        var_22 = (min(var_22, (((194 ? (arr_5 [i_0 + 4] [i_7 - 3] [i_7 + 1]) : (arr_4 [0] [0]))))));
                        arr_36 [i_0] = (((5807742950278237364 ? 2784955827 : var_16)));
                        arr_37 [i_0] [i_0] [i_7] [i_0] [i_0] = var_5;
                        var_23 = (min(var_23, 15));
                    }
                    var_24 = (arr_7 [i_0 - 1] [i_7] [i_7] [i_7 - 2]);
                    var_25 = (max(var_25, (arr_33 [i_6] [2])));
                }
                for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
                {
                    var_26 = (min(var_26, (((1805397224 ? (arr_5 [i_10] [i_7 + 1] [i_6]) : var_5)))));

                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        arr_43 [i_10] [i_10] [i_10] [i_0] = (~50386);
                        arr_44 [i_0] [i_6] [i_0] [i_0] [i_0] = var_1;
                        arr_45 [i_0] [i_0] [i_11] [i_10] [i_11] [i_10] [i_11] = ((1 ? 38 : 2253978205));
                        var_27 = var_3;
                        var_28 = 15149;
                    }
                    for (int i_12 = 2; i_12 < 21;i_12 += 1)
                    {
                        arr_50 [i_0] [i_10] [i_0] [10] = (((arr_23 [5]) ? (arr_7 [i_0] [i_6] [i_7] [i_12]) : ((((!(arr_2 [i_0 + 3] [i_0])))))));
                        var_29 = 8710;
                        var_30 = (((arr_19 [i_0 + 1] [i_12 + 1] [i_12]) ? -547433188297777116 : var_1));
                    }
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        var_31 = (arr_42 [i_0 + 2] [i_0] [i_0 + 4] [i_0 + 4] [i_0]);
                        var_32 = (((~(arr_20 [i_0]))));
                        arr_54 [i_0 + 2] [i_0] [i_6] [i_0] [i_10] [i_13] = (!-1321984433);
                        var_33 = (min(var_33, 0));
                        arr_55 [i_6] [i_7] [i_10] [6] &= (arr_46 [i_0] [i_13] [i_7] [i_13] [i_13]);
                    }
                }
                for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
                {
                    var_34 = (arr_29 [i_0] [i_0 - 1] [i_7 + 1]);
                    var_35 = ((~(arr_19 [i_0 + 2] [i_0 + 4] [i_0 + 3])));
                }
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    var_36 = (((!var_13) && (arr_26 [i_0 + 3] [i_0 + 3] [i_7 - 3])));
                    var_37 = (var_2 ? (((2040989091 <= (arr_23 [i_0 - 1])))) : 0);
                    var_38 = ((11671859452969314294 ? 895858203 : 19));
                    var_39 = var_16;
                }
            }
        }
        arr_63 [i_0] = (2784955827 || 2040989107);
        var_40 = (1332397344 && -35);
    }
    for (int i_16 = 1; i_16 < 19;i_16 += 1) /* same iter space */
    {
        var_41 = var_5;
        var_42 = (arr_56 [i_16] [3] [i_16] [i_16]);
    }
    var_43 = (((-((var_9 ? var_1 : var_0)))));
    var_44 = (((((min(var_4, 18446744073709551597)) ? ((var_3 ? var_14 : 1)) : ((min(var_14, var_15)))))));
    var_45 = (max(((((!47) ? 0 : var_2))), (max(var_1, 17242493422100341018))));
    var_46 = (max(var_46, var_6));
    #pragma endscop
}
