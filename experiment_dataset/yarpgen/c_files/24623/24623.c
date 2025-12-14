/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 = var_4;
    var_13 &= (((var_3 - var_3) >> ((((1595368342 ? var_1 : ((var_2 ? var_8 : 1)))) - 1133756644))));

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_14 = (max(var_14, ((min((((arr_2 [i_0 - 3]) & (arr_1 [i_0 + 1]))), ((~(arr_1 [i_0 - 1]))))))));
        arr_3 [6] [i_0] |= (min((arr_1 [i_0 - 2]), (max((((var_6 & (arr_2 [i_0])))), (min(var_3, (arr_1 [7])))))));
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {
        var_15 = (max(var_15, (((((max((var_3 / 2699598933), 1))) || ((max(((max((arr_6 [i_1] [i_1]), var_2))), var_6))))))));
        var_16 = (min((arr_4 [i_1] [i_1 - 2]), (((((var_5 / (arr_6 [i_1] [i_1 + 1]))) < (~var_4))))));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_17 = (arr_10 [i_2]);
        arr_11 [i_2] = 0;

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_18 = (min(var_18, 0));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            arr_22 [i_6] [i_6] [i_2] [i_6] [i_6] [i_2] = (((!1) && ((((arr_20 [i_6]) ? (arr_20 [i_6]) : var_10)))));
                            var_19 = (min(var_19, 175));
                        }
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            arr_27 [i_2] [i_2] |= (arr_23 [i_2] [i_2]);
            var_20 = 127;
        }
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            arr_30 [i_2] [i_8] = (((((((max((arr_18 [i_2] [i_2] [i_8] [i_2]), -127))) ? var_0 : (~var_0)))) ? var_2 : (((((arr_25 [i_8] [i_8] [i_2]) + 2147483647)) << (((-4989986605640461767 + 4989986605640461782) - 11))))));

            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                var_21 = (max(var_21, 127));

                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    var_22 = var_8;
                    var_23 = (max((arr_12 [i_9]), (arr_34 [i_2])));
                    var_24 = var_8;
                }
            }
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                var_25 = (max(var_25, (((-(((!(arr_34 [i_8])))))))));

                for (int i_12 = 2; i_12 < 24;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        arr_45 [i_2] [i_8] [i_11] [i_13] [i_12] [i_13] = ((-(min((arr_8 [i_11]), (arr_21 [i_12 + 1] [i_12 - 2] [i_12 - 1] [i_13] [i_13])))));
                        arr_46 [i_2] [i_8] [i_12] [i_8] [i_2] = var_3;
                        var_26 |= -11624968406485283574;
                    }

                    for (int i_14 = 2; i_14 < 24;i_14 += 1)
                    {
                        arr_50 [6] [i_11] [i_12] = ((var_2 | ((~((~(arr_43 [i_11])))))));
                        var_27 = var_2;
                        arr_51 [i_2] [i_8] [i_12] [i_12] [2] [i_14] [i_14] = (arr_17 [i_2] [i_8] [i_11] [i_14]);
                        var_28 *= (arr_39 [i_2] [i_2]);
                    }
                    var_29 = (arr_33 [i_2] [i_2] [i_11] [i_12]);
                }
                /* vectorizable */
                for (int i_15 = 0; i_15 < 25;i_15 += 1)
                {
                    var_30 = (arr_8 [i_2]);
                    var_31 = (max(var_31, (arr_16 [10] [i_15] [i_11] [i_15])));
                }
                for (int i_16 = 2; i_16 < 22;i_16 += 1)
                {
                    var_32 -= 1;
                    var_33 = (((((var_2 / ((-24057 ? var_10 : 127))))) ? var_1 : (arr_55 [i_2] [i_8] [i_11] [16] [i_16])));
                    arr_58 [i_2] [i_2] [i_2] [i_2] = (min(((((((var_7 ? var_7 : var_2))) && ((min(24057, (arr_23 [i_8] [i_16]))))))), (max((var_3 || var_6), (~1)))));
                }
            }
            for (int i_17 = 0; i_17 < 25;i_17 += 1)
            {
                var_34 = (max(var_34, (arr_32 [i_2] [i_8])));
                var_35 = (max(var_35, ((max((min(6821775667224268041, -var_7)), ((min((arr_24 [i_2]), ((((arr_36 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) >= -610639830)))))))))));
            }
        }
        var_36 = 0;
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 25;i_18 += 1)
        {
            for (int i_19 = 1; i_19 < 24;i_19 += 1)
            {
                {
                    var_37 = min(((((max((arr_56 [i_19 - 1] [i_19] [i_18] [i_18]), (arr_24 [i_2])))) ? (((arr_24 [i_19]) << (var_6 + 1054734391))) : -var_9)), var_4);
                    arr_66 [i_19] [i_19 + 1] = -2699598950;
                    var_38 = (arr_55 [i_19 - 1] [i_19 + 1] [i_19 - 1] [i_19] [i_19]);
                    var_39 = (max(var_39, (((~(max((((arr_59 [i_2] [i_2] [i_2]) ? (arr_53 [i_19 - 1] [i_18] [i_2] [i_2]) : 0)), (((var_0 ? var_1 : var_2))))))))));
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 25;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 25;i_21 += 1)
                        {
                            {
                                arr_75 [i_2] [1] [i_2] [i_2] [i_2] = (((0 << ((((var_0 ? var_3 : var_10)) + 6820718085913069106)))) / var_1);
                                var_40 += ((var_9 ? (!var_9) : ((max(var_4, (var_9 || var_5))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_41 = var_3;
    #pragma endscop
}
