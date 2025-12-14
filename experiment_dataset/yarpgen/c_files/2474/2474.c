/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_6 < ((((max(var_3, 0))) ? var_5 : (var_7 | var_5))));
    var_15 = ((var_8 + 2147483647) << (((((((var_10 / var_3) ? (min(var_8, var_13)) : var_6)) + 673693594)) - 22)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = (arr_1 [i_0]);

                /* vectorizable */
                for (int i_2 = 4; i_2 < 23;i_2 += 1)
                {
                    var_17 = (max(var_17, ((((((263657887044228120 ? (arr_4 [i_2 - 3] [i_1]) : (arr_8 [i_0] [i_2] [i_2] [i_2 - 3])))) ? (arr_6 [i_0 - 1] [i_2] [i_2] [i_2 + 1]) : (((arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? (arr_2 [9]) : (arr_5 [i_0] [i_1] [i_2]))))))));
                    var_18 = (max(var_18, var_11));
                    arr_9 [i_0] [i_1] [i_2] = (((arr_7 [i_1] [i_0 - 1] [i_0 - 1]) ? var_13 : 1));
                }
                var_19 = (min(var_19, var_13));

                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {

                    for (int i_4 = 1; i_4 < 23;i_4 += 1)
                    {
                        arr_15 [i_0] [i_1] [i_0] [i_0] = (((max(var_12, (arr_0 [i_0 - 1] [i_0 - 1]))) ? (max((arr_0 [17] [i_0 - 1]), var_6)) : (((var_4 < (arr_8 [i_4 + 1] [i_0] [i_0 - 1] [i_4 - 1]))))));
                        var_20 = (max((((arr_13 [i_0]) ? var_12 : (var_12 & 2147483647))), (min(1, (((arr_0 [i_1] [i_1]) ? var_5 : var_6))))));
                        var_21 = (min(var_21, ((min(1, 1)))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_22 = (min(var_22, ((((arr_6 [4] [i_1] [i_1] [i_3]) ? var_4 : -95)))));
                        var_23 ^= ((((arr_11 [i_1] [i_1] [i_3]) + 2147483647)) << (!var_6));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_20 [i_0] [i_1] [i_0] = (((((max(1, -430077086)))) ? 17847929882246401547 : 1));
                        var_24 = (+(((arr_10 [i_0] [i_3 - 1]) ? (arr_6 [i_0 - 1] [i_0] [i_3] [i_3]) : (arr_10 [i_0] [i_3 - 1]))));
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            var_25 = 581096008;
                            var_26 = var_6;
                            arr_26 [i_8] [i_1] [i_0] [i_1] [i_0 - 1] = (arr_7 [i_7] [i_3] [1]);
                            var_27 = (min(var_27, (arr_5 [12] [i_1] [i_0])));
                        }
                        var_28 = (arr_24 [i_0] [i_0]);
                        var_29 = (max(var_29, (((((((arr_5 [i_0 - 1] [i_1] [i_3]) + var_6))) ? -65 : ((var_11 ? (arr_23 [i_0] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_0] [i_0 - 1]) : (arr_23 [i_0] [i_3 - 1] [i_3] [i_0] [i_3 - 1] [i_0] [i_0 - 1]))))))));
                    }
                    arr_27 [i_0] [i_0] [i_0] = var_9;
                }
                for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                {

                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        var_30 = (min((((!(arr_19 [i_0] [i_0] [i_0] [i_0])))), (((var_0 + 2147483647) << (!var_0)))));
                        var_31 = (min((arr_8 [i_10] [i_0] [i_10] [18]), (max((max(var_6, 4174032161702922032)), var_6))));
                    }
                    var_32 = (min((((!(arr_13 [i_0])))), (((max(var_10, var_12)) | ((var_10 ? (arr_21 [4] [i_1] [i_1] [i_0]) : 1))))));

                    for (int i_11 = 0; i_11 < 0;i_11 += 1)
                    {
                        var_33 -= (max((arr_5 [i_0] [i_1] [i_9]), 1));
                        arr_39 [i_11] [i_0] [i_0] [i_0] = (max(((((var_12 | var_2) == -609748164))), (max(-2147483647, -2147483647))));
                    }
                }
                for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
                {
                    arr_42 [i_0] [i_0] [i_12] = var_12;
                    var_34 = ((-8628364390732863319 ? ((var_7 | (max(var_3, -2147483638)))) : (arr_11 [i_0] [i_1] [i_12])));
                    var_35 = ((~(!var_1)));
                    var_36 |= (arr_5 [i_1] [i_1] [i_0]);

                    for (int i_13 = 2; i_13 < 23;i_13 += 1)
                    {

                        for (int i_14 = 1; i_14 < 22;i_14 += 1)
                        {
                            arr_48 [i_14 + 2] [i_0] [i_13] [i_12] [i_1] [i_0] [i_0 - 1] = min(((-115 == (arr_37 [i_13 - 1] [i_13] [i_13 - 2] [i_13]))), ((!(var_8 != var_12))));
                            var_37 ^= (15946243836404059451 / -2621);
                        }
                        for (int i_15 = 0; i_15 < 24;i_15 += 1)
                        {
                            var_38 = (min(((max((arr_36 [i_0] [i_13]), 2147483647))), (((!(3101363586661865029 + var_12))))));
                            var_39 = (max(var_39, (((((2147483637 ? (var_4 + var_0) : var_0)) / ((min(var_2, (var_0 ^ var_6)))))))));
                            arr_52 [i_0] [7] [i_13 - 1] [i_15] = (((min(var_11, var_10)) + ((min(var_12, (arr_41 [i_0 - 1] [i_13 + 1] [i_15]))))));
                        }

                        for (int i_16 = 0; i_16 < 24;i_16 += 1)
                        {
                            var_40 = (max(var_40, var_6));
                            arr_55 [i_0] [i_0] [i_0] [i_0] [i_16] [i_16] = var_9;
                            var_41 = -528537575;
                        }
                        for (int i_17 = 0; i_17 < 24;i_17 += 1)
                        {
                            arr_59 [i_0] [i_0] [i_0] [i_0] [i_0] [i_13] [i_17] = ((1 ? (arr_28 [i_13] [i_13 - 1] [i_13 + 1] [i_13]) : (((((!(arr_57 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]))) ? (max(-2063795419, 1)) : (((arr_16 [i_0 - 1] [i_1] [i_0 - 1] [i_0 - 1] [i_17] [i_13]) ? var_5 : var_11)))))));
                            var_42 = ((!(((((-(arr_45 [i_0] [i_1] [i_1] [i_13 - 2] [i_1] [i_0])))) == ((var_5 ? 2500500237305492191 : var_12))))));
                        }
                        for (int i_18 = 0; i_18 < 1;i_18 += 1)
                        {
                            var_43 *= -1510680691;
                            var_44 ^= max(var_0, ((((arr_60 [i_1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]) <= (arr_60 [i_1] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0])))));
                        }
                    }
                }
            }
        }
    }
    var_45 = var_7;
    #pragma endscop
}
