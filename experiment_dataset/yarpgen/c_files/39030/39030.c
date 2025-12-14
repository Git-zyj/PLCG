/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_6));
    var_11 = var_8;
    var_12 = ((-(var_7 & var_2)));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = ((((-((7901877021058253232 ? (arr_0 [i_0]) : var_6))))) % var_2);
        var_13 = (max(var_13, (max(((min((arr_1 [i_0]), -17481))), ((~(arr_1 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            var_14 = 101;
            arr_8 [i_1] [i_2] [i_2] = ((-(((!(!2814185386))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                var_15 = ((~(3254557734 + 24691)));
                var_16 = -1484387792;
            }
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                var_17 = var_2;
                arr_18 [i_1] [i_1] [i_3] [i_5] = ((-72 / (arr_4 [i_1])));
                var_18 = (72 > 2814185386);
            }
            var_19 = (min(var_19, ((((123 ? 1602951715 : var_1))))));
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {

            for (int i_7 = 4; i_7 < 21;i_7 += 1)
            {
                var_20 = (max(var_20, 0));
                var_21 = (min(var_21, (-2081926615 - 3601399407109826025)));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        {
                            var_22 = 0;
                            var_23 = (~((max(var_5, (arr_27 [i_7] [i_7] [i_7 + 2] [i_7] [i_7] [i_7 - 2])))));
                            arr_31 [i_1] [i_6] [i_7 - 3] [i_6] [i_9] = 127;
                        }
                    }
                }

                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        arr_37 [i_7] = 11247594985717522907;
                        arr_38 [i_7] [i_1] = (((-(arr_36 [i_1] [i_6] [i_7] [i_7 - 1] [i_11]))));
                    }
                    var_24 = (((127 && -14) || (!-1)));
                    var_25 -= var_0;
                    arr_39 [i_10] [i_7] [i_7 - 1] [i_6] [i_1] [i_1] = (-((min(var_7, 127))));
                }
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    var_26 = (~-1484387808);
                    var_27 = ((var_7 ? (max(24775, var_0)) : 1480781910));
                    var_28 |= ((!((((arr_11 [i_7 - 2] [i_7 - 2] [i_7]) ? 56021 : var_6)))));
                    arr_42 [i_1] [i_1] [i_1] [i_6] [i_1] [i_1] = ((((min(-92, (arr_30 [i_1] [i_6] [i_7] [i_1] [i_1] [i_1] [i_1])))) * ((~(arr_30 [i_1] [i_6] [i_7] [i_12] [i_1] [i_6] [i_6])))));
                }
                arr_43 [i_1] = ((-(((!(((24781 ? var_1 : -64))))))));
            }
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                arr_46 [i_1] [i_1] [i_1] [i_1] = var_3;
                var_29 = (min((((arr_10 [i_1] [i_6] [i_1]) && (arr_10 [i_1] [i_6] [i_13]))), (!-1750)));
                arr_47 [i_13] = 17717;
                arr_48 [i_1] [i_6] [i_6] [i_6] = ((-((-(arr_27 [i_1] [i_6] [i_1] [i_6] [i_1] [i_13])))));
                arr_49 [i_1] [i_6] [i_13] [i_13] = (~((~(arr_4 [i_1]))));
            }
            for (int i_14 = 0; i_14 < 23;i_14 += 1)
            {
                arr_53 [i_1] [i_6] [i_14] [i_14] = ((min(3, 50809)));
                var_30 = (min((min((arr_40 [i_1] [i_6] [i_14] [i_14]), (arr_40 [i_1] [i_1] [i_6] [i_14]))), ((((((min(0, -8223))) + 2147483647)) << (!5918)))));
                arr_54 [i_1] [i_6] [i_14] [i_14] = (2837643789536575900 | 1393138384);
                /* LoopNest 2 */
                for (int i_15 = 2; i_15 < 22;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 23;i_16 += 1)
                    {
                        {
                            arr_60 [i_1] [i_6] [i_14] [i_15] [i_16] = (((~var_9) > (((-(!var_5))))));
                            arr_61 [i_6] [i_15] [i_16] = var_7;
                            var_31 = ((((min((arr_7 [i_1]), 0))) ? (arr_21 [i_6] [i_16]) : 29758));
                            arr_62 [i_16] [i_15] [i_15 + 1] [i_1] [i_6] [i_1] = 2608822303;
                        }
                    }
                }
            }
            arr_63 [i_1] [i_6] [i_1] = 1686144993;
        }
        var_32 = 17173;
        var_33 = (var_1 ? (~2608822328) : (min(((((arr_44 [i_1] [i_1] [i_1]) & -8804))), (min(-9825, 14243022269719928393)))));
    }
    #pragma endscop
}
