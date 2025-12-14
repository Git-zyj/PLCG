/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_19 = var_11;
                    var_20 = (max(var_20, ((((((var_1 ? var_14 : (arr_1 [i_0] [i_0])))) ? ((-(arr_5 [i_0] [1] [1] [7]))) : (arr_2 [2] [i_1] [i_2]))))));
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                {
                    var_21 = (((~(arr_5 [1] [i_1] [i_3] [i_3]))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] = (((((((!(arr_2 [i_0] [i_0] [i_0]))) ? (((!(arr_2 [i_0] [i_0] [0])))) : 1))) ? 19456 : (arr_7 [i_0] [3] [i_4] [i_5])));
                                arr_16 [i_0] [1] [6] [i_3] [i_0] [i_5] [6] = (arr_0 [7]);
                            }
                        }
                    }
                    arr_17 [i_3] = -8863229068528365988;
                    var_22 = ((((min((arr_4 [i_3] [i_1] [i_0]), (min((arr_0 [i_0]), var_17))))) ? (arr_6 [i_0]) : (min(((min(2770376029, (arr_13 [i_0] [i_0] [i_1] [2] [1] [i_3] [i_3])))), (min(var_13, 8863229068528365988))))));
                    var_23 |= (max(((~(max(var_9, (arr_9 [i_0] [i_0] [i_3]))))), (!8863229068528365988)));
                }
                for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                {
                    arr_21 [i_6] [i_1] [6] [i_6] = var_13;
                    var_24 = (((min((var_16 && var_17), 1875410062)) + var_3));
                    arr_22 [i_6] [i_1] [1] [1] = ((min((arr_6 [i_6]), (arr_6 [i_6]))));
                }
                var_25 *= 144;
            }
        }
    }
    var_26 = (((((2095871513 ? ((var_7 ? 37982 : 54429)) : (var_9 != 862507038)))) < (min(var_4, (0 | var_16)))));
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 11;i_8 += 1)
        {
            {
                var_27 = 3;

                for (int i_9 = 2; i_9 < 9;i_9 += 1)
                {

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
                    {
                        var_28 = var_9;
                        var_29 = (((arr_14 [i_7 - 2] [i_7 - 2] [i_8 - 2] [i_9 - 2] [i_7 - 2] [6] [i_10]) ? var_14 : (arr_32 [i_8] [7] [i_8 + 1])));
                        arr_35 [i_10] [i_8] [i_8] [i_10] = (arr_28 [i_7 - 1] [i_7 - 1]);
                    }
                    for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
                    {
                        arr_38 [i_8] [i_8] [i_9 + 1] = 1;
                        var_30 = (min(var_30, ((max((arr_23 [i_7 + 3] [i_7 + 3]), (min((max(18446744073709551615, var_3)), (arr_36 [0] [9] [i_8 - 3] [i_8 - 3] [i_7 + 3]))))))));
                    }
                    for (int i_12 = 0; i_12 < 13;i_12 += 1) /* same iter space */
                    {
                        var_31 = (min(((64 ? (arr_1 [i_7] [i_7]) : (((min((arr_2 [i_7] [i_8 - 3] [i_9 - 2]), (arr_31 [i_12] [i_9 + 1] [1]))))))), var_14));
                        arr_41 [i_7] [i_7] = ((var_0 >= (arr_10 [i_12] [i_9 - 2] [i_7 + 2] [i_7 + 2])));
                    }
                    arr_42 [i_9] = (min(((((((228 < (arr_23 [i_8 + 2] [i_8 - 2]))))) ^ (max((arr_14 [i_7] [i_7 + 1] [i_7] [i_7 + 1] [i_7] [i_7] [i_7]), var_5)))), (max(var_13, (max(131071, var_0))))));
                    arr_43 [i_7 - 1] [10] [i_9 - 1] = var_10;
                }
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {

                    /* vectorizable */
                    for (int i_14 = 1; i_14 < 11;i_14 += 1)
                    {

                        for (int i_15 = 0; i_15 < 13;i_15 += 1)
                        {
                            arr_53 [i_14] = (((arr_25 [i_7 - 2]) ? (~var_5) : (~var_12)));
                            var_32 = (-8983102281072411215 < (arr_51 [i_14] [i_14]));
                        }
                        for (int i_16 = 2; i_16 < 10;i_16 += 1)
                        {
                            var_33 = (min(var_33, (arr_36 [i_7] [i_8] [i_13] [i_14 + 2] [i_16])));
                            arr_58 [i_14] [i_16] [i_13] [i_14] = (arr_8 [i_14] [i_13] [i_8 + 2] [i_7 - 1]);
                            arr_59 [i_7] [i_8] [i_8] [i_8] [i_8] [i_14] [i_14] = 2272195194160202129;
                            arr_60 [i_14] = ((~(arr_37 [i_16 - 1])));
                        }
                        for (int i_17 = 1; i_17 < 11;i_17 += 1)
                        {
                            arr_63 [i_13] [i_8] [i_8] [i_14] [4] = var_11;
                            var_34 -= ((~(arr_44 [i_8] [i_8])));
                            arr_64 [1] [11] [i_14] [11] = (((arr_12 [i_7] [i_8 - 1] [11] [i_8 - 1] [i_17]) * (!var_6)));
                        }
                        for (int i_18 = 0; i_18 < 13;i_18 += 1)
                        {
                            var_35 = var_12;
                            var_36 = var_16;
                        }
                        var_37 = ((30 ? 268435455 : (arr_24 [5] [i_8])));
                        var_38 = (max(var_38, (arr_1 [i_7 + 1] [i_7 + 1])));
                        var_39 = ((~(!var_8)));
                        var_40 = ((((!(arr_57 [6])))));
                    }
                    arr_68 [i_13] [9] [0] [i_7] = 215576971;
                    arr_69 [i_7] [i_7] [i_7] [i_7] = ((min(127, (var_4 % var_0))));
                }
            }
        }
    }
    #pragma endscop
}
