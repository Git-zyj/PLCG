/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_11 = (((var_2 ? 38654 : (arr_3 [i_2 + 2] [i_3 + 1] [i_3]))));
                            var_12 = ((~(arr_1 [i_3])));
                            var_13 = 26882;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_14 = var_7;
                            var_15 = (((((arr_14 [i_4 + 2] [i_4 + 2] [i_4 - 2]) < 64))) <= ((((arr_11 [i_4] [i_4 + 2] [i_4] [i_4 + 3] [i_4 + 3] [i_4 + 3]) == var_9))));
                            var_16 = (((~-32752) < ((var_2 ? -504 : 1008))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_17 = 1;
                                var_18 = ((!(!var_0)));
                                arr_22 [i_0] [i_6] [i_7] = ((((var_2 == (max(var_9, var_5)))) ? (((((max(var_2, (arr_3 [i_1] [i_6] [i_7])))) != (var_1 | 504)))) : -5));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_9 = 1; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            {
                                arr_33 [i_10 + 1] [i_11] = var_8;
                                var_19 -= (((!960) >= (max(42345, ((var_9 ? 26882 : -977))))));
                                var_20 *= (((((4302994177081729283 ? 0 : 18446744073709551609))) ? ((-4582962666349137593 | (1 < 955))) : ((((~var_0) ? (~38661) : var_2)))));
                                var_21 = var_5;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 1; i_12 < 7;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 8;i_13 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 6;i_16 += 1)
                        {
                            {
                                var_22 = (max(var_22, var_4));
                                var_23 = (max(var_23, (--977)));
                                var_24 = ((var_9 % ((-10 * (arr_25 [i_12 + 2])))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 10;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        {
                            var_25 = var_3;
                            arr_52 [i_12] [i_13] [i_12] [i_18] = ((-((-(!100)))));
                            arr_53 [i_12 + 2] [i_13] [i_17] [i_17] [i_12 + 2] = (max((min((arr_37 [i_12 - 1]), (arr_31 [i_12 + 3] [i_12 + 3] [i_12 + 3] [i_13 - 1] [i_17]))), (arr_37 [i_12 + 3])));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_19 = 0; i_19 < 10;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 10;i_20 += 1)
                    {
                        for (int i_21 = 2; i_21 < 9;i_21 += 1)
                        {
                            {
                                var_26 |= ((-38654 && ((((max(2047, -90))) != (arr_30 [i_12] [i_12] [i_19] [i_19])))));
                                var_27 = var_10;
                                var_28 = ((((max(2, var_3))) < ((max(31, 38654)))));
                                var_29 ^= -var_4;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_22 = 0; i_22 < 10;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 10;i_23 += 1)
                    {
                        for (int i_24 = 0; i_24 < 10;i_24 += 1)
                        {
                            {
                                arr_71 [i_12] [i_13] [i_22] [i_23] [i_24] = ((504 ? 38654 : 29569));
                                var_30 += (!38654);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 10;i_25 += 1)
                {
                    for (int i_26 = 2; i_26 < 8;i_26 += 1)
                    {
                        {
                            var_31 &= max((min((arr_0 [i_12 + 3]), (arr_75 [i_12 + 3] [i_13 - 1] [i_26 - 1]))), ((((~var_4) && (var_4 & var_5)))));
                            var_32 = ((-(max((min((arr_12 [i_12] [i_12] [i_25] [i_12]), var_0)), (((100 ? -980 : 63513)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
