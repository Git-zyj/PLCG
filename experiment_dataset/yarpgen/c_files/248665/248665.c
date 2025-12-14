/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (min(var_15, var_11));
                arr_5 [i_0] = ((((((var_0 <= var_0) ? (arr_2 [i_0] [i_0]) : (arr_1 [i_0])))) || ((((arr_2 [i_0] [i_0 + 1]) + (arr_0 [i_0 - 1]))))));
            }
        }
    }

    for (int i_2 = 4; i_2 < 12;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_18 [i_5] [i_3] [i_3] [i_3] [i_2] [i_6] = (((((min((arr_16 [i_5]), var_11)) > 5422787097100918596)) ? ((((arr_6 [i_2 - 2]) <= (arr_17 [i_2] [i_3] [i_4] [i_5 - 3] [i_4])))) : ((((5422787097100918579 < -48) == 5422787097100918580)))));
                                var_16 = (((~var_8) | 222));
                                arr_19 [i_2 + 2] [i_3] [i_3] [i_2] |= (((arr_10 [i_2] [i_2]) <= ((5422787097100918580 ? 255 : 13023956976608633022))));
                            }
                        }
                    }
                    var_17 = var_10;
                    var_18 = (255 <= 235);
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_19 = ((!((((arr_22 [i_8]) ? var_6 : (arr_6 [i_3 + 1]))))));
                                arr_25 [i_8] [i_8] [i_4 + 2] [i_8] [i_2 + 1] = 13023956976608632994;
                                var_20 = ((var_10 ? (max(((var_7 ? 5422787097100918565 : 5422787097100918580)), (((var_12 || (arr_24 [3] [i_3] [i_4] [i_7] [0] [i_7])))))) : (min((~208), ((0 ^ (arr_24 [i_2] [i_3] [i_3] [i_7] [i_3] [i_4 + 1])))))));
                            }
                        }
                    }
                }
            }
        }
        arr_26 [14] = (max((((arr_20 [i_2 - 1] [i_2 - 2] [i_2 - 4] [i_2 - 4] [i_2]) + (arr_20 [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_2] [i_2 + 2]))), ((max(var_2, var_5)))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    {
                        var_21 *= ((((var_1 ? var_10 : var_13)) >= var_2));

                        for (int i_12 = 1; i_12 < 14;i_12 += 1) /* same iter space */
                        {
                            var_22 = ((var_8 + ((((9489260337397335317 >> (251 - 218)))))));
                            arr_36 [i_9] [i_9] [i_12] [i_9] [i_12] = (arr_10 [i_2 - 3] [i_9]);
                            var_23 = var_12;
                        }
                        for (int i_13 = 1; i_13 < 14;i_13 += 1) /* same iter space */
                        {
                            var_24 = ((((max((((var_5 < (arr_22 [i_10])))), 83))) / (arr_7 [7])));
                            arr_40 [i_2] [i_9] [i_2] [i_2] [i_13] [i_9] [i_9] = var_13;
                        }
                    }
                }
            }
        }
    }
    var_25 = (min(var_25, var_0));
    #pragma endscop
}
