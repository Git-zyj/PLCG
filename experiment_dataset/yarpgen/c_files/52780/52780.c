/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_9 > (var_8 >= 1))))) >= (1 / -var_6));
    var_11 = (min((((min(var_7, 238)))), (((!var_7) | 0))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 = (arr_8 [i_2 - 2] [i_2]);
                    arr_9 [1] [i_2] [i_2] [i_0] = ((((max((min(779218691, 0)), (-43 | 175)))) ? (arr_8 [i_0] [i_2]) : 175));
                    var_13 = var_5;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 10;i_4 += 1)
            {
                {
                    var_14 = (((!812093752) == (arr_10 [i_0] [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_25 [i_0] [i_3] [i_4] [11] [7] = (65535 <= 175);
                                var_15 = 65535;
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 11;i_9 += 1)
                {
                    {
                        var_16 = ((!((7914189654324093144 >= (arr_8 [i_9] [i_9])))));
                        var_17 = var_4;
                        var_18 = ((-((((67 && var_1) <= var_8)))));
                    }
                }
            }
        }
        var_19 = ((-(3557041641321027539 | var_4)));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
    {
        var_20 = (var_7 % var_0);
        var_21 = (((((!(arr_8 [i_10] [0])))) & ((((arr_18 [i_10]) >= 32767)))));
        arr_36 [i_10] = (~((((arr_32 [8]) != (arr_13 [i_10])))));
    }
    for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
    {
        var_22 = (min((max((532093480 + var_7), (((arr_5 [8] [i_11]) + var_8)))), (arr_10 [i_11] [i_11] [i_11])));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                {
                    arr_46 [i_11] [i_12] = (min((((!(arr_37 [i_11] [9])))), (max(3557041641321027539, (max(var_1, var_3))))));

                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        arr_50 [i_11] [i_11] [i_11] [i_11] = ((0 > (arr_10 [i_11] [1] [i_14])));
                        arr_51 [i_11] [i_11] [i_13] [i_14] = (var_9 <= -var_1);
                        var_23 = (arr_27 [i_11] [i_12]);
                        arr_52 [7] [i_11] [1] = ((-((var_4 ? var_2 : (arr_15 [i_13])))));
                        var_24 = (~4294967295);
                    }
                    /* vectorizable */
                    for (int i_15 = 1; i_15 < 11;i_15 += 1)
                    {
                        arr_55 [i_11] [i_15] = -var_5;
                        arr_56 [i_11] [i_12] [i_12] [1] [i_12] [i_12] = var_9;
                    }
                    for (int i_16 = 0; i_16 < 12;i_16 += 1)
                    {
                        var_25 = (((((((-(arr_39 [i_11])))) / ((var_3 | (arr_16 [i_11] [i_12] [i_13] [i_13]))))) < ((((((var_4 ^ (arr_26 [i_11] [i_12] [0]))) != (1 ^ var_2)))))));
                        var_26 = (((((134 ? 3094528749 : 0) >> (8739876184738471237 - 8739876184738471234)))));
                        arr_59 [i_11] [3] [i_16] = ((-((((arr_17 [i_11] [i_11]) == (arr_53 [i_11] [i_11] [i_11] [i_11]))))));
                        arr_60 [i_16] [i_13] [i_11] [i_11] [i_12] [i_11] = ((!(((~((var_9 ? (arr_38 [i_11] [i_16]) : var_5)))))));
                        arr_61 [i_11] = ((var_6 || (((~(arr_10 [9] [i_13] [7]))))));
                    }
                    arr_62 [i_11] [i_13] [i_11] [i_11] = (max((((!((((arr_47 [i_11] [i_12] [i_13]) | (arr_34 [i_11]))))))), var_4));
                }
            }
        }
        var_27 = -var_6;
        arr_63 [i_11] = ((((((120 >= var_7) >= (arr_16 [i_11] [i_11] [i_11] [i_11])))) > (((arr_33 [i_11] [i_11]) + var_9))));
        var_28 = (((~var_9) ^ (min(var_0, (2075201289 | var_7)))));
    }
    #pragma endscop
}
