/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_10 = (!-96);
            var_11 = (99 | (arr_1 [i_0] [i_0]));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_12 = var_9;
                            var_13 = var_1;
                            arr_13 [i_2] &= 45475;
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_14 = (arr_10 [i_0] [i_5] [i_0] [i_5] [i_5]);
            var_15 -= var_9;
            arr_17 [i_0] [i_5] = var_3;
            var_16 = (arr_5 [i_0] [i_0]);
        }

        for (int i_6 = 3; i_6 < 15;i_6 += 1)
        {
            arr_20 [i_0] [i_6] = 536870911;
            var_17 = (-96 || 2097711318);
        }
        for (int i_7 = 4; i_7 < 16;i_7 += 1) /* same iter space */
        {
            arr_23 [i_0] [i_0] = var_8;
            var_18 = var_1;
        }
        for (int i_8 = 4; i_8 < 16;i_8 += 1) /* same iter space */
        {
            arr_27 [i_0] = (((-2097711293 ? -1397350198 : 705994538)));
            arr_28 [i_0] [i_8 - 2] = ((var_4 ? (var_1 >= 1423137967) : var_0));
        }
        for (int i_9 = 4; i_9 < 16;i_9 += 1) /* same iter space */
        {
            var_19 = ((!((((arr_22 [i_0] [i_0] [i_9]) + (arr_26 [i_0] [i_9]))))));
            arr_32 [i_0] [i_9] [i_9] = (((var_8 ? var_1 : var_4)) & (arr_12 [i_9] [i_9] [i_0] [i_0] [i_0] [i_0] [i_0]));
            arr_33 [i_0] [i_9] |= (arr_24 [i_9]);
            var_20 = var_1;
            arr_34 [i_0] [i_0] = (((((65532 ? 201990487 : -2618089714585286479))) ? -1747871299 : var_8));
        }
        arr_35 [i_0] = ((var_6 + var_2) * var_2);
    }
    for (int i_10 = 2; i_10 < 15;i_10 += 1)
    {
        var_21 = ((((((arr_30 [i_10 - 1]) ? ((36 ? 86 : -3149325318297015869)) : (1106139430 << 0)))) ? (arr_16 [i_10] [i_10 + 1]) : var_5));
        arr_39 [i_10 + 1] = ((-823831229 ? ((((var_8 >> (((arr_24 [i_10]) - 566716173)))) * (var_5 > 1423137967))) : ((((((-(arr_1 [4] [i_10]))) == (((3690486437 ? 60 : var_0)))))))));
    }
    for (int i_11 = 0; i_11 < 21;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 19;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 17;i_15 += 1)
                        {
                            {
                                arr_56 [i_15] [i_11] [i_12] [i_12] [i_11] = ((~((~(arr_50 [i_15] [i_15 - 1] [i_15 + 2] [i_15] [i_15 - 1] [i_15 - 1])))));
                                arr_57 [i_12] [i_12] [10] [i_14] [i_15] = (arr_46 [i_11] [i_12] [i_12] [i_14]);
                                var_22 = (arr_41 [i_11]);
                                arr_58 [i_12] [i_12] [i_12] [i_14] = var_5;
                            }
                        }
                    }
                    var_23 = (((arr_43 [i_13] [i_12] [i_13]) ? (((86 ? 4290285436 : -81))) : ((((!(arr_54 [i_13] [i_12] [i_12] [i_12] [i_11]))) ? var_8 : var_6))));
                }
            }
        }
        arr_59 [i_11] [i_11] = -3721654570498155607;
        var_24 ^= (min(-90, var_1));
    }
    var_25 = (min(((-100 ? var_5 : -109)), var_4));
    #pragma endscop
}
