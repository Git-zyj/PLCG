/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((min((-1 + 151), 12212459558881793940)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_15 = arr_1 [i_2 - 1];
                            var_16 = ((-(max((min((arr_1 [i_3 + 1]), (arr_8 [14] [3]))), (arr_11 [i_3 + 1] [i_3] [i_3 - 4] [i_3 + 2] [i_3])))));
                            var_17 = ((((max((arr_11 [i_3 + 1] [10] [12] [i_2 + 1] [i_1]), (arr_13 [i_2 - 1] [i_3 - 1] [i_3 - 1] [i_3] [6] [i_3])))) ? ((min((arr_12 [i_2 + 1] [i_1] [i_0] [3] [i_3 + 1]), (arr_13 [i_2 + 1] [i_1] [i_2 + 1] [i_3] [i_3 - 4] [i_1])))) : ((2627982176128929507 ? 321815128 : 3700960895))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                {
                    var_18 = -5428673080040045593;
                    arr_18 [i_1] [i_4] = (max(321815128, var_6));
                    arr_19 [1] [1] [8] [i_4] = var_9;
                    var_19 = (min(var_19, ((min((max(594006421, var_9)), ((max((arr_8 [i_0] [i_1]), var_12))))))));
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    var_20 = ((((min((arr_13 [i_5] [6] [i_5] [i_1] [i_0] [i_0]), 92))) | ((-(arr_14 [i_0] [i_1] [i_5])))));

                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        var_21 = var_4;

                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            arr_29 [i_0] [6] [i_5] [i_6] [14] [i_7 - 1] = var_5;
                            var_22 = ((var_5 ? (arr_12 [i_7 + 2] [i_7 + 2] [i_6 - 1] [i_6 + 2] [8]) : (max((arr_13 [i_6 - 1] [2] [i_6 - 1] [16] [15] [i_6]), (min(var_7, 3506219106))))));
                            arr_30 [i_0] [i_1] [i_5] [i_5] [i_5] = ((((!(arr_13 [i_7 + 1] [i_7 + 1] [i_6] [i_6 + 1] [0] [12]))) ? 187 : ((((-(arr_7 [i_0] [i_0] [i_5] [i_6]))) - ((((!(arr_22 [i_5] [i_7 + 1])))))))));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            var_23 = ((((((arr_10 [14] [13] [7] [i_6] [i_5] [i_6]) ? 1817754212 : 1519806836))) ? var_7 : (3973152183 > -1)));
                            var_24 = (min(var_24, var_12));
                        }
                        var_25 |= ((-((1 ? (var_0 + 1719544435) : (arr_3 [i_0] [i_6 + 2])))));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        var_26 = ((var_11 ? ((3 ? var_12 : -5428673080040045593)) : 0));
                        var_27 |= (((arr_7 [i_0] [i_1] [16] [9]) == var_5));

                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            var_28 = (min(var_28, (((-(arr_26 [6] [i_10] [i_5] [i_5] [16]))))));
                            var_29 -= (((var_5 % var_4) >= (arr_0 [i_0] [i_0])));
                        }
                        for (int i_11 = 3; i_11 < 18;i_11 += 1)
                        {
                            var_30 = (min(var_30, 31551));
                            arr_43 [i_0] [i_0] [i_1] [5] [i_9] [i_5] = 1133048093747718953;
                            arr_44 [i_0] [i_0] [i_1] [i_5] [i_5] [i_9] [i_1] |= var_11;
                        }
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            var_31 = (min(var_31, (arr_3 [i_0] [i_0])));
                            var_32 = 64805;
                            var_33 = ((-(arr_25 [i_5] [i_1])));
                        }

                        for (int i_13 = 3; i_13 < 19;i_13 += 1)
                        {
                            var_34 = (!2120422149);
                            arr_51 [i_1] [i_5] [15] [i_9] = 321815112;
                            var_35 = (arr_35 [1] [i_0] [14] [i_5] [i_9] [i_13 - 3]);
                            var_36 = (min(var_36, (arr_32 [i_0] [15] [i_5] [i_9] [i_13 + 1])));
                        }
                    }
                    arr_52 [i_0] [i_5] [7] = (max((min((arr_46 [i_5] [i_5] [i_5] [i_1] [i_0] [16]), (arr_46 [i_5] [i_1] [11] [i_0] [6] [i_0]))), (!var_0)));
                }
                arr_53 [i_0] [4] = (arr_22 [6] [i_1]);
            }
        }
    }
    var_37 = ((-(~-3708557165)));
    #pragma endscop
}
