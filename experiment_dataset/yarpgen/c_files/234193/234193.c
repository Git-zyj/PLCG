/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(1, -1));

    for (int i_0 = 1; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_12 = (min(var_12, ((min((((min(65517, (arr_2 [i_0] [i_0]))))), (124 / var_8))))));
        var_13 = 65517;
        var_14 = (~65526);
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_15 = var_6;
        var_16 = 536870911;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_17 += (!18);

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            arr_9 [i_2] [i_2] [i_2] = (~-1);
            var_18 |= -536870913;
            arr_10 [i_2] [10] = (arr_0 [i_2 - 1]);
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_14 [4] [4] [i_2] |= (-2147483647 - 1);
            var_19 = (arr_13 [i_2 + 1] [i_4]);
        }
        for (int i_5 = 3; i_5 < 14;i_5 += 1) /* same iter space */
        {
            arr_18 [i_5] [i_2] = 18;
            arr_19 [i_5] [i_2] [i_2] = (var_6 ? -536870919 : (arr_4 [i_2] [i_5 - 1]));
        }
        for (int i_6 = 3; i_6 < 14;i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    {
                        arr_28 [i_2] [i_2] [i_7] = var_3;
                        var_20 += (var_8 < 9);
                    }
                }
            }
            var_21 = (((arr_2 [i_6 - 2] [i_6 + 1]) ? (100 & var_3) : -2147483646));
            arr_29 [i_2] [i_6 + 1] [i_6] = 65535;
        }
    }
    for (int i_9 = 1; i_9 < 15;i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                {
                    var_22 = 15957;
                    var_23 = (min(var_23, (((((!(arr_38 [i_9 + 1] [i_9 - 1] [i_11] [i_11]))) || (var_10 / var_6))))));
                    arr_39 [i_10] [i_10] [i_11] = (((((((2147483647 ? 4095 : 255))) < ((1 ? 18 : var_8)))) ? 0 : ((((max((arr_20 [i_10] [i_11]), 536870899))) ? ((var_6 ? 18 : var_2)) : 65529))));
                    var_24 = ((-((max(var_5, (arr_12 [i_9 - 1] [i_10] [i_11]))))));

                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        var_25 = ((((min((arr_1 [i_9 + 1] [i_12]), var_2))) ? ((min(var_0, -99))) : (~0)));

                        for (int i_13 = 2; i_13 < 12;i_13 += 1)
                        {
                            var_26 = ((((var_2 < (((arr_2 [i_9] [i_11]) / 2805118434)))) ? (-127 - 1) : -101));
                            var_27 = (max(((~(arr_27 [i_9 + 1] [i_13 - 2] [i_13] [12] [i_13] [i_13 - 2]))), (arr_16 [i_9] [i_11] [i_13])));
                            var_28 -= (arr_21 [i_11] [i_12]);
                            var_29 = ((-((var_3 ? ((var_1 * (arr_37 [i_9] [i_10] [i_10]))) : ((max(1008, 7168)))))));
                            arr_46 [i_9 + 1] [2] [i_10] = ((~((var_0 ? (arr_41 [i_9 + 1] [i_9 - 1]) : var_8))));
                        }
                        arr_47 [i_9] [i_10] [i_10] [i_11] [i_12] = (1 == 192);
                        var_30 = (((-7105195767453651300 + 9223372036854775807) >> (((~var_6) ? (min(6, (arr_25 [i_9] [i_10] [i_11] [i_12]))) : ((((var_2 <= (arr_40 [i_12] [i_11] [i_9 + 1])))))))));
                        arr_48 [i_12] [i_10] [i_10] [i_9 + 1] = (((arr_34 [i_9 + 1] [i_10] [i_9 + 1]) ? ((max(46106, 0))) : (max((arr_34 [i_9] [i_10] [i_9 - 1]), -59657684))));
                    }
                }
            }
        }
        var_31 = (max(var_31, ((+((0 ? (max((arr_44 [i_9] [i_9] [i_9] [i_9]), 1)) : (arr_41 [1] [i_9 + 1])))))));
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 12;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 12;i_15 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_16 = 0; i_16 < 12;i_16 += 1)
                {
                    for (int i_17 = 4; i_17 < 10;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 1;i_18 += 1)
                        {
                            {
                                var_32 = 65517;
                                arr_64 [i_14] [i_14] [i_15] [i_17] [i_18] [i_14] [i_17] = (((234881024 == var_9) <= (((52052 < (arr_27 [i_17 + 2] [i_17 - 2] [i_17 - 4] [i_17] [i_17] [i_17 - 1]))))));
                                var_33 = ((((max(((~(arr_43 [i_14] [15] [i_16] [i_17] [15] [i_15]))), (((~(arr_37 [i_17 - 2] [i_17 - 3] [i_17]))))))) ? (min(((var_2 ? (arr_59 [i_15]) : var_3)), (!var_8))) : ((((arr_16 [i_15] [i_16] [i_17 - 3]) ? (arr_16 [i_16] [i_16] [i_17 - 3]) : 12288)))));
                            }
                        }
                    }
                }
                var_34 -= (arr_13 [i_14] [i_15]);
                arr_65 [i_15] = (min((arr_27 [i_14] [i_14] [i_15] [i_15] [i_14] [i_15]), (((-1 || (arr_59 [i_15]))))));
            }
        }
    }
    var_35 = 52052;
    #pragma endscop
}
