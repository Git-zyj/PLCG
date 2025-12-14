/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_19 ^= ((((max((((!(arr_2 [i_0])))), 1))) || -1174665631));
                            var_20 = ((!(((!4) != (arr_0 [i_0] [i_2])))));
                            var_21 ^= (max((((!(((268435456 >> (((arr_7 [i_0 + 3] [i_2] [i_2] [i_3 - 2]) - 404433832)))))))), (max(((1 >> (4092 - 4063))), 206))));
                            arr_9 [i_0] [i_1] [i_2] [i_1] = (max(((((((var_14 ? var_3 : var_3))) && 1))), (max((1 + 33538048), ((33538048 ? (arr_5 [i_2] [i_2]) : var_12))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_22 &= -var_12;
                            var_23 = ((~((var_1 ^ (~var_14)))));
                            var_24 = (min(var_24, ((max(268435456, (-127 - 1))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 3; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 23;i_8 += 1)
                        {
                            {
                                arr_23 [i_0] [i_1] [i_6] [i_1] [18] = (((((3276893033 == (arr_17 [i_1] [i_6 - 3] [i_1] [i_8 - 4] [i_8 - 1] [i_1])))) | ((min((arr_21 [i_8] [i_8 - 2] [i_1] [4] [i_1] [i_7] [i_7]), (!-33538030))))));
                                var_25 = (!(arr_3 [i_1]));
                                var_26 = (-127 - 1);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        {
                            arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] = ((var_4 | ((((max((arr_0 [i_1] [i_1]), (arr_19 [i_0] [i_1] [i_1] [i_9] [i_10]))))))));
                            var_27 = (!2079);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_11 = 4; i_11 < 8;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 8;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 9;i_15 += 1)
                        {
                            {
                                arr_43 [i_13] [2] [2] [i_15] [2] = (!((min(1, -26446))));
                                var_28 = (arr_27 [i_11 - 3] [i_13] [i_15 - 1]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 2; i_16 < 9;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 8;i_17 += 1)
                        {
                            {
                                var_29 += ((~(~2)));
                                arr_50 [i_11 - 3] [i_13] = (min((((max(110155063, 1)) | ((var_3 * (arr_32 [i_11]))))), ((((((arr_26 [i_17 + 3] [i_17 + 3] [i_13] [i_16 + 2]) + 2147483647)) >> ((((var_17 ? (arr_11 [6] [i_12] [6] [i_16]) : 2119)) + 3694544650904315445)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 1; i_18 < 8;i_18 += 1)
                    {
                        for (int i_19 = 2; i_19 < 8;i_19 += 1)
                        {
                            {
                                var_30 = (max(var_30, (((((((-2147483647 - 1) ? -99 : -351933166)) ^ -351933166))))));
                                var_31 = ((-var_12 == (min(var_3, ((((arr_53 [i_13 + 3] [i_13 + 3] [i_13 + 3] [i_12] [i_11 + 3]) + (arr_0 [i_11 - 3] [i_12]))))))));
                                var_32 = ((!(~var_11)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_20 = 0; i_20 < 25;i_20 += 1)
    {
        for (int i_21 = 2; i_21 < 24;i_21 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_22 = 0; i_22 < 25;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 25;i_23 += 1)
                    {
                        for (int i_24 = 3; i_24 < 24;i_24 += 1)
                        {
                            {
                                var_33 = (max(var_33, 11062228312986672402));
                                var_34 += (min((arr_62 [i_24 + 1] [i_21 + 1] [i_21 - 1] [i_21]), (((!((min(var_3, 21))))))));
                                var_35 = (4294967294 <= 4294967278);
                                var_36 *= (max(32740, 1827618446));
                                var_37 = (max(var_37, ((min((((((arr_61 [i_24 - 3] [i_24 - 3]) + 9223372036854775807)) << (((((arr_56 [i_24 - 1]) + 1645333180)) - 58)))), (((((1 - (-127 - 1))) - ((-(arr_56 [i_20])))))))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 25;i_25 += 1)
                {
                    for (int i_26 = 0; i_26 < 25;i_26 += 1)
                    {
                        {
                            var_38 = (max(var_38, var_14));
                            arr_74 [i_20] [i_20] [16] [i_20] [i_20] [i_20] = 33538049;
                            var_39 = (max((52 < 6796667947813408331), (((max((arr_70 [i_20] [i_21] [i_20] [i_26]), (arr_69 [i_20])))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
