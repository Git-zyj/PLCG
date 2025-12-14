/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 144115188075855871;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_19 = (max(var_19, (arr_6 [i_0 - 3] [i_2] [i_0 - 3] [10])));
                            var_20 = var_11;
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    arr_10 [i_1] [i_1] [i_4] = (((arr_5 [i_1 + 1] [i_1]) % (arr_5 [i_1 + 1] [i_1])));
                    var_21 = ((((arr_1 [i_4 - 1] [i_0]) <= (arr_0 [i_4]))) ? ((-1 & (arr_1 [i_1] [1]))) : var_11);
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    var_22 = ((((~(arr_1 [i_0 - 3] [i_5])))) == var_8);
                    arr_14 [i_0] [i_1] = (((arr_2 [i_1]) ? 2166682519263522220 : ((((arr_2 [i_1]) ? var_11 : (arr_2 [i_1]))))));
                    var_23 ^= (max((arr_13 [i_1 + 1] [i_1 + 1] [i_1]), var_11));
                    arr_15 [i_1] [i_1] = 1518322944;
                }
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_24 |= (((((((var_1 ? 1 : var_5))) || 1)) ? ((min((arr_2 [i_8]), (((-968660305 && (arr_6 [12] [i_8] [i_6] [i_6]))))))) : (arr_11 [i_1])));
                                var_25 = (arr_12 [12] [i_1] [i_7]);
                                arr_22 [i_8 + 1] [i_1] [i_8] [i_8] [i_8] [i_8] = (var_6 ^ 252);
                            }
                        }
                    }

                    for (int i_9 = 2; i_9 < 15;i_9 += 1)
                    {
                        var_26 = (max(var_26, (arr_18 [i_0] [1])));
                        arr_25 [i_9] [i_9] |= ((1 ? ((8912 ? var_10 : (arr_19 [i_9] [i_6] [i_6] [i_0]))) : (((arr_2 [i_9]) ? (var_11 - var_4) : 1332081687))));

                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            arr_30 [i_0 - 1] [i_1] [6] [6] [i_10] = ((((max(var_11, var_1))) % (max(4294967295, 59126))));
                            var_27 += (min(var_0, (((arr_2 [i_10]) && var_3))));
                            var_28 -= (-1 != 17645);
                        }
                    }
                    for (int i_11 = 1; i_11 < 15;i_11 += 1)
                    {
                        arr_34 [i_0] [i_1] = (max((~var_14), (max(var_13, (arr_20 [i_11 + 1] [i_1] [i_0] [i_0 - 3] [1] [i_0])))));
                        var_29 = ((-(min(1910979216, (max((arr_18 [i_0 - 2] [i_6]), 8977030170815811252))))));
                    }

                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        var_30 -= ((min((~-1), 1)));

                        for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
                        {
                            arr_42 [i_1] = ((-(arr_11 [8])));
                            arr_43 [i_0 + 1] [i_1] [1] [7] [10] [i_13] [i_13] = (var_1 ^ var_17);
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 17;i_14 += 1) /* same iter space */
                        {
                            arr_48 [i_14] [12] [i_14] [i_1] = (((var_12 ? 13850936598437935226 : -1)));
                            arr_49 [i_0 - 3] [i_1] [i_1] [13] [i_12] [i_14] = 6880;
                            var_31 = (min(var_31, (((-41 ? var_0 : var_13)))));
                            arr_50 [i_14] [15] [i_6] [i_1] [i_14] [i_14] = 1;
                            arr_51 [i_14] [i_12] [i_6] [i_1] [i_1] [i_1] [i_0] = ((~(((arr_20 [i_0] [i_1] [i_6] [i_12] [i_1] [i_14]) ? (arr_1 [i_6] [i_0 + 2]) : (arr_13 [i_12] [7] [i_0])))));
                        }
                        var_32 = ((-(min(((-1 ? 38535 : 18446744073709551615)), (var_7 > var_10)))));
                        arr_52 [i_0] [11] [i_6] [i_12] [i_1] [i_12] = var_14;
                    }
                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        arr_56 [i_6] [i_6] [i_6] |= ((var_7 ? (((arr_12 [i_1 + 1] [i_1 + 1] [i_1 + 1]) / 27)) : (((((arr_4 [i_6]) << 0))))));
                        var_33 = (max(var_33, (min((arr_37 [i_1] [i_1] [i_15] [i_1] [i_1 - 1]), (min(var_3, (~1)))))));
                        arr_57 [i_1] [i_1 - 1] [i_6] [i_15] = 1;
                    }
                }
                for (int i_16 = 3; i_16 < 16;i_16 += 1)
                {
                    arr_60 [2] [2] [2] [i_0] |= ((var_0 ? var_0 : (((-16619 && ((max((arr_59 [i_16] [i_1] [13]), -93))))))));
                    var_34 *= (max(var_11, (~var_3)));
                }
                arr_61 [i_1] = 23;
                var_35 = (max(var_35, (arr_26 [i_0 - 2] [i_0] [2] [16] [i_1] [i_1] [i_1])));
                var_36 ^= ((111 ? -7 : 16199360270928427053));
            }
        }
    }
    var_37 += 1;
    #pragma endscop
}
