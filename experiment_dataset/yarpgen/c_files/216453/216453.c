/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = min(((((~var_8) && ((min(1048575, 0)))))), var_5);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_0] [9] [i_2] [i_1] [i_0] [i_0] = 255;
                                var_11 = 255;
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] = (!((min((arr_13 [i_1] [i_0] [i_0 + 1] [i_0] [i_0]), (arr_0 [i_0] [i_1])))));
                    arr_16 [i_0] = (min(65535, 18446744073708503041));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    var_12 |= (((arr_7 [i_0] [i_0 + 1] [i_0 - 1]) ? (arr_7 [i_5] [i_5] [i_5]) : ((18446744073709551615 * (arr_0 [i_5] [i_5])))));
                    arr_19 [i_0] [i_1] [i_5] = (arr_3 [i_0 - 1]);
                }
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    var_13 -= (((((~(min(var_0, var_1))))) & var_9));
                    var_14 = -8686130078703261416;
                }

                /* vectorizable */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_15 *= ((((var_9 ? (arr_6 [i_0] [i_8] [i_9]) : 1048565)) < (~0)));
                                var_16 = (((arr_13 [i_0] [i_0 + 1] [i_0 - 1] [i_0] [10]) <= (arr_29 [i_0 - 1] [i_0])));
                            }
                        }
                    }
                    arr_31 [i_0] [i_1] = arr_24 [i_0 + 1] [i_0 + 1] [i_0 + 1];
                    var_17 = -88;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 2; i_10 < 18;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 21;i_11 += 1)
        {
            {

                /* vectorizable */
                for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
                {
                    var_18 = var_6;
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 18;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 22;i_14 += 1)
                        {
                            {
                                var_19 *= (arr_34 [i_12]);
                                arr_44 [i_10 + 4] [i_11 - 1] [i_10] [4] [6] = (arr_32 [i_10]);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_15 = 0; i_15 < 22;i_15 += 1) /* same iter space */
                {
                    var_20 = (20543 / 65535);
                    arr_47 [i_10] [i_11] [20] [i_11 + 1] = (((-9223372036854775807 - 1) ? (~0) : 10549158438323174180));
                    var_21 = ((var_9 ? ((((arr_34 [i_10]) && 0))) : (arr_43 [i_11 - 1] [i_11 + 1] [i_11] [i_11 - 1] [i_11])));
                }
                for (int i_16 = 0; i_16 < 22;i_16 += 1) /* same iter space */
                {
                    var_22 = (i_10 % 2 == zero) ? ((((arr_37 [i_10] [i_11] [i_10 - 1] [i_11]) < ((((min((arr_46 [i_10] [i_11 - 1] [i_16]), 1)) << ((((-(arr_40 [i_10 + 4] [13] [i_10 + 4]))) + 1968272069)))))))) : ((((arr_37 [i_10] [i_11] [i_10 - 1] [i_11]) < ((((((min((arr_46 [i_10] [i_11 - 1] [i_16]), 1)) + 2147483647)) << ((((((-(arr_40 [i_10 + 4] [13] [i_10 + 4]))) + 1968272069)) - 4))))))));
                    arr_52 [i_10] [i_10] = arr_39 [i_11];
                }
                var_23 = (-9223372036854775807 - 1);
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 22;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 19;i_18 += 1)
                    {
                        {
                            var_24 = (min(-28805, ((((2143934942 && -20485) ? ((((arr_39 [i_10 + 1]) ? 3584 : (arr_46 [i_10] [i_10] [i_11])))) : ((var_5 ? var_0 : 20485)))))));
                            arr_58 [i_10] [i_17] [i_11] [i_10] = (min(((min((arr_53 [i_18] [i_18 + 3] [i_18]), (arr_53 [i_18 + 2] [i_18 - 1] [i_18])))), ((~(arr_53 [i_18] [i_18 + 3] [i_18])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
