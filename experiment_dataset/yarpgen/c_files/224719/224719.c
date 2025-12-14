/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((1 ? -23 : var_8)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 -= (((min(var_9, var_4))));
        var_17 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_18 ^= ((-var_12 ? 129 : (arr_4 [i_1] [i_1])));
        arr_5 [3] [i_1] = (((~-29) > ((var_11 ? (arr_3 [i_1] [i_1]) : (~var_1)))));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 14;i_4 += 1)
                {
                    {
                        var_19 = ((~(((!(arr_7 [i_1] [i_2]))))));
                        var_20 = (max(var_20, (var_2 > 30523)));
                        var_21 = 56;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 17;i_7 += 1)
                {
                    {
                        var_22 = var_6;
                        arr_24 [i_6] [i_7 + 1] &= (min(((((arr_13 [i_5] [i_5] [i_1] [i_7] [i_1]) && ((min(707756015, (arr_8 [i_1] [i_1] [i_1]))))))), 6166919529130905934));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        var_23 ^= (min(((((arr_4 [i_8] [i_8]) >= (arr_4 [i_8] [i_8])))), (arr_4 [i_8] [i_8])));
        var_24 = (min(var_24, 28));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    {

                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            arr_37 [i_8] [i_12] [i_11] [i_12] = ((min((arr_35 [i_11] [i_11] [i_11] [i_11] [i_11]), (min((arr_32 [i_10] [i_12]), (arr_9 [1] [i_11]))))));
                            var_25 ^= (((-9223372036854775807 - 1) <= (arr_8 [i_11] [i_10] [i_8])));
                            var_26 = (~var_6);
                            arr_38 [i_8] [i_12] [i_11] [i_12] = (((4294967284 + 1) % (min(var_1, (arr_0 [i_8])))));
                        }
                        for (int i_13 = 0; i_13 < 14;i_13 += 1)
                        {
                            var_27 ^= (arr_29 [i_9] [i_9] [i_11] [i_13]);
                            arr_42 [i_11] [i_11] [i_11] [i_11] [i_11] = 1041262290;
                            var_28 = (((((min(var_4, (arr_10 [i_8] [0]))))) ? var_3 : ((min(-114, (arr_18 [i_9] [i_8] [i_10]))))));
                        }
                        var_29 |= (((1041262307 ? (~939524096) : ((((!(arr_11 [i_8] [i_8]))))))) >> (((((((-(arr_6 [i_8] [i_10] [i_11])))) ? ((((arr_8 [i_11] [i_9] [i_8]) << (var_14 - 112)))) : (~939524110))) - 1791)));
                        var_30 = (min(192, var_14));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 13;i_14 += 1)
    {
        arr_46 [i_14] [i_14] |= ((!(534735128 / 34359738367)));

        for (int i_15 = 2; i_15 < 11;i_15 += 1)
        {
            var_31 *= (((arr_1 [i_14]) >= (arr_1 [i_15 + 2])));
            var_32 = (max(var_32, (arr_30 [i_14] [i_15 + 1] [i_15] [i_15])));
            var_33 ^= (arr_28 [i_15 + 2] [i_15 + 2] [i_15]);
            var_34 = (min(var_34, var_3));
        }
        for (int i_16 = 4; i_16 < 11;i_16 += 1)
        {
            var_35 = (~var_3);

            for (int i_17 = 0; i_17 < 13;i_17 += 1)
            {
                var_36 |= ((213 >= (~2824074535)));
                arr_53 [i_17] [i_16] [i_14] = ((((119 ? 2980032183 : var_0)) * (((1041262303 ? var_11 : var_7)))));
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 13;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 13;i_19 += 1)
                    {
                        {
                            var_37 = ((~1041262302) ? var_10 : (arr_50 [i_14] [i_16 + 1]));
                            var_38 = (!var_14);
                            arr_59 [i_19] [12] [i_18] = ((var_4 ^ (arr_47 [i_19])));
                        }
                    }
                }
            }
            for (int i_20 = 1; i_20 < 10;i_20 += 1)
            {
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 13;i_21 += 1)
                {
                    for (int i_22 = 2; i_22 < 11;i_22 += 1)
                    {
                        {
                            arr_69 [i_22] [i_21] [i_20] [i_16] [i_14] = -6942745814926388141;
                            var_39 = (((arr_65 [i_14] [i_14] [i_16 - 3] [i_16 + 2] [i_22 - 2] [7]) >> (((arr_65 [i_16] [i_16] [i_16 - 3] [i_16] [i_22 + 1] [10]) - 54))));
                        }
                    }
                }
                var_40 += (arr_39 [i_14] [i_14] [i_16] [i_16 - 1]);

                for (int i_23 = 0; i_23 < 13;i_23 += 1) /* same iter space */
                {
                    var_41 = (min(var_41, 4294967280));

                    for (int i_24 = 2; i_24 < 9;i_24 += 1) /* same iter space */
                    {
                        var_42 = (((arr_23 [i_24 - 2] [i_23] [i_16 - 3] [i_24 - 2]) || var_6));
                        var_43 -= (arr_14 [i_16 - 2] [i_16 - 2] [i_16 + 1] [i_20 - 1] [i_20 + 2] [i_24 + 1]);
                        arr_75 [i_14] [i_16 - 4] [i_20] [i_20] [i_24] = 2301850529;
                        var_44 -= (arr_8 [i_20 + 2] [i_20 + 2] [i_24 + 2]);
                        var_45 = (max(var_45, (((~4106694400) && var_11))));
                    }
                    for (int i_25 = 2; i_25 < 9;i_25 += 1) /* same iter space */
                    {
                        var_46 -= arr_1 [i_16 + 2];
                        arr_78 [i_14] [i_16] [i_20] [i_23] [i_25] [i_25 - 2] &= (331710782 >= var_9);
                    }
                    for (int i_26 = 2; i_26 < 9;i_26 += 1) /* same iter space */
                    {
                        arr_82 [i_14] [i_23] [i_14] [i_14] [i_16 + 2] = (!var_12);
                        var_47 ^= (((arr_22 [i_14] [i_20 + 1] [i_16 - 2] [i_20 + 3] [i_26 + 1]) - (arr_39 [i_16] [i_16 + 1] [i_20 + 2] [i_26 + 4])));
                    }
                    var_48 -= ((arr_8 [i_16 - 1] [i_16 - 2] [i_16 + 2]) ? (arr_8 [i_16 - 2] [i_16 - 1] [i_16 + 2]) : var_11);
                }
                for (int i_27 = 0; i_27 < 13;i_27 += 1) /* same iter space */
                {
                    arr_85 [i_20 + 1] [i_14] = (arr_28 [i_20 + 3] [i_16 - 4] [i_14]);
                    var_49 = 6;
                }
            }
        }
        arr_86 [i_14] [i_14] = (((arr_0 [i_14]) ? (arr_30 [i_14] [i_14] [i_14] [i_14]) : 1314935113));
    }
    var_50 += var_13;
    #pragma endscop
}
