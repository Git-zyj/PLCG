/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= ((((var_7 - -25) - (min(var_3, var_10)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = ((129271896 >> (-25880 + 25896)));
        var_12 = 25879;
        arr_4 [i_0] [i_0] = ((-8150308125253073088 ? (arr_2 [i_0]) : 129271896));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_13 = (25866 / 1);
        var_14 *= (((((~(arr_5 [i_1 + 2])))) ? (arr_6 [0] [0]) : ((~(arr_5 [i_1])))));
    }
    for (int i_2 = 3; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = min((min((min(var_0, 111)), (arr_5 [i_2]))), 41993);

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_15 *= ((-25880 ? 3950595296 : (((((var_8 && var_3) <= var_9))))));
            var_16 = min((((((var_7 ? 18220 : 1))) ? (((((arr_7 [i_2 + 2]) < var_3)))) : ((-12538 ? var_1 : -25867)))), ((min((arr_11 [i_2 + 1] [i_2]), (~848335329)))));
            var_17 = ((var_2 / (arr_10 [i_2] [i_2 + 1])));
            var_18 = (((arr_6 [i_2] [i_2 + 2]) >> (((min(var_2, ((var_5 ? -111 : (arr_8 [i_2]))))) + 19437))));
            arr_12 [i_2] [i_2] [i_3] = ((((min(-25863, var_8) * (arr_11 [i_2] [i_2])))));
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_19 = ((-(arr_10 [i_2] [i_2])));
            arr_17 [20] |= ((25873 ? (min((min((arr_10 [12] [12]), (arr_14 [i_4] [i_2 + 2]))), 254)) : ((((!18573) * (arr_8 [i_2 - 3]))))));
        }
        var_20 |= ((167 ? -7724 : (((max(var_8, var_1)) + ((min(var_7, 2803375717)))))));
        var_21 = (max(((var_3 ? (((2008065530 ? -95 : 8))) : (503316480 ^ 25880))), ((((arr_7 [i_2 - 3]) + (arr_7 [i_2 - 3]))))));

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            arr_22 [i_2] [i_2] = -25;
            var_22 = var_1;
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_23 = 3211444014289908216;
                        var_24 = ((-(arr_8 [i_6 - 1])));
                        var_25 = (min(var_25, ((((-((var_7 + (arr_16 [i_2 - 1] [i_5] [i_5])))))))));
                        var_26 = var_8;

                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 20;i_8 += 1)
                        {
                            arr_31 [i_2 - 2] [i_5] [i_6] [i_6] [i_8] [i_6] |= (((arr_16 [i_8 - 2] [i_7] [i_6 - 2]) ? (arr_16 [i_8 + 2] [i_6 + 1] [i_6 + 1]) : (arr_16 [i_8 - 2] [i_7] [i_6 - 1])));
                            arr_32 [i_8 + 1] [i_2] [i_6] [i_5] [i_2] [i_2] = (arr_28 [i_6 + 2] [i_2 - 1]);
                        }
                        /* vectorizable */
                        for (int i_9 = 2; i_9 < 20;i_9 += 1)
                        {
                            var_27 = ((arr_11 [i_6] [i_2]) ? (arr_11 [i_2] [i_2]) : var_9);
                            var_28 = -2;
                            var_29 = (arr_11 [i_2] [i_2]);
                            var_30 = (min(var_30, (arr_15 [i_7])));
                        }
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            var_31 = ((~(arr_10 [i_2] [i_2 - 1])));
                            var_32 = 0;
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                for (int i_12 = 4; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        {
                            arr_51 [i_13] [i_12] [i_2] [i_2] [i_5] [i_2 + 2] [i_2] = (arr_20 [i_2] [i_2]);
                            arr_52 [i_2] [i_2] [i_2] [i_11] [i_12 + 1] [i_13] = (((arr_21 [i_2 - 1] [i_12 + 1] [i_12 - 3]) % (arr_43 [i_2] [i_2] [i_11] [i_12 - 4])));
                        }
                    }
                }
            }
            var_33 = ((((arr_34 [i_2 - 3] [i_2] [i_2 - 1] [i_2] [i_2 + 1]) | var_4)));
        }
    }
    #pragma endscop
}
