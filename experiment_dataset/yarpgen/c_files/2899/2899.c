/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    var_16 -= (((((var_3 ? (((min(65530, var_11)))) : -var_13))) + -9223372036854775803));
    var_17 = (min(var_17, var_10));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_18 += (min((var_10 * 0), 0));
        var_19 = var_7;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_2] = (arr_4 [i_2 + 3] [i_1 + 1] [i_0]);
                    arr_7 [i_0] = ((((arr_3 [i_0]) / var_1)) > -0);
                    var_20 = (var_8 - 1);
                    arr_8 [i_0] [i_1] [i_2] [i_0] = 1;
                    var_21 = var_9;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        var_22 = ((-1 | (!var_3)));
        arr_11 [i_3] = ((min((arr_0 [i_3]), (arr_0 [i_3]))) && ((((arr_9 [i_3]) >> (((var_11 & var_4) - 1992))))));

        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_16 [i_3] [i_3] = ((var_13 ^ (((~((var_3 << (var_7 - 1814201124))))))));
            var_23 = (((((var_3 * ((max(var_10, (arr_15 [i_4]))))))) - ((((var_13 | (arr_9 [8]))) ^ ((((arr_15 [i_3]) ^ -1941327000)))))));

            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 12;i_7 += 1)
                    {
                        {
                            arr_24 [i_3] [14] [i_7] [i_6] [i_7 + 2] = 1;
                            var_24 ^= var_10;
                        }
                    }
                }
                var_25 = (min(var_25, 1));
                var_26 = (((--205) * (759 & 1)));
            }
        }
        for (int i_8 = 1; i_8 < 14;i_8 += 1)
        {

            /* vectorizable */
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 13;i_11 += 1)
                    {
                        {
                            arr_35 [i_9] [i_9] = (!1);
                            arr_36 [i_3] [i_8] [i_9] [i_9] = -122475869;
                            var_27 = (arr_31 [i_11] [i_11] [i_9] [i_9] [i_3] [i_3]);
                            var_28 = (min(var_28, (((var_9 > (arr_22 [8] [i_3] [i_9] [8] [4] [i_9]))))));
                            var_29 = (max(var_29, ((((var_13 + var_8) + 1604012063)))));
                        }
                    }
                }
                var_30 = ((248 > (var_2 && 0)));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    for (int i_13 = 3; i_13 < 14;i_13 += 1)
                    {
                        {
                            arr_42 [i_9] [i_9] [i_13 - 2] = (arr_1 [i_9]);
                            arr_43 [1] [i_8 - 1] [i_9] [i_8 - 1] [i_13] [i_9] = (((arr_30 [i_8 - 1] [i_9] [i_8 + 1] [i_8 - 1]) && (arr_30 [i_8 - 1] [i_9] [i_8 - 1] [i_8 + 1])));
                        }
                    }
                }
                var_31 += ((((65532 + (arr_10 [i_3]))) + var_11));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    for (int i_15 = 2; i_15 < 13;i_15 += 1)
                    {
                        {
                            var_32 = (((arr_12 [i_8] [i_8 + 1] [i_9]) ? -75 : (var_13 > var_8)));
                            arr_48 [i_9] = ((-14427609939918693411 ? (arr_30 [i_8] [i_9] [i_14] [i_15 + 2]) : (arr_22 [i_8] [i_9] [13] [i_8] [i_8 + 1] [i_8])));
                            var_33 = (((((arr_5 [i_3] [i_9]) ? var_8 : var_7)) >= -var_7));
                        }
                    }
                }
            }
            for (int i_16 = 0; i_16 < 15;i_16 += 1)
            {
                var_34 = ((var_12 << (((((((arr_20 [i_3] [i_3] [i_3] [i_3] [i_3]) > 5154296096301648245)) ? 1632621635333344287 : ((((arr_2 [i_16]) ? (arr_46 [i_3] [i_3] [5] [i_16]) : var_13))))) - 4294967172))));
                arr_52 [i_3] [1] [i_3] [1] = arr_39 [i_3] [i_3] [i_3] [i_16] [i_3];
            }
            /* LoopNest 3 */
            for (int i_17 = 4; i_17 < 14;i_17 += 1)
            {
                for (int i_18 = 1; i_18 < 11;i_18 += 1)
                {
                    for (int i_19 = 1; i_19 < 13;i_19 += 1)
                    {
                        {
                            var_35 *= 1;
                            var_36 += ((((-var_14 ? (var_9 + var_1) : var_12)) - ((((var_13 - 14427609939918693403) ? ((max(0, 12336))) : (arr_13 [i_3] [i_3]))))));
                            arr_62 [i_3] [i_8] [i_17] [0] [9] = (!var_10);
                            arr_63 [i_3] [i_3] [i_3] [i_17] [i_3] [i_18] [i_19 + 1] = ((((arr_54 [14] [i_17]) * 0)));
                            var_37 = (((arr_50 [i_3] [i_3] [i_3] [i_3]) - (((-1626632458 + var_11) - var_14))));
                        }
                    }
                }
            }
        }
    }
    for (int i_20 = 0; i_20 < 15;i_20 += 1) /* same iter space */
    {
        arr_68 [i_20] = (((-(arr_47 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20] [i_20]))));
        arr_69 [i_20] |= ((max(284534109703344350, (arr_57 [i_20] [i_20] [1] [1]))) - 225);
    }
    for (int i_21 = 0; i_21 < 15;i_21 += 1) /* same iter space */
    {
        var_38 &= (((((var_6 ? (~var_7) : (arr_13 [i_21] [i_21])))) ? var_9 : ((((var_7 || (arr_25 [i_21] [i_21])))))));
        /* LoopNest 3 */
        for (int i_22 = 3; i_22 < 14;i_22 += 1)
        {
            for (int i_23 = 2; i_23 < 14;i_23 += 1)
            {
                for (int i_24 = 1; i_24 < 1;i_24 += 1)
                {
                    {
                        arr_79 [i_24] [i_24] [i_23] [i_24] = ((-(((var_3 > var_5) * (((var_9 > (arr_54 [i_21] [i_24]))))))));
                        arr_80 [i_24] = ((((((arr_51 [i_24 - 1] [i_24 - 1] [i_24]) ? 101 : var_11))) && var_9));
                    }
                }
            }
        }
        var_39 = var_12;
    }
    var_40 = ((-(~135291469824)));
    #pragma endscop
}
