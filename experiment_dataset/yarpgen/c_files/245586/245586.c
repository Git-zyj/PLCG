/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_10 ? var_9 : var_5));

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        arr_4 [10] [i_0] |= (min(((~(~var_6))), ((max((arr_1 [6]), var_6)))));

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_12 = (min(var_12, ((max(var_9, (arr_1 [i_0]))))));
                            arr_13 [i_0] [i_1] [i_2] [i_3] [13] = max(31653, 31823);
                            arr_14 [i_0] [i_0] [i_2 - 1] [4] [i_4] [i_4] [i_1 + 1] = ((((!(arr_10 [1])))));
                        }
                    }
                }
            }
            var_13 = (arr_11 [i_0] [i_0 + 2] [i_0] [i_0] [i_0 - 1]);
        }
    }
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        var_14 = (arr_1 [i_5]);
        var_15 = (max(31823, ((max(var_5, (max((arr_11 [i_5] [i_5] [i_5] [i_5] [i_5]), var_1)))))));
        var_16 = var_8;
        var_17 = ((((min(31823, (arr_12 [3] [8] [8]))) - (((-91 + (arr_10 [i_5])))))));
    }

    for (int i_6 = 1; i_6 < 19;i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] = (max((max((arr_19 [i_6] [i_6 + 1]), (arr_19 [i_6 - 1] [i_6 + 1]))), (arr_19 [6] [i_6 + 1])));

        for (int i_7 = 1; i_7 < 18;i_7 += 1) /* same iter space */
        {
            arr_25 [i_6] &= (~var_7);
            arr_26 [i_6] [i_7] = ((+(max(var_10, (((arr_19 [i_6] [i_6]) ? var_3 : var_5))))));
            arr_27 [i_6] [i_7] [i_6] = (arr_21 [i_6] [i_7]);
            arr_28 [i_6 - 1] = (max(((min((!92), 1))), 239));
            arr_29 [i_6] = (max(((((arr_19 [i_6 + 1] [i_6 + 1]) | (arr_19 [i_6] [i_6 + 1])))), (max((arr_24 [i_6 + 1]), (arr_24 [i_6 + 1])))));
        }
        for (int i_8 = 1; i_8 < 18;i_8 += 1) /* same iter space */
        {
            arr_33 [i_6] [i_8] = ((~(max(1, -9223372036854775797))));
            arr_34 [i_6] [i_8] = arr_23 [i_6] [1];
        }

        for (int i_9 = 0; i_9 < 0;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 19;i_11 += 1)
                {
                    {
                        var_18 = 65505;
                        var_19 = (min((((arr_40 [i_10 - 1] [i_10 - 1] [i_10] [i_11]) & 1)), ((~(arr_40 [i_10 - 1] [2] [2] [i_11 - 1])))));
                    }
                }
            }
            var_20 = ((31653 ? (arr_30 [i_9 + 1] [i_9 + 1]) : (((max((arr_40 [i_6] [i_9] [3] [i_9]), (arr_38 [6] [6])))))));
        }
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 16;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 19;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 19;i_14 += 1)
                {
                    {
                        var_21 = (max(var_21, ((max((((arr_32 [i_14 - 1] [i_13 - 1]) - 163)), 65502)))));
                        var_22 = (min(var_22, (arr_46 [i_6] [i_12] [i_13])));
                        arr_52 [i_12] [i_13] [i_12] [i_12] = 239;
                    }
                }
            }
        }
    }
    for (int i_15 = 1; i_15 < 19;i_15 += 1) /* same iter space */
    {

        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            var_23 ^= 105;
            var_24 = ((-12 | (max((arr_23 [i_15 + 1] [i_16]), var_3))));
        }
        arr_59 [12] [i_15] = (max(0, 0));
    }
    for (int i_17 = 1; i_17 < 19;i_17 += 1) /* same iter space */
    {
        var_25 = (max(var_25, (((+((max((arr_58 [2] [i_17 - 1] [2]), (arr_58 [1] [i_17 - 1] [1])))))))));
        /* LoopNest 3 */
        for (int i_18 = 3; i_18 < 18;i_18 += 1)
        {
            for (int i_19 = 2; i_19 < 19;i_19 += 1)
            {
                for (int i_20 = 3; i_20 < 18;i_20 += 1)
                {
                    {
                        var_26 = ((!(!6111)));

                        /* vectorizable */
                        for (int i_21 = 0; i_21 < 20;i_21 += 1)
                        {
                            arr_73 [i_17] [i_17 - 1] [i_17 + 1] [i_17] [13] [19] = (arr_57 [i_21]);
                            var_27 = var_10;
                        }
                        /* vectorizable */
                        for (int i_22 = 1; i_22 < 19;i_22 += 1)
                        {
                            var_28 ^= (arr_35 [i_20 - 2] [i_19 + 1] [i_17 - 1]);
                            arr_76 [i_17] [i_18] [i_19] [i_17] [i_22] [i_17] [i_18 + 1] = (((arr_51 [i_19] [6] [i_19] [i_22]) == ((((arr_74 [i_17] [14]) > 3196959117025468316)))));
                            var_29 = (max(var_29, (~0)));
                            arr_77 [i_22] [i_18] [12] [10] [i_19] [10] [i_22 + 1] = (~92);
                        }
                    }
                }
            }
        }
    }
    var_30 &= var_4;
    #pragma endscop
}
