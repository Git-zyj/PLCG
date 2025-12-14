/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_14 = 511;
        var_15 = (min(var_15, 1615166287));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 7;i_1 += 1)
    {
        arr_4 [i_1] = (arr_3 [i_1]);
        arr_5 [4] &= (arr_1 [i_1]);
        arr_6 [i_1] = ((var_3 ? var_7 : (var_13 > var_11)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {

                    for (int i_4 = 1; i_4 < 9;i_4 += 1)
                    {
                        var_16 = var_2;
                        var_17 = (max(var_17, (~var_9)));
                    }

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_18 = ((~(arr_18 [i_1] [i_2] [i_2])));
                        var_19 = 161;
                        var_20 = (((var_7 ? var_6 : (arr_10 [i_1] [i_2]))));
                    }
                    for (int i_6 = 3; i_6 < 9;i_6 += 1)
                    {
                        arr_22 [i_2] [5] [i_1] = var_10;
                        var_21 = var_5;
                        var_22 = (min(var_22, var_2));
                    }
                    arr_23 [i_1] [i_1] [i_2] [i_3] = (arr_14 [i_1 + 3] [i_1] [i_1] [i_1 + 2]);
                    var_23 = (min(var_23, (((1615166298 ? 1615166287 : 3824709744)))));
                    var_24 = ((var_0 != ((var_12 ? var_0 : var_6))));
                }
            }
        }

        for (int i_7 = 1; i_7 < 8;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    {
                        arr_31 [i_1] [i_7 - 1] [0] [i_8] [2] = ((var_13 ? var_9 : (((var_1 ? var_11 : var_7)))));
                        var_25 = (min(var_25, 2773779904741164918));
                        arr_32 [i_1] [i_1] [i_8] [i_9] = var_12;
                    }
                }
            }
            var_26 = (((arr_14 [i_1] [i_1] [i_7 - 1] [i_1]) - (arr_14 [i_7] [i_1] [i_1] [i_1])));
        }
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            /* LoopNest 3 */
            for (int i_11 = 3; i_11 < 9;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 8;i_13 += 1)
                    {
                        {
                            arr_44 [i_13 - 1] [i_1] [i_12] [i_11] [7] [i_1] [i_1] = (((arr_8 [i_1 + 3] [i_1]) == (((((arr_15 [i_1]) || var_5))))));
                            var_27 = var_6;
                            arr_45 [i_1] [i_1] [i_11 + 1] [i_11 - 3] [i_1] [i_1] = ((var_8 ? (arr_43 [i_1] [i_1 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 1]) : ((((arr_17 [i_1] [i_1]) || (arr_1 [i_13]))))));
                        }
                    }
                }
            }
            var_28 = ((((var_9 ? (arr_35 [i_1]) : (arr_43 [i_10] [i_10] [i_1] [i_1] [i_1])))) ? (((-1615166288 ? 63 : 61258))) : var_0);
        }
    }
    for (int i_14 = 0; i_14 < 25;i_14 += 1)
    {
        arr_49 [i_14] = var_1;

        /* vectorizable */
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            var_29 -= (~var_8);
            arr_53 [i_15] [i_14] = var_7;
        }
        for (int i_16 = 0; i_16 < 25;i_16 += 1)
        {
            var_30 = (((arr_54 [i_16]) ? (var_1 % var_0) : (arr_54 [i_14])));
            var_31 -= ((((min(var_9, ((((var_3 + 2147483647) << (((var_3 + 127) - 15)))))))) ? (((var_8 + 9223372036854775807) >> ((max(var_3, var_11))))) : -3335070363869882923));
            var_32 = (max(var_32, (((((min(var_6, var_4))) >= (arr_46 [1] [1]))))));
            var_33 = 10519156625527124250;
            var_34 = ((~(max(var_9, (arr_56 [i_14] [i_14])))));
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 25;i_17 += 1)
        {
            var_35 = (arr_57 [i_14] [i_14] [i_14]);
            arr_59 [i_14] = var_5;
        }
    }
    for (int i_18 = 1; i_18 < 20;i_18 += 1)
    {
        var_36 = (max(var_36, ((((((~(arr_50 [4])))) || ((((var_6 ? var_4 : (arr_58 [i_18 - 1]))))))))));
        var_37 = 1615166287;
    }
    var_38 = var_6;
    var_39 = (min(var_39, (var_2 || var_13)));
    #pragma endscop
}
