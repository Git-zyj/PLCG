/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 = (min(65535, ((~(~var_4)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= ((-1 ? (arr_1 [i_0] [i_0]) : var_5));
        var_14 = ((-((-10430 ? -5537097297376212732 : 60595))));
        arr_3 [i_0] [i_0] = ((-10448 ? 1 : 9223372036854775807));

        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            arr_6 [0] [i_1] [i_1] = (arr_4 [i_1 - 1]);
            arr_7 [i_1] = (arr_1 [i_1 + 1] [i_1 - 2]);
            arr_8 [i_1] = -9223372036854775806;
        }
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            arr_12 [i_2] [i_2] [i_2] = (arr_11 [i_2] [i_2]);
            var_15 = (((arr_5 [4]) <= -627525442881277903));
        }
    }
    for (int i_3 = 2; i_3 < 11;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    var_16 = (arr_11 [i_3 + 1] [i_3 + 2]);
                    var_17 = 62459;
                    arr_23 [i_5] [i_4] [i_5] = ((!((((((32767 / (arr_16 [i_3])))) ? (max((arr_16 [i_3]), 3077)) : (~5951129289888290274))))));
                }
            }
        }

        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {

            /* vectorizable */
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                var_18 = -627525442881277903;
                arr_31 [i_7] = var_6;
                var_19 += var_7;
                var_20 = (((arr_20 [i_3 + 2] [i_3 + 2]) ? var_9 : 54611));
            }
            var_21 -= ((-(((var_0 - var_3) ? (((arr_14 [i_3]) ? (arr_29 [1] [i_3] [i_3] [i_3]) : 20)) : 1))));
            arr_32 [7] = var_9;
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
        {
            var_22 = (((arr_19 [i_3] [i_3] [i_8]) ? var_6 : 524287));
            var_23 = (((arr_13 [i_3 - 2] [i_3]) << (10447 - 10425)));
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 13;i_10 += 1)
                {
                    {
                        arr_44 [i_9] [i_9] [i_8] [i_8] [i_9] [i_9] = (arr_11 [i_3] [i_3]);
                        var_24 = ((128 << (65500 - 65500)));
                    }
                }
            }
            var_25 = (min(var_25, 2078133338));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_12 = 2; i_12 < 13;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 13;i_14 += 1)
                    {
                        {
                            var_26 |= ((1697361172 ? 63551 : 268435455));
                            arr_60 [i_3] [i_13] [i_3] [0] [i_3] = ((-0 ? var_10 : -11129034697363771346));
                            var_27 = (arr_58 [i_3]);
                            var_28 = -3076;
                            var_29 = ((((490053958 ? var_1 : (arr_46 [i_11]))) + (((var_4 >> (((arr_37 [i_3] [i_3] [i_3]) - 1491260409)))))));
                        }
                    }
                }
            }
            var_30 = ((((((var_6 + 9223372036854775807) << var_3))) ? 2402540522 : (arr_27 [i_3 + 1] [i_3 + 1] [i_3])));
        }
    }
    /* LoopNest 3 */
    for (int i_15 = 2; i_15 < 9;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 10;i_17 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 12;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 1;i_19 += 1)
                        {
                            {
                                var_31 *= (min((((-(arr_55 [10] [i_15] [i_17 + 2] [i_15 - 1] [i_15])))), (min((arr_28 [i_17 + 2] [i_15] [i_16] [i_15]), var_3))));
                                var_32 = ((((((!((max(-13, (arr_65 [i_16] [i_18] [i_16])))))))) + (max((min((arr_56 [2] [i_17] [i_16] [i_19]), (arr_16 [i_15]))), 13))));
                            }
                        }
                    }
                    var_33 = 15360;
                    var_34 = (max(((min(1, (arr_15 [i_15 - 1])))), (((arr_19 [i_15 - 1] [i_15] [i_17 + 1]) ? -4259437292412230247 : (arr_19 [i_15 - 1] [1] [i_17 + 1])))));
                }
            }
        }
    }
    #pragma endscop
}
