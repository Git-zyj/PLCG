/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (var_13 ^ var_1)));
                arr_5 [i_1] = var_13;
                var_21 += ((((((1407343368162063173 ? 12 : var_9))) ? ((4 ? 16646144 : 17302100731500786925)) : (~-16646154))));
            }
        }
    }
    var_22 = var_10;

    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            var_23 = (((~65530) ? var_19 : var_17));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {

                        for (int i_6 = 2; i_6 < 17;i_6 += 1)
                        {
                            var_24 = (((~4) >= (max(var_17, var_1))));
                            var_25 |= (max((max((!2320895960512229180), (arr_11 [i_4] [0] [i_6]))), (((!(((var_12 ? var_1 : -15))))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_26 = arr_18 [i_2] [i_3 + 3] [i_3 + 3] [i_3] [i_3];
                            var_27 = (min(var_27, 19518));
                            arr_21 [i_2] [i_3] [i_2] [8] [i_5] [i_7] = ((~var_9) ? var_10 : -19520);
                            var_28 = 1;
                            var_29 = (((arr_15 [i_3] [i_3 - 2] [i_3 - 2] [i_3 + 3]) + (arr_15 [i_3] [i_3 - 2] [i_3 + 2] [i_3 + 3])));
                        }
                        var_30 += ((-((var_17 & (!var_18)))));
                        arr_22 [9] [i_5] = (max(37, 65514));
                        var_31 += var_12;
                        var_32 &= var_16;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 19;i_10 += 1)
                    {
                        {
                            var_33 = (min(var_33, (((((((var_2 - 22) + -44058))) * -33)))));
                            arr_33 [i_2] [i_9] [18] [i_2] [i_10 - 1] = (((min((~44055), ((44085 & (arr_28 [i_8] [i_9] [i_8] [i_8] [i_8] [i_8]))))) <= 19046));
                            var_34 = (((~63877) ? 34 : -2392534792444701059));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_11 = 1; i_11 < 19;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 19;i_13 += 1)
                    {
                        {
                            var_35 = (max((((!(arr_8 [i_12])))), var_16));
                            var_36 = var_1;
                            var_37 = ((((((((var_8 ? 988788222 : var_11))) ? var_15 : -1115882057))) ? ((-((-46 ? 130944 : (arr_41 [i_12] [i_3] [i_11] [i_12] [i_13]))))) : var_9));
                            var_38 = (min(var_38, ((min(10246, (max((arr_32 [i_2] [i_2] [i_2] [i_2] [i_2]), (~var_11))))))));
                            var_39 = -24;
                        }
                    }
                }
            }
        }
        var_40 = ((12215008102133758516 + ((max(16646146, -5698543419053873765)))));
        var_41 = 6;
    }
    /* vectorizable */
    for (int i_14 = 3; i_14 < 15;i_14 += 1)
    {
        var_42 = ((-((2544582386 ? (arr_7 [i_14]) : 2250220734713600891))));
        var_43 = (-(var_13 + 12125));
        var_44 = (min(var_44, (arr_23 [i_14] [0] [i_14 - 1])));
        var_45 = (!var_8);
    }
    /* LoopNest 2 */
    for (int i_15 = 1; i_15 < 22;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            {
                var_46 = (min((((((18446744073709551615 ? var_2 : 3549857300))) ? var_19 : ((((arr_47 [23]) ? var_2 : var_1))))), ((((arr_50 [i_15 - 1] [i_15 + 1]) && (!-44))))));
                arr_51 [i_16] [i_16] = var_5;
                var_47 = (min((~1776457635), (max((arr_49 [i_15 + 1]), (arr_49 [i_15 - 1])))));
                /* LoopNest 2 */
                for (int i_17 = 4; i_17 < 21;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 24;i_18 += 1)
                    {
                        {
                            arr_57 [i_15] [i_16] = (min((~var_4), var_4));
                            var_48 = (max(((-(arr_47 [i_15]))), (var_16 + var_9)));
                            var_49 = (min(var_49, 10809166931972862167));
                        }
                    }
                }
                var_50 *= (!10809166931972862178);
            }
        }
    }
    #pragma endscop
}
