/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (((-1425 ? var_9 : (arr_1 [i_0] [i_0]))));
        var_13 *= (((((var_5 ? ((min(-1425, 1420))) : ((((arr_1 [i_0] [i_0]) && -1421)))))) ? ((-(arr_0 [i_0]))) : (~-23492)));

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_8 [i_1 + 1] = var_9;
                var_14 = (((((5939942547725539890 ? -4487 : var_2))) ? (2782 < 1) : (arr_7 [i_0])));
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_13 [i_0] [i_4] [i_0] [i_4] = (((((~(arr_11 [i_0] [i_1] [1] [i_1 - 1] [i_3] [i_4])))) ? (((var_11 == (arr_3 [i_1 - 3] [i_1 - 3] [i_4])))) : 1425));
                    var_15 = var_2;

                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_16 = 25016;
                        arr_16 [1] [i_1 + 1] [i_1 - 3] [i_3] [i_4] [1] [0] = var_11;
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        var_17 = var_0;
                        var_18 = 2782;
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        var_19 = (arr_12 [i_4]);
                        var_20 = (arr_19 [i_1 - 3]);
                        arr_21 [i_0] [i_4] [i_3] [i_4] [i_7] = (((~-27552) ? 0 : var_4));
                    }
                    arr_22 [4] [i_1] [i_3] [i_4] [i_4] = 1334;
                    var_21 = ((-(arr_1 [i_1 - 2] [i_1 - 1])));
                }
                var_22 = (1 == (arr_1 [i_1 - 2] [i_1 - 2]));
                arr_23 [1] [i_1] = ((-(~1)));
            }
            arr_24 [i_0] [i_0] [i_1] = (max((((~((-(arr_17 [i_0] [i_1 - 3] [i_1] [i_1] [i_1])))))), (min(1420, (min((arr_3 [i_1] [i_1] [i_1]), var_6))))));
            arr_25 [i_1 - 3] [i_0] [i_0] = var_1;
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            arr_30 [i_8] [6] [i_8] = (min(((min((arr_0 [i_8]), var_2))), ((1418 ? 1 : ((1 ? 18446708889337462784 : 1326))))));
            var_23 = (max((471 != -25016), -var_8));
        }

        /* vectorizable */
        for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        {
                            var_24 = (~25016);
                            arr_42 [i_0] [i_10] [1] [10] [i_0] = (((arr_32 [i_0]) ? -481 : (arr_32 [i_9])));
                            var_25 = 18312;
                            arr_43 [i_12] [i_10] [i_12] [i_11] [i_10] [i_10] [i_0] = (((arr_31 [i_12] [i_11]) || (arr_6 [i_0] [i_9] [i_10])));
                        }
                    }
                }
            }
            var_26 = ((5134023556194453204 ? 1 : var_4));
            var_27 = (((arr_31 [i_0] [i_0]) | 1));
            var_28 *= (~var_3);
            arr_44 [i_0] [i_0] = (~10563754986015944665);
        }
        for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
        {
            arr_47 [i_0] [i_13] = ((~(max(((var_11 ? var_0 : var_9)), 1603930032979816211))));
            arr_48 [i_13] [i_13] = 215986500569329101;
            var_29 = 1;
            arr_49 [i_13] = ((-((0 ? ((max(var_11, (arr_37 [i_0] [i_13])))) : 1326))));
        }
        var_30 = ((~(~17247365039016961828)));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 12;i_14 += 1) /* same iter space */
    {
        arr_54 [i_14] [i_14] = ((arr_45 [i_14]) || (((~(arr_20 [11] [11] [i_14] [i_14] [i_14] [i_14])))));
        arr_55 [i_14] = (arr_51 [i_14]);
    }
    #pragma endscop
}
