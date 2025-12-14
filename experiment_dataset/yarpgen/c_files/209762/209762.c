/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((var_11 ? -46 : (~-19)));
        arr_5 [i_0] = ((~((0 ? -19 : 4294967288))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_16 [i_2] [i_2] = 1;
                        var_16 = var_8;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_17 = (max(((3142 ? ((1 ? 21903 : (arr_22 [i_1] [i_5] [i_6] [i_7]))) : ((max(1, -76))))), ((max(((max(64, var_0))), var_6)))));

                        for (int i_8 = 1; i_8 < 10;i_8 += 1)
                        {
                            var_18 = 1;
                            arr_27 [0] = (((((((max(81, 15959))) * (~18605)))) ? ((((min(28, 1))) ? (((!(arr_25 [i_1] [1] [i_6] [i_7] [i_7] [i_8 - 1])))) : (~var_13))) : (((min(-3, 1))))));
                            var_19 = ((((min(((var_14 ? (arr_2 [i_5]) : 0)), ((((arr_10 [i_7] [i_5]) ? 8041 : var_3)))))) ? (arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (~63)));
                        }

                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            var_20 = (1 * 1);
                            var_21 = var_6;
                        }
                        for (int i_10 = 3; i_10 < 12;i_10 += 1) /* same iter space */
                        {
                            var_22 = 57519;
                            var_23 = ((((max((max(3, 1)), ((min(1, 0)))))) ? 1 : (((~0) ? (arr_20 [i_7] [i_7]) : (((min(47556, 1))))))));
                            arr_32 [1] [i_1] [i_5] [10] [i_1] [4] [i_10] = (((18010 << 0) ? (min(var_10, (((1 ? 32198 : 45256))))) : 1));
                        }
                        for (int i_11 = 3; i_11 < 12;i_11 += 1) /* same iter space */
                        {
                            var_24 = ((((((-26 ? 52200 : var_0))) ? -91 : ((var_6 ? (arr_15 [i_1] [i_5] [i_6] [i_11]) : 195988658)))) * (((((min((-127 - 1), -6687))) ? ((0 ? 1 : 1)) : (arr_34 [1] [i_5] [i_6] [i_7] [i_11 + 1])))));
                            var_25 = 1;
                        }
                    }
                }
            }
        }

        for (int i_12 = 1; i_12 < 9;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 9;i_14 += 1)
                {
                    {

                        for (int i_15 = 1; i_15 < 11;i_15 += 1)
                        {
                            arr_45 [i_13] = 8787;
                            var_26 = (max(var_4, ((-((163 ? 6662 : 159))))));
                            var_27 = ((-8790 * (arr_11 [i_13])));
                        }
                        for (int i_16 = 0; i_16 < 13;i_16 += 1)
                        {
                            var_28 = 3000;
                            arr_48 [i_16] [8] [i_13] [i_13] [i_1] [i_1] = (((((0 ? 0 : 252))) ? -27 : (255 * var_8)));
                            arr_49 [1] [i_1] [i_13] [1] [i_14] [i_16] = 0;
                            arr_50 [i_1] [i_13] [i_13] [i_13] [i_14 - 1] [i_16] = 13982;
                        }
                        arr_51 [i_1] [i_12 + 1] [i_13] [i_13] [i_1] = 10;
                    }
                }
            }
            var_29 = (max(62536, -8796));
        }
    }
    var_30 = var_7;
    /* LoopNest 3 */
    for (int i_17 = 0; i_17 < 24;i_17 += 1)
    {
        for (int i_18 = 1; i_18 < 21;i_18 += 1)
        {
            for (int i_19 = 1; i_19 < 23;i_19 += 1)
            {
                {
                    var_31 = arr_56 [i_17] [i_17];
                    arr_58 [i_17] [i_19] [i_17] = ((-((max((min(29712, 1)), ((min(1, 76))))))));
                    arr_59 [i_17] [i_19] [i_17] = ((((max((arr_57 [i_17] [16] [i_17] [i_17]), var_7))) - (((1 - 18010) + 1))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_20 = 1; i_20 < 1;i_20 += 1)
    {
        for (int i_21 = 0; i_21 < 25;i_21 += 1)
        {
            {
                var_32 = (arr_60 [i_20] [i_21]);
                var_33 = (~-13);
                arr_64 [i_20] [i_20 - 1] [i_20 - 1] = var_12;
            }
        }
    }
    var_34 = (min(-31761, var_12));
    #pragma endscop
}
