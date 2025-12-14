/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_1 [i_0]) ? (arr_2 [i_0] [i_0]) : (var_9 + -3597846715330216804)));

        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            arr_6 [i_1] = (((arr_2 [i_0 - 2] [i_1 - 2]) * var_3));
            arr_7 [i_1] [i_1] = 0;
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_10 [i_0] = (!18);
            var_19 = -274;
            arr_11 [i_0] = ((-1 ? -1 : (arr_8 [i_0] [i_0] [i_0 - 2])));
        }

        for (int i_3 = 1; i_3 < 15;i_3 += 1) /* same iter space */
        {
            arr_15 [i_0] [i_3] [i_3] = (((((var_12 ? var_10 : (arr_1 [i_3])))) ? var_15 : (arr_2 [i_0 - 1] [i_0 + 1])));
            var_20 = ((var_1 ? var_0 : (arr_1 [i_0 - 2])));
            arr_16 [i_0] [i_0] [i_0] = var_6;
            var_21 = (max(var_21, ((((arr_8 [i_0 + 1] [i_0] [i_0 - 2]) >= -9)))));
            arr_17 [i_3] [i_0] = 3597846715330216823;
        }
        for (int i_4 = 1; i_4 < 15;i_4 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            var_22 = (arr_4 [i_0] [i_4]);
                            arr_28 [i_0] [i_4] = var_18;
                        }
                    }
                }
            }
            var_23 *= var_18;
            var_24 = (((((25946 ? 0 : (arr_9 [i_0] [i_4])))) ? (arr_18 [i_0] [i_4 + 2] [i_0]) : ((var_1 ? var_3 : var_16))));
        }
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_31 [i_8] = (((arr_19 [i_8] [i_8]) ? (arr_18 [i_8] [i_8] [i_8]) : (arr_19 [i_8] [i_8])));
        var_25 = ((((min(1, -23))) & ((-3597846715330216809 ? 0 : 1870572386))));
    }
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        var_26 -= (min((((((max(var_15, 30))) ? (arr_26 [i_9] [i_9] [i_9] [i_9] [6]) : (((1 ? var_1 : 246)))))), (arr_4 [i_9] [i_9])));
        arr_34 [i_9] = (((-8574636054958414239 ^ 61986) && (((arr_1 [i_9]) > 10292450431906156560))));
        /* LoopNest 2 */
        for (int i_10 = 4; i_10 < 9;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            {
                                var_27 *= ((((((arr_25 [i_11] [i_10 - 4] [i_11] [i_11]) ? var_3 : var_14))) || ((((arr_25 [i_11] [i_10 - 4] [i_13] [i_13]) / (arr_43 [i_11] [i_10 - 4] [i_11] [i_12] [i_12]))))));
                                var_28 *= ((((var_3 ? 218 : ((max(700, -24)))))) && (~var_7));
                            }
                        }
                    }
                    arr_47 [i_9] [i_10] [i_9] = ((!((((arr_37 [i_10 + 1] [i_10 - 1]) ? -62982754 : (arr_37 [i_10 + 1] [i_10 + 2]))))));
                }
            }
        }
        var_29 = (max((min(var_12, var_15)), var_8));
    }
    for (int i_14 = 0; i_14 < 16;i_14 += 1)
    {
        arr_52 [i_14] = (((((((min(var_18, var_1)))) + 2147483647)) >> ((((~(arr_0 [i_14]))) + 75))));
        arr_53 [i_14] = (min((((arr_4 [i_14] [i_14]) ? (arr_4 [i_14] [i_14]) : var_11)), ((-(arr_4 [i_14] [i_14])))));
        arr_54 [i_14] = var_15;
    }
    var_30 = var_14;
    var_31 -= ((var_11 ? ((((var_5 ? var_4 : var_7)))) : (var_17 / var_12)));
    /* LoopNest 3 */
    for (int i_15 = 2; i_15 < 18;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 20;i_17 += 1)
            {
                {
                    var_32 = (min(var_32, var_14));
                    var_33 += (min(((-(var_14 > var_6))), 50));
                    var_34 = (-8574636054958414248 + 15);
                    var_35 -= (max(((-var_12 ? (28 * -1) : (!var_10))), 10876));
                }
            }
        }
    }
    #pragma endscop
}
