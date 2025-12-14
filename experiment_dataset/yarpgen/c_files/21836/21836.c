/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((((min(var_12, 14))) ? (max(9723, 4780829169745262555)) : var_5)), 3154327877560602884));
    var_20 = (min(14, (((var_14 | var_3) >> ((((max(40, -32766))) - 22))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_21 = ((~((((arr_0 [i_0]) != -4780829169745262555)))));
        var_22 *= (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_23 *= ((((max((arr_3 [2]), (arr_0 [i_1])))) || (((arr_3 [2]) && -85))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_13 [i_1] = (arr_7 [i_1] [i_2]);
                arr_14 [i_1] [i_2] [i_2] = (((arr_2 [i_1]) >= (arr_2 [i_1])));
            }

            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                arr_18 [i_4] [i_2] [i_1] = (~-40);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_24 = (((arr_19 [i_1] [i_2] [i_4] [i_5] [i_6]) ? (arr_22 [i_1] [i_1]) : (arr_22 [i_5] [i_6])));
                            var_25 += (arr_7 [i_1] [i_1]);
                        }
                    }
                }
                var_26 = (max(var_26, ((((1073737728 <= -21219) ? (arr_11 [i_1] [i_2] [i_4]) : (arr_7 [i_1] [5]))))));
                var_27 = ((!(arr_10 [i_1] [i_4])));
            }
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                var_28 *= 1;
                arr_28 [i_7] [i_2] [i_1] = (arr_19 [i_7] [i_7] [i_1] [i_1] [i_1]);
                var_29 *= var_6;
                arr_29 [i_1] [i_2] = (arr_11 [i_1] [i_2] [i_7]);
            }
            var_30 -= (((arr_12 [i_2] [i_1] [i_1] [8]) && (arr_2 [i_1])));
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        {
                            arr_42 [i_11] [i_8] [i_9] [i_8] [i_1] = (max((((((((arr_21 [7] [i_8] [i_9]) <= (arr_40 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))) % (-15283 | 51547)))), -4780829169745262543));
                            arr_43 [i_11] [i_8] [i_9] [i_8] [i_8] [i_8] [i_1] = ((-4780829169745262560 ? 8 : (12041 - 2015864227)));
                        }
                    }
                }
            }

            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                var_31 = (min(var_31, (((((max(var_5, (arr_30 [1] [i_12])))) ? ((((58146 || (((2372880618 >> (((arr_27 [i_1] [i_8] [i_12]) + 3453269412604346893))))))))) : (min(-var_12, (((arr_44 [i_1] [i_1] [i_1]) ^ 4780829169745262559)))))))));
                var_32 *= ((-var_4 && ((((arr_19 [i_1] [i_8] [i_8] [i_12] [i_12]) * (arr_39 [i_1] [1] [i_8] [1] [1] [i_12] [11]))))));
            }
            var_33 |= (~11714);
            arr_47 [11] [i_8] [i_8] = ((!((((-4780829169745262555 <= 11703) ? -4780829169745262564 : ((min(2015864210, -15283))))))));
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 12;i_15 += 1)
                {
                    for (int i_16 = 2; i_16 < 10;i_16 += 1)
                    {
                        {
                            arr_59 [i_16] = (!226);
                            var_34 = (((arr_23 [i_1]) ? (arr_3 [i_16]) : (arr_23 [i_1])));
                            var_35 = (min(var_35, ((((arr_2 [i_1]) >= var_7)))));
                            arr_60 [i_1] [i_14] [i_16 - 2] = ((15282 ? (arr_36 [i_1] [i_13] [i_16 + 2] [i_16] [2]) : (arr_36 [i_15] [i_16] [i_16 - 2] [i_16] [i_16 - 2])));
                        }
                    }
                }
            }
            var_36 *= ((1663829082 ? (arr_10 [i_1] [i_13]) : (arr_11 [i_1] [i_1] [i_1])));
        }
        arr_61 [i_1] = (max(143, (max(var_3, 2017728086))));
    }
    for (int i_17 = 4; i_17 < 13;i_17 += 1)
    {
        arr_64 [i_17] &= ((!((((arr_63 [i_17 - 3]) ? (arr_63 [i_17 - 1]) : (arr_63 [i_17 - 4]))))));
        arr_65 [i_17] = ((((max(94, 11730))) ? (min(3698586515, (arr_62 [i_17 - 2]))) : ((((0 & var_10) ? (~-55) : -55)))));
    }
    #pragma endscop
}
