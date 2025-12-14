/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_1] [i_4 + 2] [i_2 + 2] = ((var_11 ? 19 : var_1));
                                arr_17 [i_0] [i_0] [i_2] [1] [i_1] = var_2;
                                arr_18 [i_1] = ((!((min((arr_14 [i_0] [i_0] [i_0] [i_0]), (arr_14 [i_0] [i_1] [i_2] [i_0]))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            arr_24 [i_0] [i_1] [i_5] [i_1] |= (arr_8 [i_5 + 2] [i_5] [i_0] [i_5 - 1]);
                            arr_25 [3] [i_1] [i_1] [i_1] [i_1] = (((!1) < 27));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 4; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 17;i_9 += 1)
                        {
                            {
                                arr_34 [i_1] = ((-(46651 | 4095)));
                                var_17 = 46641;
                            }
                        }
                    }
                }
                arr_35 [i_1] = (max(((((3 ? 1 : var_2)) * (!var_10))), (((arr_1 [i_1]) & var_3))));
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 18;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        {
                            arr_41 [i_0] [i_1] [i_10] [i_1] [i_1] [i_1] = (3603693861 & 4123);
                            var_18 = (max(var_18, ((((((((var_9 << (((arr_10 [i_0] [i_0] [i_0]) + 1632710745))))) ? (var_11 ^ var_9) : (-1 >= 53583)))) & (min((((var_6 ? var_4 : 60))), -3603693864))))));
                            var_19 = (((((-(max(-1, 691273435))))) ? var_16 : 3603693864));
                            arr_42 [i_0] [i_1] [i_11] [i_1] [11] [i_1] = (((arr_1 [i_0]) ? 531853339 : ((((((arr_37 [i_11] [i_10] [i_0] [i_0]) ? -4 : var_15))) ? (max(100, 281470681743360)) : 9223372036854775807))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 2; i_12 < 17;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 19;i_13 += 1)
        {
            {
                var_20 = (max(var_20, ((min((max(-7, (arr_46 [i_13 + 1]))), (((-(arr_48 [i_12])))))))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 20;i_15 += 1)
                    {
                        {
                            arr_53 [i_13] [i_12] [i_12] [i_12] [i_13] [i_13] = (min(((((~23168) ? 17 : var_16))), (max(3603693838, var_5))));
                            var_21 = ((-var_14 + ((((arr_47 [i_12] [i_13 + 1] [i_13 + 1]) - var_12)))));
                            var_22 = ((((min(((63 ? -29764 : 113)), -68))) - (max(1, (min(69, 2712345016))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_16 = 1; i_16 < 18;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 17;i_17 += 1)
                    {
                        {
                            arr_59 [i_12] [i_13] [i_16] [i_17] = -29764;
                            var_23 -= (arr_44 [i_12]);
                            var_24 = var_16;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_18 = 2; i_18 < 18;i_18 += 1)
                {
                    for (int i_19 = 2; i_19 < 19;i_19 += 1)
                    {
                        {
                            arr_67 [i_13] [i_13] [i_18] [i_13] = ((!(((199 | (var_11 <= 7))))));
                            var_25 = ((((((arr_57 [i_12] [i_12] [i_12]) * (arr_43 [i_12])))) * -16777215));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
