/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_2 ? var_7 : ((65356 ? 127 : var_6))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_19 = var_17;
                    var_20 = 9223372036854775807;
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            arr_12 [i_3] [i_3] |= ((((min(var_2, -518530206633123087))) ? (((arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1]) ? -1900946453838421382 : (arr_4 [i_0] [i_0] [0] [i_0]))) : (arr_9 [i_1 - 1] [i_1] [i_1])));
                            arr_13 [i_0] = 1881457705;
                        }
                    }
                }
                var_21 = (arr_3 [i_0] [i_1 + 1] [i_0]);
                arr_14 [i_0] [i_0] [i_0] = (var_0 * 31944);
                var_22 = ((((29 > (arr_11 [i_1 - 1] [6] [i_0] [i_1 + 1]))) ? (arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 1]) : (((arr_9 [i_1 + 1] [13] [i_1 + 1]) ? -26 : (arr_11 [i_1 + 1] [13] [i_0] [i_1 - 1])))));
            }
        }
    }

    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_23 = (min(1, -604501001));
            var_24 = ((-((((arr_18 [i_5] [i_5] [i_6]) >= (arr_19 [i_5] [i_5] [1]))))));
            arr_20 [i_6] [20] = ((min((((arr_18 [i_6] [i_6] [i_5]) ? 51315 : 35295)), var_6)));
            var_25 = ((((!(((-3331244277740133792 ? 1 : -9223372036854775802))))) ? ((var_0 ? 1 : (min((arr_17 [2] [i_5] [17]), 7)))) : (((max(var_3, (!var_6)))))));
            var_26 = ((+((~(((arr_17 [i_5] [i_5] [i_6]) + 149))))));
        }

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_23 [i_7] [i_7] [1] = 52134;
            arr_24 [i_7] = (max(-var_7, (((arr_15 [i_5] [i_7]) ? (arr_15 [i_5] [i_7]) : var_5))));
            var_27 = (((544465953 - 1881457710) >= (-47741 > 255)));
            var_28 = ((-((var_3 * (47741 - 13574)))));
        }
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            arr_27 [i_5] [i_8] [i_5] = (max((min(120, (arr_17 [i_8] [i_8] [i_5]))), (((+(((arr_25 [i_5] [i_8]) | var_17)))))));

            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_29 = ((!((min(var_15, var_4)))));

                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    var_30 = -582631735;
                    var_31 = var_4;
                    arr_32 [0] [i_8] = 1;
                    var_32 += (((((arr_30 [i_5] [i_8] [i_9] [24]) + 582631735))) && ((((((~(arr_18 [i_9] [11] [i_5])))) ? (arr_28 [24] [i_8] [i_9]) : (((arr_29 [i_5]) >> (var_11 + 7317009575907475240)))))));
                }
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    var_33 = (((((299731166360449978 ? var_11 : (-127 - 1)))) ? 11 : 1));
                    arr_35 [i_8] [i_8] [i_8] [i_8] = var_3;
                }
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    var_34 = ((~(var_15 / var_4)));
                    arr_38 [i_5] [i_8] [i_9] [i_8] = (-127 - 1);
                }
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    var_35 = arr_37 [i_5] [i_5] [i_13];
                    arr_41 [i_13] [1] [i_5] [1] [i_5] |= (((min(((var_1 ? var_4 : var_17)), var_0)) == (((min(var_4, var_7)) + (arr_39 [0] [i_9] [i_8] [0])))));
                    var_36 = (arr_16 [i_8]);
                }
            }
            var_37 = 0;
            arr_42 [i_8] = (((arr_26 [i_5] [i_8]) ? ((-(arr_18 [i_5] [i_8] [i_8]))) : (135 | -74)));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 25;i_14 += 1)
        {
            var_38 = (((arr_21 [i_5] [i_5] [i_5]) ? (arr_21 [i_14] [i_14] [i_5]) : (arr_21 [i_14] [7] [i_5])));
            var_39 = ((((1393635398 ? 44330 : var_12)) << (var_15 - 45679)));
            var_40 = (((arr_16 [i_5]) <= (arr_16 [i_5])));
            arr_45 [i_5] [i_14] = (arr_17 [i_5] [i_5] [i_5]);
        }
    }
    #pragma endscop
}
