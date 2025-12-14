/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    var_19 = min(var_17, ((((var_3 ? var_4 : var_10)) % (var_15 % 9349))));
    var_20 = -var_9;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (((min(var_1, var_2))));
        arr_4 [i_0] = (min(((var_7 & (min(var_13, (arr_2 [i_0]))))), ((max(85, 65)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_10 [i_0] [14] [i_0] = (((arr_9 [i_2 - 1] [i_2] [i_2 + 1] [13]) / ((min((arr_6 [i_0]), (arr_9 [i_0] [i_1] [i_2] [i_0]))))));
                    arr_11 [i_0] [i_0] [i_0] [i_0] = (706201022 | -86);
                    arr_12 [i_0] [i_1] [i_2] = (-var_1 * -95);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [i_2] [i_0] [i_4] [i_0] [i_1] = (arr_8 [13] [i_1] [i_2] [i_4]);
                                arr_18 [i_3] [i_1] [i_2] [5] [i_2] = var_16;
                                arr_19 [i_0] [i_1] [i_2] [i_3] [i_1] = var_8;
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (max((max((arr_15 [i_2 - 1]), (arr_7 [i_4 - 1]))), ((((345860518 / (arr_15 [i_1])))))));
                            }
                        }
                    }
                }
            }
        }
        arr_21 [i_0] = ((((min(-14593, (arr_16 [i_0])))) > var_10));
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        arr_24 [16] [16] = var_11;
        arr_25 [i_5] = ((((arr_22 [i_5]) ^ 25777)));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                arr_36 [i_6] = (arr_26 [i_8]);
                                arr_37 [i_5] [i_6] [i_7] [i_7] = var_15;
                            }
                        }
                    }

                    for (int i_10 = 1; i_10 < 16;i_10 += 1)
                    {
                        arr_40 [i_5] [15] [i_6] [i_5] [i_6] = (arr_38 [i_5] [i_7] [i_10 + 1] [i_10 + 1] [i_10 - 1] [i_10 + 1]);
                        arr_41 [i_5] [i_5] [i_10] = (706201016 - -62);
                        arr_42 [i_5] [11] [13] [10] = var_3;
                        arr_43 [i_6] [i_6] [i_7] [i_10] [i_6] [i_10] = ((~(arr_23 [i_6] [i_6])));
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        arr_48 [10] [i_6] = var_9;
                        arr_49 [i_6] [i_6] [i_7] [i_6] = var_1;
                        arr_50 [i_5] [1] [i_7] [10] [16] [i_5] = 1;
                        arr_51 [2] [i_6] [i_6] [i_11] [i_11] = var_4;
                    }
                }
            }
        }
        arr_52 [i_5] = var_3;
    }
    #pragma endscop
}
