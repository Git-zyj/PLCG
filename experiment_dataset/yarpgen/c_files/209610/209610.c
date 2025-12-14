/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;
    var_19 = (var_14 ? var_0 : (~var_14));
    var_20 = (min(var_20, var_16));

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        var_21 = (min(16777215, 1371090369));
        var_22 = -8362188998806862871;
    }
    /* LoopNest 2 */
    for (int i_1 = 4; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                var_23 += 4278190086;

                /* vectorizable */
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    var_24 -= (((1 ? var_0 : 0)) <= 630815070);
                    var_25 -= 386060584;
                    var_26 = ((arr_7 [i_1 + 1]) ? -3305316701435102568 : (arr_6 [i_1 + 1] [i_1 - 1] [i_1 - 1]));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 20;i_5 += 1)
                        {
                            {
                                arr_18 [i_2] = (arr_9 [i_1] [i_5 - 1]);
                                var_27 = 48;
                                var_28 = 61;
                                arr_19 [i_2] [i_2] [i_2] [i_4] [i_2] [i_5] = (arr_11 [i_5] [i_5 + 1] [i_4 - 1] [i_4 - 1]);
                                arr_20 [i_1] [i_2] [i_1] [i_1] [i_2] [i_2] [i_5 - 1] = (((arr_17 [i_3 + 4] [i_3 + 4] [i_5] [14] [20]) < (arr_17 [i_3 + 4] [i_3] [i_5] [i_5 - 1] [i_5])));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    var_29 ^= ((var_14 < (((arr_10 [i_1] [i_2] [i_2]) ? 4278190056 : (arr_3 [i_6])))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_30 = (3025221364 > (arr_21 [i_2]));
                                var_31 &= 1269745953;
                                var_32 = -67108800;
                                var_33 = ((-(arr_17 [i_1 - 4] [i_1] [1] [i_1] [i_1 - 1])));
                                var_34 *= (((!(arr_3 [i_8]))));
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        var_35 &= ((~(arr_24 [i_1] [i_1] [i_1 - 2] [i_1 + 2])));
                        var_36 ^= (arr_29 [i_1] [i_1 - 4] [i_1 - 1]);
                    }
                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        var_37 = ((~(arr_29 [i_2] [i_1 + 1] [i_1 - 2])));
                        var_38 = (min(var_38, 31));
                        arr_34 [i_2] = (!1904944278);
                    }
                }
                /* vectorizable */
                for (int i_11 = 1; i_11 < 20;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 3; i_12 < 19;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 21;i_13 += 1)
                        {
                            {
                                var_39 = (arr_37 [i_1 - 3] [i_1]);
                                var_40 = 4227858490;
                                var_41 = (min(var_41, ((((arr_35 [i_1] [i_2] [i_1] [i_12]) ? -7461638039845812761 : ((4056270800 ^ (arr_4 [i_13]))))))));
                            }
                        }
                    }
                    var_42 = (arr_22 [i_1 - 2] [i_2]);
                }
                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    var_43 = ((min(var_15, 1492510427)));
                    var_44 ^= ((((arr_37 [i_14] [i_2]) | -var_2)));
                    var_45 = (max(var_45, 3305316701435102567));
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 19;i_15 += 1)
                    {
                        for (int i_16 = 4; i_16 < 20;i_16 += 1)
                        {
                            {
                                arr_52 [i_15] [i_2] [i_14] [i_2] [i_14] = (arr_27 [i_16] [i_16] [i_16] [i_16 - 3] [i_16]);
                                arr_53 [i_15] [i_2] [i_14] [i_15] [i_16] [i_2] [7] = var_10;
                            }
                        }
                    }
                }
                var_46 = (min(var_46, 67108805));

                for (int i_17 = 0; i_17 < 21;i_17 += 1)
                {
                    var_47 = (max((arr_38 [i_1 - 3]), (max(0, (-9223372036854775807 - 1)))));
                    arr_57 [i_2] [i_17] [14] [i_2] = ((!((((~(arr_51 [1])))))));
                    var_48 = (!2147483648);
                }
                var_49 = ((max((~var_3), (((!(arr_41 [i_1] [i_2] [i_1] [i_1])))))));
            }
        }
    }
    #pragma endscop
}
