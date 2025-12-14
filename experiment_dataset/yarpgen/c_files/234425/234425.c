/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = (!var_2);
                    arr_9 [i_0] [i_0] [i_0] = (((arr_6 [i_1 - 1] [i_1 + 1] [i_2 + 1]) <= (arr_0 [i_0] [i_1 - 3])));
                }
            }
        }
    }
    var_17 |= (var_1 | var_3);

    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 4; i_4 < 7;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 7;i_6 += 1)
                {
                    {
                        var_18 = -17934;
                        arr_20 [i_3] [i_3 - 1] [i_3] [i_6] [i_3 - 1] = var_15;
                        var_19 = ((!((((((!(arr_15 [i_4] [i_3])))) - (arr_2 [i_6]))))));
                        var_20 = ((!((((arr_3 [1] [i_4 - 1] [i_4 - 1]) ? var_12 : (arr_3 [i_4] [i_4 - 4] [i_4 + 3]))))));
                    }
                }
            }
        }
        var_21 = 17922;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 8;i_8 += 1)
            {
                {
                    var_22 = 0;
                    var_23 = (arr_5 [i_3] [1] [i_7]);
                    var_24 = (((~127) >= -17934));
                }
            }
        }
    }
    for (int i_9 = 1; i_9 < 15;i_9 += 1)
    {
        var_25 = -17924;
        arr_28 [i_9] = (arr_0 [i_9] [i_9 + 1]);
    }
    for (int i_10 = 2; i_10 < 12;i_10 += 1)
    {
        var_26 += -51;
        var_27 = var_4;
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 11;i_12 += 1)
            {
                {
                    arr_37 [i_10] [i_11] [i_12] = ((-(~var_5)));
                    var_28 = (max(var_28, 0));

                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_29 ^= ((~(~-71)));
                        var_30 = ((~(arr_30 [i_10])));
                    }
                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        var_31 = var_2;
                        var_32 = (max(var_32, var_9));

                        for (int i_15 = 2; i_15 < 10;i_15 += 1)
                        {
                            var_33 = var_12;
                            arr_44 [i_15] = (arr_33 [i_11] [i_12]);
                            arr_45 [i_10 - 2] [i_10] [i_10] [i_10] [i_10] [i_10] [10] &= ((~(arr_2 [i_10])));
                            var_34 = (-var_10 * var_3);
                            var_35 ^= (~var_13);
                        }
                    }
                    for (int i_16 = 0; i_16 < 13;i_16 += 1)
                    {
                        var_36 |= (~var_4);
                        arr_50 [i_16] = var_6;
                    }
                    for (int i_17 = 2; i_17 < 12;i_17 += 1)
                    {
                        var_37 &= (arr_53 [i_12] [i_17 - 1]);
                        arr_54 [i_10] |= (~-var_10);
                        var_38 = (min(var_38, (arr_2 [i_12])));
                    }
                }
            }
        }
        var_39 = (max(var_39, -71));
    }
    /* LoopNest 3 */
    for (int i_18 = 4; i_18 < 22;i_18 += 1)
    {
        for (int i_19 = 3; i_19 < 21;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 23;i_20 += 1)
            {
                {
                    var_40 *= (arr_58 [i_20] [i_19] [i_20]);
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 23;i_21 += 1)
                    {
                        for (int i_22 = 1; i_22 < 22;i_22 += 1)
                        {
                            {
                                arr_65 [i_18] &= (arr_59 [i_18]);
                                arr_66 [i_21] [i_20] [i_20] [i_18 + 1] = (arr_60 [i_19 - 2] [i_19] [i_19]);
                                var_41 = (max(var_41, (((!(((-(!-1397586113286675703)))))))));
                                var_42 = (min(var_42, 1));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
