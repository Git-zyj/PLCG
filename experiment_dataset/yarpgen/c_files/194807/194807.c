/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((var_2 >> (var_1 - 120))) * (max(var_1, var_4)))) + (min(-14, ((var_9 << (var_1 - 119)))))));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = ((var_2 ? (248 + 84048005) : (max((arr_0 [i_0 + 2]), (arr_1 [i_0 - 2])))));
        var_11 = ((~(((arr_2 [i_0]) % ((var_4 ? (arr_2 [i_0]) : var_2))))));
        var_12 = (((((-(arr_1 [i_0 + 3])))) ? ((min(var_0, (arr_1 [i_0 + 3])))) : var_8));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = 248;
        arr_8 [i_1] [i_1] = ((((var_7 >= (arr_5 [i_1 - 1])))));
        arr_9 [i_1] [i_1] = (min((((max(var_6, var_4)) >> ((((2063158819 & (arr_5 [i_1]))) - 137379814)))), (((max(1, var_6))))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                arr_14 [i_1] [i_1] [i_1] = (((arr_4 [i_1]) ? 0 : var_3));
                arr_15 [i_1] = (arr_13 [i_1]);
            }
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                arr_18 [i_1] [i_2] [i_1] = 134217728;
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_13 *= (((var_4 ? var_8 : (arr_10 [i_4] [i_2]))));
                            var_14 = var_5;
                        }
                    }
                }
                arr_26 [i_1] [i_2] [i_1] = arr_25 [i_4] [i_4] [i_2] [i_1] [i_1];
            }
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                var_15 = (((arr_16 [i_1 - 1] [i_1] [i_1 - 1] [i_1]) / (arr_16 [i_1 - 1] [i_1] [i_1 - 1] [i_1])));
                arr_29 [i_1] [i_1] [i_2] [i_7] = (!(var_1 % var_5));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        {
                            arr_36 [i_1] [i_2] = (arr_24 [i_2]);
                            arr_37 [i_1] [i_2] [i_1] [i_8] [i_9] = (!var_7);
                            arr_38 [i_1] [i_2] [i_7] [i_1] [i_9] [i_9] = (((arr_34 [i_9] [i_8] [i_7] [i_2] [i_1]) % var_2));
                            var_16 = (max(var_16, (2063158819 / -789947377)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        {
                            arr_43 [i_11] [i_1] [i_11] [i_11] [i_11] [i_11] [i_11] = var_2;
                            var_17 = (((((arr_22 [i_11] [i_10] [i_10] [i_7] [i_2] [i_1] [i_1]) + var_4)) - (0 > 246)));
                            var_18 = (((arr_40 [i_1] [i_1 - 1] [i_1 - 1]) % (arr_41 [i_1 - 1] [i_1] [i_1] [i_10] [i_11] [i_11])));
                        }
                    }
                }
            }

            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                arr_47 [i_1] = 2551564942012970469;
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 20;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 18;i_14 += 1)
                    {
                        {
                            arr_54 [i_1] [i_1] [i_12] [i_14] = (arr_33 [i_1 - 1] [i_2] [i_12] [i_12] [i_13] [i_14 + 1] [i_14]);
                            var_19 *= (((arr_53 [i_1 - 1]) && var_2));
                            var_20 = (arr_39 [i_1] [i_1 - 1] [i_14 - 1]);
                        }
                    }
                }
            }
        }
        for (int i_15 = 0; i_15 < 20;i_15 += 1)
        {
            var_21 = (min((arr_31 [i_1] [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1]), 223));
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 20;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 20;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        {
                            var_22 = max(((var_3 ? (arr_24 [i_1 - 1]) : (arr_24 [i_1 - 1]))), (((arr_24 [i_1 - 1]) ? (arr_24 [i_1 - 1]) : (arr_24 [i_1 - 1]))));
                            arr_64 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (2063158818 >> ((((18134094777235908086 ? -1908680242 : 174)) + 1908680247)));
                            arr_65 [i_18] [i_1] [i_16] [i_17] [i_18] = (min(241, 1));
                            var_23 = (!1475574664);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
