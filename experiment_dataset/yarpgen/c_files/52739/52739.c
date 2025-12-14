/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    var_17 = ((var_0 ? var_3 : ((-var_9 ? ((var_12 ? var_10 : var_8)) : var_2))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0 + 1] [i_0] = (!((!((((arr_4 [i_0]) * (arr_5 [i_0] [i_1])))))));
                var_18 = (arr_4 [i_1 - 3]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_19 = var_7;
                    arr_15 [i_4] [i_4] [i_4] = ((+((((arr_12 [i_2] [i_2]) >= -var_10)))));
                    var_20 = (arr_8 [i_4]);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_21 = 32;
                                arr_21 [i_6] [i_4] [i_4] [i_4] [i_2] = (((var_6 <= var_15) * (((((arr_9 [i_6] [8]) >= (arr_8 [i_3]))) ? -var_12 : (arr_19 [i_6] [4] [i_4] [4] [i_6])))));
                                var_22 += arr_9 [i_2] [i_3];
                                var_23 = (16345713750263399476 && 211);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 9;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                var_24 = 7979585321155444728;
                var_25 = (min(var_25, 44978));

                /* vectorizable */
                for (int i_9 = 3; i_9 < 10;i_9 += 1) /* same iter space */
                {
                    arr_30 [i_9] [i_7 + 1] = 32;
                    var_26 = (((!var_11) / (arr_8 [i_7])));
                    var_27 *= (-17148 && 0);
                }
                for (int i_10 = 3; i_10 < 10;i_10 += 1) /* same iter space */
                {
                    arr_34 [i_7] [i_8] [i_10] [10] = -var_4;
                    var_28 = (min(var_28, -20554));
                    arr_35 [i_10] [i_8] [i_10] [i_10] = (arr_23 [i_7] [i_7]);
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_29 = (arr_10 [i_8] [i_7]);
                    var_30 = var_2;
                    var_31 = (min(var_31, (((-(arr_18 [15] [14] [i_8] [i_8]))))));

                    for (int i_12 = 2; i_12 < 11;i_12 += 1)
                    {
                        var_32 = (arr_31 [i_12] [8] [i_11] [2]);
                        arr_42 [i_7] [5] [i_7] [i_7 + 2] [4] = arr_1 [i_12];
                        var_33 = (min(var_33, (~-var_14)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
