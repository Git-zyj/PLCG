/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;
    var_21 = (((var_5 / var_16) * ((((min(var_16, var_9))) * ((var_9 ? 138 : var_1))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_22 = 1;
                    var_23 |= (!((-var_6 && ((max(var_7, (arr_1 [i_0])))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_24 = ((var_13 ? ((var_4 % (max((arr_1 [7]), (arr_10 [i_0] [i_0] [i_3] [3]))))) : (((((var_17 != (arr_11 [i_0] [i_0] [i_4] [i_4]))))))));
                    var_25 = ((219 << (((arr_4 [i_4] [i_0] [i_0]) * ((((arr_3 [i_0] [i_3]) < 1)))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {
                    arr_18 [i_0] [i_5] [i_0] [i_0] = (min((max((arr_3 [i_6] [i_5]), (arr_3 [i_0] [i_0]))), (arr_3 [i_0] [i_5])));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_26 += (min(-var_13, -17));
                                arr_26 [i_0] [i_5] [i_0] [i_7] [i_0] = (min(var_1, ((max(var_3, (arr_22 [i_6] [i_5] [i_6] [i_7] [i_8] [i_0]))))));
                                var_27 = 204;
                            }
                        }
                    }
                }
            }
        }

        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    {
                        var_28 = (((arr_31 [i_0] [i_0]) - (min((arr_31 [i_0] [i_0]), (arr_31 [i_0] [i_0])))));
                        arr_37 [i_0] [i_9] [i_0] [i_0] = ((var_7 == ((max((arr_23 [i_0] [i_9] [i_9] [i_9] [i_9]), 115)))));
                    }
                }
            }
            arr_38 [9] [i_0] [i_0] = (max((max((~var_0), (max(var_1, (arr_25 [i_0] [i_0] [i_0] [8] [i_0] [i_0] [1]))))), 92));
        }
        var_29 = (((((arr_6 [i_0] [i_0] [i_0]) ? (arr_6 [i_0] [i_0] [i_0]) : (arr_6 [i_0] [i_0] [i_0])))) ? ((var_14 ? (arr_6 [i_0] [i_0] [i_0]) : (arr_6 [i_0] [i_0] [i_0]))) : (((arr_10 [i_0] [i_0] [i_0] [7]) | (arr_6 [i_0] [i_0] [i_0]))));
    }
    for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
    {
        var_30 = (arr_4 [3] [i_12] [i_12]);

        for (int i_13 = 0; i_13 < 11;i_13 += 1)
        {
            var_31 = (((max((arr_19 [i_13] [i_13] [i_13] [i_13]), ((((arr_25 [i_12] [i_13] [i_12] [i_13] [i_13] [i_13] [i_12]) == -33))))) % ((((-9223372036854775792 < 16) % (max((arr_5 [i_12] [i_13] [i_12]), (arr_2 [i_13] [i_12]))))))));
            var_32 += ((-((-(arr_21 [i_13] [4] [i_12])))));
            var_33 ^= var_19;
        }
        for (int i_14 = 0; i_14 < 11;i_14 += 1)
        {
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 11;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 11;i_17 += 1)
                    {
                        {
                            var_34 = (i_15 % 2 == 0) ? (((var_17 ? (((((16434984542855949165 ? (arr_40 [i_12] [9]) : -9)) >> (((max(var_14, (arr_53 [i_15] [i_15] [i_15] [i_15] [i_15] [i_12]))) - 13292776800311785789))))) : (arr_13 [i_15] [7])))) : (((var_17 ? (((((16434984542855949165 ? (arr_40 [i_12] [9]) : -9)) >> (((((max(var_14, (arr_53 [i_15] [i_15] [i_15] [i_15] [i_15] [i_12]))) - 13292776800311785789)) - 7781227478082830688))))) : (arr_13 [i_15] [7]))));
                            var_35 = (arr_20 [i_15] [i_14] [i_16]);
                            arr_55 [i_15] [i_15] [i_16] [0] = ((((((arr_35 [i_17] [i_15] [i_15] [i_12]) <= -33))) & (((!((min((arr_41 [i_12] [i_12]), (arr_47 [i_12] [i_15] [i_17])))))))));
                        }
                    }
                }
            }

            for (int i_18 = 0; i_18 < 11;i_18 += 1)
            {
                var_36 = (min((((max((arr_24 [0] [0] [i_14] [i_14] [i_18]), (arr_34 [i_12] [i_12]))) >= ((((arr_9 [i_12] [6] [4]) ? (arr_3 [3] [i_14]) : (arr_12 [i_12] [i_14] [i_12] [i_14])))))), (((((arr_1 [i_18]) ? var_2 : 30)) < (arr_9 [i_12] [i_14] [i_18])))));
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 11;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 11;i_20 += 1)
                    {
                        {
                            arr_64 [i_20] [i_20] = 958995062;
                            var_37 = (((min((arr_14 [i_12]), (arr_21 [i_20] [i_20] [i_14]))) ^ (min((arr_21 [i_12] [i_20] [i_18]), (arr_21 [i_12] [i_20] [i_14])))));
                            var_38 = (min((((arr_19 [i_12] [i_14] [i_18] [i_20]) ? var_0 : (arr_19 [i_20] [i_18] [i_14] [i_20]))), (((arr_19 [i_12] [i_12] [i_12] [i_20]) ? (arr_19 [i_12] [1] [i_18] [i_20]) : (arr_19 [i_12] [i_14] [i_18] [i_20])))));
                            arr_65 [5] [5] [i_18] [i_20] [i_20] = (((((arr_46 [i_12]) ? var_16 : (arr_8 [i_14] [2]))) << (((arr_46 [i_12]) - 1800893604))));
                            var_39 = var_11;
                        }
                    }
                }
            }
            var_40 = var_7;
        }
        var_41 = -14996;
        var_42 += ((~((max((arr_14 [i_12]), (arr_14 [i_12]))))));
    }
    for (int i_21 = 0; i_21 < 11;i_21 += 1) /* same iter space */
    {
        var_43 = var_12;
        var_44 = (max(var_44, ((min(5742740655294180186, ((((arr_14 [i_21]) < (max((arr_9 [2] [i_21] [i_21]), (arr_15 [10])))))))))));
    }
    /* vectorizable */
    for (int i_22 = 0; i_22 < 11;i_22 += 1) /* same iter space */
    {
        var_45 = (~4123444016);

        for (int i_23 = 0; i_23 < 11;i_23 += 1)
        {
            var_46 = (max(var_46, (arr_21 [i_22] [0] [i_23])));
            var_47 *= 3828880389210244585;
        }
        /* LoopNest 2 */
        for (int i_24 = 0; i_24 < 11;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 1;i_25 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_26 = 0; i_26 < 11;i_26 += 1)
                    {
                        for (int i_27 = 0; i_27 < 11;i_27 += 1)
                        {
                            {
                                var_48 = ((-((var_0 * (arr_77 [i_22] [i_24] [i_25])))));
                                var_49 = (arr_32 [i_22]);
                            }
                        }
                    }
                    arr_85 [i_22] = (arr_74 [8] [i_22]);
                    arr_86 [i_22] [i_24] [i_25] [2] = ((-((-(arr_1 [i_22])))));
                }
            }
        }
        var_50 = var_16;
        arr_87 [2] |= 16911;
    }
    #pragma endscop
}
