/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 = (max(var_11, (((0 - (((min(5805099955292550572, 5805099955292550552)) + (12641644118417001043 + -2147483628))))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_1] [1] = ((((max(-2003112596, -30828))) ? (!var_3) : 504403158265495552));

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            var_12 = (!var_3);
                            var_13 = (max(0, 182));
                            var_14 = (((((-1 ? (min(-2003112594, 12641644118417001047)) : -var_2))) ? (min((arr_8 [i_0]), (~110))) : (arr_14 [i_2] [i_3] [i_4])));
                        }
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            var_15 = (max(var_15, 1289939473907784075));
                            var_16 = (min(var_16, var_1));
                        }
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            var_17 = ((((arr_20 [1] [i_1] [i_2] [i_3] [i_6 + 1]) + (((var_2 ? (arr_4 [i_0]) : var_6))))));
                            var_18 += 12641644118417001044;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 0;i_8 += 1)
                {
                    {
                        var_19 = (max(var_19, 12641644118417001069));
                        var_20 ^= ((-63 ^ (((arr_8 [i_0]) ? (arr_21 [i_1 - 1] [i_1] [1] [i_8 + 1] [i_8 + 1]) : 0))));
                        var_21 = var_1;
                        var_22 = (~628947257);
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    {
                        var_23 += (((arr_28 [i_0]) ? var_5 : var_3));

                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                        {
                            var_24 = (min(var_24, -var_5));
                            arr_34 [i_0] [i_0] [i_10] [1] = (arr_16 [i_10 - 1] [i_10] [i_10]);
                        }
                        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                        {
                            var_25 = (max(var_25, -var_3));
                            var_26 = ((((max((((64 ? (arr_1 [i_10] [i_11]) : var_5))), ((1 ? var_7 : var_6))))) ? (min((min(63, 3)), -13739)) : (arr_24 [i_0] [i_0] [i_11] [i_13])));
                            var_27 = (max(var_27, -12039));
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                        {
                            var_28 = (max(var_28, ((((arr_25 [i_14] [i_9] [13]) ? (arr_0 [i_10 - 1]) : (var_1 < var_2))))));
                            arr_41 [i_0] [i_9] [i_10] [i_0] [i_14] |= (((var_9 ? var_5 : 163)));
                            var_29 = ((~(arr_3 [i_0] [i_9] [i_10 - 1])));
                        }
                        var_30 = ((153 ? 0 : 1));
                        arr_42 [5] [i_9] [i_10] [i_10 - 1] [i_11] = (min(((((arr_22 [i_10 - 1] [i_10] [i_11] [i_11]) >= 0))), (min(9048252132118219864, 1))));
                        arr_43 [i_0] [i_10] [i_0] [i_11] = ((((253749840 > (arr_38 [i_10 - 1] [i_10 - 1])))) > (((arr_17 [i_11] [i_11] [i_11] [8] [i_10 - 1]) ? ((5805099955292550531 ? -32767 : -2003112600)) : (var_5 % var_6))));
                    }
                }
            }

            /* vectorizable */
            for (int i_15 = 0; i_15 < 21;i_15 += 1)
            {
                var_31 = ((arr_5 [i_0] [i_9] [i_9] [i_15]) > (arr_5 [i_0] [i_0] [i_0] [i_0]));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 21;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 21;i_17 += 1)
                    {
                        {
                            var_32 = (32759 | 22507);
                            var_33 = (min(var_33, ((!(((38025 ? (arr_51 [i_0] [i_0] [i_15] [i_16] [i_17]) : var_2)))))));
                            var_34 *= (var_4 == var_3);
                        }
                    }
                }
                var_35 = (!1);
            }
        }
        arr_52 [i_0] = (1 ? (2003112586 - 5805099955292550531) : var_6);
        arr_53 [i_0] |= var_9;
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {
                {
                    arr_61 [i_0] [i_18] [i_19] [i_18] = 1;
                    var_36 = (max(var_36, (((((min((max((arr_39 [i_0] [i_0] [i_18] [i_19] [9] [15] [i_19]), 15172497678613676238)), (arr_21 [i_0] [i_18] [i_19] [i_19] [i_18])))) ? (!64) : (var_2 / var_3))))));
                }
            }
        }
    }
    for (int i_20 = 0; i_20 < 1;i_20 += 1)
    {
        /* LoopNest 3 */
        for (int i_21 = 0; i_21 < 12;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 12;i_22 += 1)
            {
                for (int i_23 = 2; i_23 < 11;i_23 += 1)
                {
                    {

                        for (int i_24 = 0; i_24 < 1;i_24 += 1)
                        {
                            var_37 = 628947246;
                            var_38 = (max(var_38, ((((((var_6 >> (((var_5 & -1067) - 377780853))))) ? (arr_65 [i_20]) : (((((var_7 ^ (arr_49 [i_24] [i_23 - 2] [i_23] [7] [7] [1]))) != (~1)))))))));
                            var_39 = ((var_5 ? -763363042 : (((-628947263 > -30822) >> (-26 + 39)))));
                            var_40 = ((((((var_3 % (arr_19 [i_23]))) > var_9))) & 628947257);
                        }

                        /* vectorizable */
                        for (int i_25 = 0; i_25 < 12;i_25 += 1)
                        {
                            var_41 = var_2;
                            var_42 = (((arr_28 [i_23 + 1]) & 12639));
                            var_43 = ((1 ? 1 : 32760));
                        }
                        for (int i_26 = 0; i_26 < 12;i_26 += 1)
                        {
                            var_44 = ((((((arr_71 [i_23 + 1] [i_23 - 2] [i_23 - 1] [i_26] [i_26]) ? var_6 : (arr_71 [2] [i_23 - 1] [i_23 - 2] [10] [i_23])))) ? (131 <= 2003112571) : -var_3));
                            var_45 = (((((arr_33 [i_26]) ? var_5 : (!var_8))) >> (--1)));
                            arr_79 [i_26] [10] [i_22] [i_23 - 2] [1] [i_20] [1] = (0 ^ 1);
                        }
                    }
                }
            }
        }
        var_46 = (min(var_2, ((30828 & (arr_6 [i_20] [i_20] [i_20] [i_20])))));
        var_47 = ((1083386011 << (((min((var_8 ^ 15232), 30831)) - 30803))));
        var_48 = (min(var_48, (arr_55 [i_20] [i_20] [i_20])));
        var_49 |= (min(var_3, (((min(var_7, var_9))))));
    }
    var_50 = var_5;
    #pragma endscop
}
