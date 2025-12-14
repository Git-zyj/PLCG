/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += var_10;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min(((max((arr_0 [i_0]), var_12))), (arr_2 [i_0])));
        var_14 = ((((((arr_0 [i_0]) ? (arr_2 [8]) : -10371))) ? (min(1, (arr_1 [i_0]))) : ((-((max(var_1, 1)))))));
        arr_4 [i_0] = var_11;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_15 ^= ((((((arr_2 [i_1]) ? var_6 : (arr_6 [i_1])))) >= (arr_2 [i_1])));
        var_16 = (!var_6);
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            var_17 = -25;
            var_18 = arr_1 [i_2];
        }
        var_19 = var_3;
        var_20 = (max(var_20, 1));
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 7;i_4 += 1)
    {
        arr_15 [i_4] [i_4] = 1;

        for (int i_5 = 3; i_5 < 9;i_5 += 1)
        {
            arr_20 [i_4] = ((!(arr_11 [i_4] [i_4] [i_5])));
            arr_21 [i_4] = 0;
            arr_22 [i_4] [i_4] = (!-891638251);
        }
        for (int i_6 = 3; i_6 < 8;i_6 += 1)
        {
            arr_27 [i_4] = -45;
            arr_28 [i_4] [i_4] [i_4] = (((((arr_19 [i_4]) + 9223372036854775807)) << (40 - 40)));

            for (int i_7 = 2; i_7 < 8;i_7 += 1) /* same iter space */
            {
                arr_32 [i_4] [i_4] [i_4] = (-(arr_30 [i_7 - 2] [i_6] [i_7] [i_4]));
                var_21 = ((!(arr_31 [i_4] [i_7 + 2] [i_6] [i_4])));

                for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                {
                    var_22 = var_8;

                    for (int i_9 = 3; i_9 < 8;i_9 += 1)
                    {
                        arr_38 [i_4] [i_6 - 1] [i_7] [i_4] [i_4] [i_8] [i_8] = ((arr_29 [i_4] [i_9] [i_4 + 3]) ? (arr_0 [i_4]) : var_9);
                        var_23 = (-1431724735 / 1565129966);
                        arr_39 [2] [i_6 - 1] [i_4] [i_8] [i_9] = (arr_14 [i_9 - 1]);
                        var_24 = (((arr_5 [i_8]) ? (arr_7 [i_8] [i_8]) : (arr_18 [i_4] [i_4])));
                    }
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        var_25 = (((arr_29 [i_4] [i_6 + 1] [i_7 + 1]) ? ((1 * (arr_1 [i_4]))) : -891638247));
                        arr_42 [i_10] [i_4] [i_7 + 1] [i_8] [2] [i_4] [i_7] = ((((((arr_33 [i_4] [i_7] [i_8] [i_10]) | 1))) ? 92 : -25493));
                        arr_43 [i_4 - 1] [i_4] [i_4] [i_4 - 1] [i_10] = ((!(((arr_9 [i_4]) == (arr_9 [i_4 + 1])))));
                        arr_44 [i_4] [i_6] [i_7] [i_8] [i_6 - 3] = (arr_17 [i_4]);
                    }
                    var_26 = (arr_7 [i_6] [i_8]);
                }
                for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
                {
                    var_27 &= (((1565129985 ? 1565130004 : 42)));
                    var_28 = 127;
                    var_29 = (arr_11 [i_6] [i_7 - 2] [i_11]);
                    arr_48 [i_4] [i_7] [i_4] = (((arr_29 [i_4] [i_7 - 2] [i_11]) && (arr_13 [i_4])));

                    for (int i_12 = 1; i_12 < 8;i_12 += 1)
                    {
                        arr_52 [i_4] = (arr_10 [i_4 - 1]);
                        arr_53 [i_4] [i_11] [i_11] [i_7 + 1] [1] [i_4] = var_0;
                        var_30 *= 40;
                        arr_54 [i_12] [i_4] [i_11] [i_7 + 2] [i_6] [i_4] [i_4 - 2] = (arr_47 [i_4] [i_6 - 1]);
                        var_31 = (!1);
                    }
                }
                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    arr_57 [i_4 + 1] [i_4] [i_6] [i_7 + 2] [i_4] = (arr_18 [i_4 + 1] [i_4]);
                    var_32 = (max(var_32, (((~(arr_14 [i_4 - 2]))))));
                    var_33 = (((((arr_35 [i_13] [i_13] [i_7 - 1] [i_6 + 1] [i_4 + 3]) + 9223372036854775807)) >> (891638246 - 891638218)));

                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        arr_62 [i_4] [i_4] [i_7] [i_13] [i_14] = 0;
                        var_34 = ((!(((46 ? var_0 : (arr_41 [i_4] [i_6] [i_7] [3] [i_14]))))));
                        arr_63 [i_4] = (arr_14 [i_13]);
                    }
                    for (int i_15 = 2; i_15 < 7;i_15 += 1)
                    {
                        var_35 = (arr_9 [i_4 - 1]);
                        var_36 = (min(var_36, (arr_1 [i_6 + 2])));
                        var_37 = (arr_2 [i_6]);
                        var_38 ^= 1;
                    }
                    var_39 += (arr_10 [i_13]);
                }
                for (int i_16 = 1; i_16 < 9;i_16 += 1)
                {
                    var_40 = (max(var_40, 66));

                    for (int i_17 = 0; i_17 < 10;i_17 += 1)
                    {
                        arr_71 [i_4] [i_4] = (arr_13 [i_17]);
                        arr_72 [i_4] [i_6 - 2] [i_4] [i_7] [i_16 - 1] [i_16] [i_16 - 1] = (arr_69 [i_16 - 1] [i_16 - 1]);
                    }
                }
            }
            for (int i_18 = 2; i_18 < 8;i_18 += 1) /* same iter space */
            {
                var_41 = (((((var_0 ? var_10 : 31670))) ? (arr_41 [i_6 - 1] [i_6] [i_6 - 2] [i_6] [i_6 - 3]) : (arr_6 [i_4])));
                var_42 = (((arr_25 [i_6 - 1]) ? (arr_59 [i_4] [i_6 - 3] [i_6 + 1] [i_6] [i_6 + 1]) : (arr_59 [i_4] [i_6 - 2] [i_6 - 1] [i_6] [i_6 + 2])));
            }
            for (int i_19 = 2; i_19 < 8;i_19 += 1) /* same iter space */
            {
                arr_78 [i_4] [i_4] [i_19] [i_4] = var_8;
                var_43 -= 92;
            }

            for (int i_20 = 2; i_20 < 8;i_20 += 1)
            {
                var_44 = (arr_11 [i_4 + 1] [i_4 + 2] [i_4]);
                var_45 = (max(var_45, (arr_40 [i_20 - 2] [i_6] [8] [i_4] [i_4])));
                var_46 = (arr_1 [i_4 + 3]);
            }
            for (int i_21 = 0; i_21 < 10;i_21 += 1)
            {
                arr_85 [i_4] [i_6] [i_4] = (arr_17 [i_4]);
                var_47 = arr_8 [i_4 + 3];
                var_48 = (arr_5 [i_21]);
            }
        }
        arr_86 [i_4] [i_4] = (arr_41 [i_4 - 2] [i_4] [i_4 - 3] [i_4 - 2] [i_4]);
        arr_87 [i_4] = (((~-25526) != var_12));
        arr_88 [i_4] = -2515557590225639818;
    }
    var_49 = var_7;
    var_50 = (min(var_1, (min(var_2, var_8))));

    for (int i_22 = 0; i_22 < 25;i_22 += 1)
    {

        for (int i_23 = 1; i_23 < 1;i_23 += 1)
        {
            var_51 = 230;
            arr_95 [i_22] [10] [i_23 - 1] = (max(-8774356808233058227, 1));
            var_52 = ((((max((min(-367381905, 53)), ((19665 ? var_10 : 53))))) ? (min(1, -3927452883612181652)) : ((((min(var_0, var_5))) ? (max(-7081254548551849486, var_12)) : var_2))));
        }
        var_53 += (arr_93 [i_22]);
        arr_96 [i_22] = (!var_11);
    }
    for (int i_24 = 3; i_24 < 24;i_24 += 1)
    {
        arr_100 [i_24] = (~2788769614189099464);
        var_54 |= (min((((min(var_10, (arr_99 [i_24]))))), (((~4865808000671295563) ^ (((min((arr_90 [i_24]), (arr_90 [i_24])))))))));
        var_55 = (max(var_55, (((max((arr_90 [i_24]), ((((arr_90 [i_24]) != (arr_90 [i_24]))))))))));
    }
    #pragma endscop
}
