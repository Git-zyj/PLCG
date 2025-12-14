/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_18 *= var_0;
                                var_19 ^= (((((max(var_9, (arr_8 [i_0] [i_2] [i_2] [i_3]))))) ? (max((~124), var_17)) : (~var_2)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_20 *= (((min(((var_11 ? var_9 : var_2)), (max(var_16, 32767)))) >= ((((-32767 - 1) > var_10)))));
                            var_21 = (max(var_21, (min(var_5, (arr_9 [i_0] [8] [i_5] [i_0])))));
                            arr_20 [i_0] [i_1] = (~-18);
                            var_22 -= var_2;
                            var_23 += ((!((min((63 >= 118), var_6)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_24 -= min(255, (~7680));
                            arr_27 [14] [i_1] [i_7] [i_8 + 1] [i_7] &= ((((min((var_15 < var_9), (max(var_3, 15773))))) ? (((((var_5 + (arr_13 [i_0] [i_0] [i_0] [i_0]))) * var_14))) : (((((-(arr_22 [16])))) ? (min(var_15, var_4)) : (var_8 & var_13)))));
                            var_25 = (min(var_25, ((min(((min(var_7, var_15))), ((min((arr_17 [i_0] [i_1] [i_1] [i_1 + 1] [i_7] [11]), (var_13 - var_8)))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 15;i_10 += 1)
                    {
                        {
                            var_26 = (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_27 = var_12;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 20;i_11 += 1)
    {
        for (int i_12 = 1; i_12 < 19;i_12 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 20;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        {
                            var_28 = (arr_35 [i_11]);
                            var_29 = var_1;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 3; i_15 < 18;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 20;i_16 += 1)
                    {
                        {
                            var_30 += (min((~var_7), var_4));
                            var_31 = (var_5 - 192);
                            var_32 = (((arr_36 [i_11] [i_11] [7]) <= 195));
                            var_33 = ((!((((max(224, 83)))))));
                            var_34 = (32767 ^ 0);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 20;i_17 += 1)
                {
                    for (int i_18 = 2; i_18 < 17;i_18 += 1)
                    {
                        {
                            var_35 = (max(var_35, ((((!var_14) ^ var_17)))));
                            var_36 = (max(var_36, 2849085818));
                            var_37 = (max((max((arr_33 [i_17]), var_6)), 237));
                            var_38 = (min(var_38, ((min((var_2 ^ var_10), var_14)))));
                            var_39 = (max(32767, 84));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_19 = 0; i_19 < 20;i_19 += 1)
    {
        for (int i_20 = 0; i_20 < 20;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 20;i_21 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_22 = 1; i_22 < 18;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 20;i_23 += 1)
                        {
                            {
                                arr_67 [i_19] [i_19] [i_19] [i_23] [i_19] = min(var_0, (min(-1, 171)));
                                var_40 = ((var_3 >= (max((arr_36 [i_19] [i_23] [i_23]), (((~(arr_46 [i_19] [i_23] [i_22] [i_23]))))))));
                                var_41 = (((max(var_8, (-1283574712 % var_14))) - (!2147483635)));
                                var_42 = ((var_3 && ((max((min(27238, 750128660)), var_2)))));
                                var_43 = (((max((min(var_17, 155)), var_4)) != var_15));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_24 = 1; i_24 < 18;i_24 += 1)
                    {
                        for (int i_25 = 0; i_25 < 20;i_25 += 1)
                        {
                            {
                                var_44 ^= (((min(-8388608, -1283574712)) != ((-(~var_13)))));
                                var_45 = (min(var_45, ((min((((!(arr_38 [i_25])))), (((max(5, var_12)))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_26 = 1; i_26 < 17;i_26 += 1)
                    {
                        for (int i_27 = 4; i_27 < 18;i_27 += 1)
                        {
                            {
                                arr_78 [19] [19] [19] [i_26] [i_27] = (min((((268431360 >= var_10) ? (arr_33 [i_19]) : 15773)), var_13));
                                var_46 = (min(var_46, ((max((var_0 <= 56474723), (1837241366 | -2147483647))))));
                                var_47 = (max(((((80 > 2) != ((192 << (337965831 - 337965819)))))), (min(((min(var_13, var_16))), (max(var_9, var_15))))));
                                var_48 = ((!(!63)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_28 = 2; i_28 < 17;i_28 += 1)
                    {
                        for (int i_29 = 0; i_29 < 20;i_29 += 1)
                        {
                            {
                                var_49 = (((((~(~var_6)))) & (((((max((arr_68 [i_19] [i_19] [i_19] [14]), var_6)))) & (arr_39 [i_19] [i_21] [i_19])))));
                                var_50 = ((max(var_17, (var_3 >= var_0))));
                                arr_83 [3] [i_19] [i_19] [i_19] [3] [i_29] [i_29] = 65535;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
