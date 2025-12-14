/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    var_16 = (~var_3);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_17 = var_2;
        arr_2 [i_0] = -0;
        var_18 -= ((!(var_12 <= var_8)));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            var_19 -= 136;

            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                var_20 -= -16256;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_21 = (max(72, 120));
                            var_22 &= (min((arr_15 [i_1] [i_1]), 136));
                        }
                    }
                }
            }
        }
        var_23 = ((57 ? var_2 : (((arr_8 [i_1]) | -var_7))));
    }
    for (int i_6 = 1; i_6 < 22;i_6 += 1) /* same iter space */
    {
        arr_19 [i_6 + 2] = ((-(arr_0 [1] [0])));
        var_24 = (((--23579) == (((~3383220126) + (((199 ? 136 : 135)))))));
        var_25 *= 135;
        var_26 = (((max((!1403321475549809698), (!3112528758))) && (min((!911747161), (136 || 6278)))));
    }
    /* LoopNest 2 */
    for (int i_7 = 4; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            {
                var_27 = ((1075046355 ? var_4 : (max(((((arr_15 [i_7] [i_8]) <= var_8))), (min((arr_5 [i_7]), var_0))))));
                arr_25 [i_7] = (~var_5);

                for (int i_9 = 1; i_9 < 17;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 17;i_11 += 1)
                        {
                            {
                                var_28 = (max(199, 126));
                                arr_33 [i_7] [i_7] [i_7] [i_8] [i_8] [i_10 + 1] [i_11 - 2] = var_3;
                                arr_34 [i_7] = var_9;
                                arr_35 [i_7] [i_7] [i_9 - 1] [i_10 + 1] [i_11 - 1] = var_11;
                            }
                        }
                    }
                    var_29 += ((!(-34 >= 911747170)));
                    arr_36 [i_7] [i_8] [i_7] [i_7] = 130;
                }
                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    var_30 = -14064;
                    var_31 = ((!(((4398046511104 >> ((((max((arr_16 [i_7] [i_8] [i_8] [i_12] [i_12]), 56))) - 86)))))));
                    var_32 = -1;
                }
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    var_33 = (min(((((((4 ? var_1 : (arr_0 [i_7] [i_13]))) + 2147483647)) << (173 - 173))), var_6));

                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        arr_45 [i_7] [i_8] [i_7] [i_13] &= (((-(~65530))));
                        var_34 = (!-1);

                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 19;i_15 += 1) /* same iter space */
                        {
                            var_35 = (min(var_35, var_3));
                            arr_49 [i_7 - 1] [i_7] [i_7 + 2] [i_7] [i_7] = (!83);
                            var_36 = (max(var_36, 105));
                        }
                        /* vectorizable */
                        for (int i_16 = 0; i_16 < 19;i_16 += 1) /* same iter space */
                        {
                            var_37 = var_4;
                            var_38 += 165;
                            var_39 = var_3;
                        }
                        arr_52 [i_7] [i_8] [i_13] [i_14] [i_14] = 78;
                    }
                }
                for (int i_17 = 1; i_17 < 15;i_17 += 1)
                {
                    arr_55 [i_7] [i_7] [i_7] = (min(911747173, var_9));
                    var_40 = var_12;
                    var_41 = ((((((arr_48 [i_7] [i_7] [i_7] [i_8] [i_8]) ? (arr_37 [i_7 + 1] [i_8] [i_8] [i_7]) : 4375293790717319577))) ? (((min(28, 13043)))) : var_12));
                }
                arr_56 [i_7] [i_8] = ((max(312824778, ((min(255, 141))))));
            }
        }
    }
    var_42 = ((~(1 ^ var_12)));
    #pragma endscop
}
