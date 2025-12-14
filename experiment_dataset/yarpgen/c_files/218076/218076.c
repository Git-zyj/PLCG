/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [8] [i_0] [i_0] [i_0] [i_0] = ((((((arr_11 [i_0]) || (arr_4 [i_1] [i_2] [i_4])))) >= ((((max(9767, var_14))) ? ((max(-9768, -9768))) : ((max(var_12, 9773)))))));
                                arr_14 [i_0] [i_1] [i_2] = (max((max(var_4, var_11)), -9756));
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] [i_2] = 60362;
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 3; i_5 < 10;i_5 += 1)
    {
        var_18 = ((-6349 ? (~13627) : (arr_17 [i_5 - 3] [i_5 - 3])));
        arr_18 [i_5] = 9758;
        arr_19 [i_5] = (arr_17 [i_5 - 3] [i_5 - 3]);
    }

    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        arr_23 [1] = (((((-1 ? ((max(9767, -32741))) : ((7 ? 22278 : -32723))))) ? 9767 : (arr_21 [i_6])));

        /* vectorizable */
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            arr_28 [i_6] [i_6] [i_7] = (((((~(arr_25 [i_6] [i_6] [i_7])))) ? ((var_6 ? var_7 : -6330)) : ((((arr_27 [i_7]) || -32758)))));
            arr_29 [i_6] = var_9;
        }
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        arr_32 [i_8] = (max(var_13, ((max(-6311, 9758)))));

        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            arr_35 [i_9] = (((((arr_34 [i_8]) >= 63)) ? (arr_34 [i_8]) : ((max((arr_31 [i_8]), (arr_34 [i_8]))))));
            arr_36 [i_8] = (max(((((max(var_9, var_11))) ? 65535 : 32764)), (~-32741)));
            var_19 = (max(var_15, (max(var_17, var_2))));
        }
        var_20 = (max(((((1023 || -19342) >= var_0))), (max(var_11, 81))));
    }
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        var_21 = 3364;
        arr_39 [i_10] = (max((arr_38 [i_10]), (arr_38 [i_10])));
    }
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        arr_42 [i_11] = arr_34 [i_11];
        arr_43 [i_11] = ((-(((arr_37 [i_11]) ? 4 : (arr_38 [2])))));

        /* vectorizable */
        for (int i_12 = 3; i_12 < 15;i_12 += 1)
        {
            var_22 = ((24093 ? (65518 || 1604) : (arr_38 [i_11])));
            var_23 = -32766;
            arr_48 [16] [i_12 + 3] [11] = (16256 >= 3);
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 18;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 18;i_14 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_15 = 3; i_15 < 15;i_15 += 1)
                    {
                        var_24 = var_12;
                        arr_56 [7] [i_13] [i_14] [i_13] [8] [i_11] = var_13;
                        arr_57 [i_11] [12] [i_14] [i_15] [i_13] = (((arr_30 [i_11]) ? (arr_30 [i_14]) : 52534));
                    }
                    for (int i_16 = 1; i_16 < 16;i_16 += 1)
                    {
                        var_25 = 32758;
                        arr_61 [i_13] [i_13] = (!-12512);
                    }
                    arr_62 [i_13] [i_13] = (max((max(32758, 52094)), (42262 || 32767)));
                    arr_63 [i_13] = ((((max((arr_53 [i_11] [i_11] [i_13] [i_14]), (arr_53 [1] [i_11] [i_14] [i_13])))) || var_12));

                    for (int i_17 = 2; i_17 < 14;i_17 += 1)
                    {
                        arr_66 [i_13] [0] [i_13] [i_14] [i_17] [i_17] = (~-32761);
                        var_26 = (~61395);
                    }
                }
            }
        }
    }
    var_27 = (((((var_16 ? (var_15 >= -12512) : var_0))) ? 65517 : var_11));
    #pragma endscop
}
