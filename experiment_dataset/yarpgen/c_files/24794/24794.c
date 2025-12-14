/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_18 |= ((~(((((var_7 ? var_11 : -978825266)) > (((var_7 < (arr_7 [1] [i_0 + 1] [i_0 + 1] [1] [i_3])))))))));
                            arr_9 [i_0] [i_1] [3] [1] [3] [i_0] = ((-var_1 != (~-978825265)));
                            arr_10 [i_0] [i_0] [i_2] [i_0] |= ((-((var_11 ? var_0 : (arr_5 [i_3 - 3] [5] [i_3 - 3] [i_3])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_19 = (min(47, (arr_16 [i_0] [i_1] [i_4 - 2] [i_5] [9])));
                            arr_17 [i_4] = 127;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_20 = (arr_18 [i_1]);
                            var_21 |= (((((!(((-(arr_4 [i_6]))))))) + (((!(arr_13 [i_0 - 1] [i_1]))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 8;i_10 += 1)
                        {
                            {
                                var_22 = 192;
                                var_23 = (min(var_23, ((((((147 ? (arr_3 [i_10 + 1] [i_10 - 2] [i_10 + 1]) : (arr_3 [i_10 + 3] [i_10 + 2] [i_10 - 1])))) || (arr_31 [i_1] [i_1] [i_1] [i_1]))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_11 = 1; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 9;i_13 += 1)
                        {
                            {
                                arr_39 [i_12] = ((((arr_31 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? (arr_31 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]) : (arr_7 [i_13 + 2] [i_11 + 1] [i_1] [i_12] [i_13]))) & (arr_36 [i_1]));
                                var_24 *= (max(-7852449186886794745, (8725724278030336 * -978825266)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 22;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_16 = 0; i_16 < 22;i_16 += 1)
                {
                    for (int i_17 = 4; i_17 < 21;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 1;i_18 += 1)
                        {
                            {
                                var_25 *= ((-(arr_48 [i_17])));
                                var_26 = (arr_41 [i_16] [i_15]);
                                var_27 = min((((arr_51 [i_14] [i_17 - 1] [i_17] [i_18] [i_18] [i_14]) % (arr_49 [i_17 - 1]))), (((var_16 ^ ((max((arr_40 [i_18]), var_17)))))));
                                arr_52 [i_14] [i_14] [i_16] [i_17] [i_18] [i_15] = ((!(!var_12)));
                                arr_53 [i_14] [i_15] [i_15] [i_17 - 1] [i_17 - 1] = -var_8;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_19 = 1; i_19 < 21;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 22;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 22;i_21 += 1)
                        {
                            {
                                var_28 = (arr_43 [i_14] [i_15] [i_19]);
                                var_29 -= (((!(arr_55 [i_15] [i_19 - 1] [i_20]))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_22 = 2; i_22 < 20;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 1;i_23 += 1)
                    {
                        for (int i_24 = 2; i_24 < 21;i_24 += 1)
                        {
                            {
                                arr_71 [i_14] [i_15] [i_15] [i_23] [i_23] [i_24] = ((!((((((8725724278030336 ? 978825265 : -762430204))) ? 815380176 : 510)))));
                                arr_72 [i_14] [i_24] [i_15] [i_22] [i_23] [i_14] |= var_0;
                                var_30 = ((min(var_10, (arr_56 [i_15]))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 22;i_25 += 1)
                {
                    for (int i_26 = 0; i_26 < 22;i_26 += 1)
                    {
                        {
                            var_31 = var_15;
                            arr_77 [i_15] [i_14] [i_15] [11] = var_13;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
