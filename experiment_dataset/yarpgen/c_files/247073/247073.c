/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 48346;
    var_11 -= ((((var_4 / (var_5 ^ var_3))) >= var_5));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_0] [i_0] [5] [i_0] [i_3] = (arr_13 [i_0] [i_2] [i_3]);
                        arr_16 [8] [i_3] = -894851696;
                        var_12 = (((((max((arr_8 [i_0] [8] [i_1] [i_0]), 0)) ? (max(0, (arr_7 [i_0] [14] [1] [i_3]))) : var_1)) * (((arr_7 [i_2 + 1] [1] [i_2 - 2] [i_2 - 2]) ? (arr_11 [i_2 + 1] [i_2 + 2] [i_2] [i_2 + 1] [i_2 + 1]) : (arr_7 [i_2 - 2] [i_2] [19] [i_2 - 2])))));
                        var_13 = (max((((var_6 ? var_9 : (arr_4 [i_2 + 2])))), (((arr_6 [i_2 - 2] [i_2 - 1] [i_2 - 2]) & (arr_4 [i_2 - 2])))));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                    {
                        var_14 = (min(var_14, (((((1 ? (arr_3 [i_2 + 1]) : (max((arr_6 [i_0] [i_0] [i_0]), (arr_17 [10])))))) ? var_9 : (max((max((arr_12 [i_0] [i_1] [i_2 - 1] [i_4]), (arr_10 [i_0] [i_0] [i_2 + 2] [i_2 + 2]))), var_5))))));
                        var_15 = (max(var_15, var_5));
                        var_16 = (max((max(var_8, (arr_20 [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_2 + 1] [i_2]))), ((max((var_9 <= 2147483520), (arr_18 [i_2 + 1] [i_1] [i_2] [i_4] [i_2]))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                    {
                        var_17 ^= (arr_14 [1] [i_2 - 2]);
                        var_18 = (max(var_18, ((((arr_20 [i_0] [i_0] [i_0] [0] [i_2 + 1]) + (arr_20 [1] [1] [1] [1] [i_2 + 1]))))));
                        var_19 &= ((var_5 * (arr_14 [i_0] [i_0])));
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                    {
                        var_20 = (max(var_20, -870966144));
                        var_21 = (min(var_21, (((((min((arr_22 [i_0] [i_2 - 2] [i_2 - 2] [i_6]), -870966144))) ? (arr_12 [i_2] [20] [i_2 - 1] [0]) : ((((((arr_17 [i_1]) / (arr_11 [i_0] [i_1] [i_0] [12] [18])))))))))));
                        var_22 &= ((var_6 >> ((((-(arr_1 [5] [i_6]))) - 3021662625))));
                    }
                    var_23 = (min(var_23, ((((((arr_21 [i_2] [i_2] [i_2 - 1] [i_2 + 2]) && 546063703))) >= ((((~var_2) == (((var_8 || (arr_0 [i_2])))))))))));
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
    {
        var_24 = ((arr_1 [i_7] [i_7]) >> (((((arr_1 [i_7] [i_7]) ? 1115466675 : (arr_1 [i_7] [i_7]))) - 1115466644)));
        var_25 = (max((max((arr_5 [i_7] [i_7]), var_2)), ((((arr_5 [i_7] [i_7]) < (arr_5 [1] [1]))))));
        arr_29 [i_7] [i_7] = ((+(((arr_21 [i_7] [i_7] [i_7] [i_7]) ? (arr_13 [i_7] [i_7] [i_7]) : ((0 ? 19 : var_3))))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
    {
        arr_32 [i_8] = (3232323065 * 190);
        var_26 = (min(var_26, ((((((1115466682 - (arr_12 [14] [i_8] [i_8] [i_8])))) ? 1777180229 : -870966144)))));
        var_27 = (((arr_0 [i_8]) ? (arr_0 [i_8]) : 546063703));
        var_28 = (!84);
        arr_33 [i_8] = (((arr_24 [i_8] [i_8] [i_8] [0] [i_8] [i_8]) || var_4));
    }
    for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
    {
        arr_38 [i_9] [i_9] = ((84 ? 1062644220 : 2047958913));
        var_29 = ((((((max(1062644233, (arr_34 [i_9])))))) > (((((52 ? 3337250173 : 227))) ? var_7 : ((((var_6 <= (arr_12 [1] [i_9] [i_9] [i_9])))))))));
    }
    #pragma endscop
}
