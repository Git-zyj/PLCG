/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_2 * var_13);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = (arr_0 [i_1]);

                for (int i_2 = 4; i_2 < 24;i_2 += 1)
                {
                    var_19 = 22278;
                    var_20 = (min(((((((arr_10 [i_0] [i_1] [i_2]) && var_15)) || ((((arr_9 [i_0] [i_0] [i_2]) ? (arr_1 [i_2 + 1]) : (arr_5 [i_1]))))))), (arr_3 [i_0] [i_1] [i_2])));
                    var_21 = ((((~(~var_13))) * (94 & 0)));
                }
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_22 = (((arr_2 [i_0] [i_1]) | 4432789177228919976));
                        var_23 = 1965907577;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_24 = 4307;
                        var_25 = ((((((arr_2 [i_0] [i_1]) > (arr_15 [i_1])))) << ((((11 * (arr_14 [i_5] [1] [i_1] [i_0]))) - 4294780863))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_0] [i_1] [i_3 + 2] [i_1] = ((!23) + ((1 ? (arr_10 [i_6] [i_3 - 1] [i_0]) : var_5)));
                        arr_22 [i_0] [i_0] [i_3] [i_6] [i_1] [i_6] = var_8;
                        var_26 = (max(var_26, ((max((((arr_19 [i_0] [i_0] [i_0] [i_0]) - (arr_19 [i_0] [i_0] [i_3 + 1] [i_0]))), (((!(arr_8 [i_3] [i_3] [i_0])))))))));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        var_27 = (min(var_27, ((max(((((var_16 + 22264) >= 25280))), (arr_2 [i_1] [i_0]))))));
                        var_28 = (min((arr_14 [i_1] [i_1] [i_1] [i_1]), (((arr_15 [i_1]) ? 0 : (arr_15 [i_1])))));
                    }
                    var_29 = (max(var_29, (((((max((1 >= 0), 1))) | (((arr_4 [i_0] [i_0]) ? (arr_7 [i_0] [i_1] [24] [i_3]) : (!1834644562))))))));
                }

                for (int i_8 = 1; i_8 < 22;i_8 += 1)
                {

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        var_30 += (((arr_9 [i_0] [i_0] [i_8]) != (arr_18 [i_1] [i_1] [i_1] [i_9] [i_1] [i_0])));
                        var_31 = var_11;

                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            arr_36 [i_0] [i_1] [i_1] [i_1] [i_1] [i_10] = (((arr_35 [i_8] [i_1] [i_8 + 1]) > -83));
                            var_32 = ((var_11 < (arr_16 [i_1] [i_1] [i_1] [i_1])));
                        }
                        var_33 = (((arr_4 [i_0] [i_1]) ? (arr_4 [i_0] [i_1]) : 4294967295));
                    }

                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 23;i_11 += 1) /* same iter space */
                    {
                        var_34 = (((arr_27 [i_11] [i_11] [i_11] [i_0]) | (arr_28 [i_0] [i_1] [i_8 + 2] [i_11])));
                        var_35 = 1;
                        var_36 += 103;
                    }
                    /* vectorizable */
                    for (int i_12 = 1; i_12 < 23;i_12 += 1) /* same iter space */
                    {

                        for (int i_13 = 2; i_13 < 21;i_13 += 1) /* same iter space */
                        {
                            var_37 = (min(var_37, ((((arr_9 [i_0] [i_1] [i_8 + 2]) * (arr_18 [i_0] [i_0] [i_8] [i_12] [i_12] [i_0]))))));
                            var_38 &= var_9;
                        }
                        for (int i_14 = 2; i_14 < 21;i_14 += 1) /* same iter space */
                        {
                            var_39 = (arr_15 [i_1]);
                            arr_47 [i_1] [i_1] [i_8] [i_12 + 1] = ((~(arr_17 [0] [i_12 + 2] [i_12 + 1] [i_12 + 2])));
                            arr_48 [i_1] [i_1] [i_1] = (!(!var_14));
                        }
                        for (int i_15 = 2; i_15 < 24;i_15 += 1)
                        {
                            var_40 = (arr_14 [i_0] [i_1] [i_8] [i_15]);
                            var_41 = (((arr_29 [i_15]) ^ (arr_26 [i_0] [i_1] [i_0])));
                        }
                        var_42 *= ((var_8 >= (arr_32 [i_12 - 1] [i_8] [i_8 + 2])));
                        var_43 = 29360128;

                        for (int i_16 = 2; i_16 < 21;i_16 += 1)
                        {
                            var_44 = (((arr_42 [i_0] [i_1] [i_8] [i_12] [i_12]) << (((arr_42 [i_0] [i_0] [i_16 + 2] [i_12 + 1] [i_16]) - 18041291956511890130))));
                            var_45 *= -99;
                            var_46 = -44;
                        }
                        var_47 = var_8;
                    }
                }
                for (int i_17 = 0; i_17 < 25;i_17 += 1)
                {
                    var_48 = ((((max((arr_49 [i_1] [i_0] [i_1] [i_1] [i_1]), -8000978505492490059))) && (((arr_44 [i_0] [i_17] [i_1] [i_17] [i_17] [i_0]) && (arr_11 [i_1])))));
                    var_49 = (max(-83, (arr_55 [i_0] [i_0] [i_17] [i_17])));
                }
                for (int i_18 = 3; i_18 < 24;i_18 += 1)
                {
                    var_50 = var_10;
                    var_51 = (min(var_51, (arr_13 [i_18 + 1] [i_0] [i_0] [i_0] [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 25;i_19 += 1)
                    {
                        for (int i_20 = 3; i_20 < 22;i_20 += 1)
                        {
                            {
                                arr_65 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = (arr_59 [i_18] [i_18] [i_1]);
                                var_52 = (max((((-(arr_50 [i_20] [i_20] [i_20] [i_20 + 1] [i_20 - 2])))), ((126 ? (arr_39 [i_0] [i_18 + 1] [i_0] [i_19] [i_19]) : (arr_0 [i_20 - 1])))));
                                var_53 = ((((4294967284 * 1) * (var_2 / var_2))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_21 = 2; i_21 < 15;i_21 += 1)
    {
        for (int i_22 = 0; i_22 < 17;i_22 += 1)
        {
            {
                var_54 *= (0 / 82);
                var_55 = (min((((!(arr_60 [i_21 - 1] [i_22])))), (((((1 >= (arr_7 [i_22] [i_21] [i_22] [i_21])))) & (arr_10 [i_21] [i_22] [i_21])))));
            }
        }
    }
    var_56 = (max((((var_8 << ((((min(-116, -90))) + 117))))), (((((446623964 << (((-99 + 130) - 30))))) ? 0 : var_12))));
    #pragma endscop
}
