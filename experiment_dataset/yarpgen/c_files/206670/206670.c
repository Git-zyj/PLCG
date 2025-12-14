/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;

    for (int i_0 = 1; i_0 < 23;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                arr_8 [6] [i_1] [i_0] = (((arr_6 [i_0 - 1] [i_0 - 1] [i_1 - 2] [i_1 - 2]) || var_10));
                arr_9 [i_0] = ((~(var_10 + -128944343)));
                var_13 = (~(arr_1 [i_2]));
            }
            var_14 = (max(var_14, (((-(var_11 || var_11))))));
        }
        for (int i_3 = 2; i_3 < 23;i_3 += 1)
        {
            var_15 += var_7;
            arr_13 [i_0 + 1] = ((((!(arr_1 [i_0 + 1]))) ? var_0 : (arr_1 [i_0 + 1])));
            var_16 *= (!var_7);
            arr_14 [i_0] = ((min((((!(arr_11 [i_0] [i_3 - 1])))), (arr_3 [i_0]))));
        }
        /* vectorizable */
        for (int i_4 = 3; i_4 < 22;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        arr_23 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0] = var_10;
                        var_17 = (arr_21 [i_0 - 1] [i_4] [i_5] [i_4]);
                        var_18 = (arr_5 [i_0] [i_0] [i_5]);
                    }
                }
            }
            arr_24 [i_0] [i_0] = (arr_0 [i_0 + 1]);
        }
        for (int i_7 = 1; i_7 < 23;i_7 += 1)
        {
            var_19 = (min(var_19, var_9));
            arr_27 [i_7] = (min(var_4, var_5));
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                {
                    arr_32 [i_0] = var_5;
                    var_20 = (((((((arr_29 [i_0]) ? (arr_11 [16] [i_9]) : (arr_15 [i_0] [i_0 - 1] [i_0 - 1]))))) ? (((((((var_1 ? (arr_3 [i_8]) : 1141508114512466910))) && ((min(var_11, var_2))))))) : (((arr_29 [i_0 + 1]) ? (arr_18 [i_0 - 1]) : (arr_29 [i_0 - 1])))));
                    var_21 = ((((((var_4 ? var_10 : 24797))) ? 125 : var_1)));
                }
            }
        }
        arr_33 [i_0 + 1] [i_0] = (((!((((arr_16 [i_0] [i_0]) ? var_5 : var_4))))));
        var_22 = (arr_29 [i_0 + 1]);
    }
    for (int i_10 = 1; i_10 < 23;i_10 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            arr_39 [i_10] [i_11] = ((!(((15687 >> (-7731078111940857292 + 7731078111940857321))))));
            var_23 = (max(var_23, (((arr_31 [i_11] [i_10] [i_10 + 1] [i_10 + 1]) || var_10))));
        }
        /* vectorizable */
        for (int i_12 = 1; i_12 < 20;i_12 += 1)
        {
            var_24 = (((arr_15 [i_10] [i_10] [i_12 + 4]) >= (arr_22 [i_12 + 1])));
            var_25 = (min(var_25, ((((arr_10 [i_12] [i_12] [i_10]) ? 16165 : var_1)))));
        }

        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            arr_44 [i_10] [i_13] [i_13] = (min((min((min((arr_19 [11] [i_10] [i_10]), var_4)), (((0 ? 4283010413 : 215))))), (!37979)));
            var_26 &= (((~(arr_12 [i_10 - 1]))));
            var_27 = (min(var_27, ((((((((arr_30 [i_10 - 1] [i_13]) / var_3)) + (arr_3 [i_13])))) ? (((min((arr_42 [i_10 + 1] [i_10 + 1] [i_10]), (arr_42 [i_10 - 1] [i_10 + 1] [i_10]))))) : (var_11 / -var_0)))));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 24;i_14 += 1)
        {
            var_28 *= ((var_8 ? (arr_6 [i_14] [i_14] [i_10 + 1] [i_10 - 1]) : (arr_6 [i_10] [i_10] [i_10] [i_10 - 1])));
            var_29 = -var_6;
            var_30 &= ((~var_7) ? (!var_7) : ((((arr_21 [1] [i_14] [i_10 + 1] [23]) < (arr_22 [i_14])))));
        }
        arr_47 [i_10] = (--var_9);
        var_31 = (min(var_31, (((((((min((arr_15 [i_10 + 1] [i_10] [i_10 + 1]), var_10))) ? -var_3 : ((((!(arr_21 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10]))))))) & ((min((arr_3 [i_10 - 1]), ((~(arr_2 [i_10])))))))))));
    }
    #pragma endscop
}
