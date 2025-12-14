/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((((var_5 ? var_8 : var_0)) ^ var_4))) ? (min((min(var_2, var_3)), var_9)) : var_1));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [2] [i_0] [i_0] = ((((var_2 ? var_2 : (~var_10)))) ? (((!var_3) ? var_2 : var_3)) : ((((((var_9 ? var_2 : var_7))) ? ((var_0 ? var_9 : var_1)) : (var_1 - var_9)))));
                                arr_12 [0] [9] [i_0] [i_3] [i_3] = (((~var_9) | (((((var_6 ? var_0 : var_10))) ? var_2 : var_9))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] = ((!(~var_0)));
                }
            }
        }
        arr_14 [i_0] = ((var_7 ? var_8 : ((max((var_2 && var_9), (min(var_10, var_9)))))));
        arr_15 [12] = var_0;
    }
    for (int i_5 = 3; i_5 < 18;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            arr_22 [i_5] [i_5] [i_5 - 2] = ((var_0 ^ (((var_1 ? var_9 : var_9)))));
            arr_23 [i_5] = var_7;
            arr_24 [i_5] = -var_10;
            arr_25 [i_5] = var_1;
            arr_26 [i_5] [i_6] = (min(((((max(var_10, var_2)) > var_5))), (((var_7 <= var_5) ? ((var_0 ? var_1 : var_5)) : ((var_3 ? var_9 : var_4))))));
        }
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                {
                    arr_33 [i_7] [i_7] [i_7] [i_8] = ((1 ? var_1 : (((!((min(var_1, var_9))))))));
                    arr_34 [i_5 - 1] [i_7 + 1] [i_5 - 1] [i_7] = var_3;
                }
            }
        }
        arr_35 [i_5] = ((~(min((((var_10 ? var_0 : var_5))), (min(var_6, var_8))))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 18;i_11 += 1)
                {
                    {
                        arr_46 [i_5 - 3] = (min((((1 ? var_0 : var_7))), (max((max(var_2, var_6)), (((var_9 ? var_3 : var_7)))))));
                        arr_47 [i_5] [i_5] [i_5] [i_5] [i_5] |= min(((-var_8 ? ((var_6 ? var_3 : var_7)) : ((max(var_4, var_10))))), -var_2);
                    }
                }
            }
        }
    }
    for (int i_12 = 3; i_12 < 18;i_12 += 1) /* same iter space */
    {
        arr_52 [i_12 + 2] = ((min(((max(var_1, var_10))), (~var_7))));
        arr_53 [i_12 + 2] |= (max(var_8, ((var_2 ? (min(var_8, var_2)) : (min(var_2, var_5))))));
        arr_54 [i_12] [i_12] = ((var_4 ? ((((!(((var_5 ? var_8 : var_2))))))) : (((((var_4 ? var_9 : var_2))) ? var_6 : (((var_4 ? var_4 : var_7)))))));
    }
    for (int i_13 = 3; i_13 < 18;i_13 += 1) /* same iter space */
    {
        arr_58 [i_13] = ((((((((var_10 ? var_4 : var_8))) ? var_10 : var_2))) ? ((var_7 ? var_0 : var_4)) : var_5));
        arr_59 [i_13] = ((((((var_7 ? var_8 : var_0)))) ? ((((min(var_1, var_0))) ? var_7 : ((var_10 ? var_5 : var_7)))) : ((175 ? -113 : 0))));
        arr_60 [i_13] [i_13 + 2] = max(((~((var_10 ? var_10 : var_2)))), ((((var_4 ? var_0 : var_3)) - (((var_0 ? var_10 : var_9))))));
        arr_61 [i_13] = (var_7 / var_3);
    }
    var_12 = ((((max(var_8, -8136611256749968590))) ? (var_9 * var_9) : ((~((var_9 ? var_6 : var_9))))));
    #pragma endscop
}
