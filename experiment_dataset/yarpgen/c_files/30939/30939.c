/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((max(-1542221224, (arr_0 [i_0]))));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_1] [i_0] = (((arr_4 [i_1 - 2] [i_1 - 2] [i_1]) && 1));
            arr_6 [i_0] [i_1 - 2] |= var_17;
        }
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                {
                    var_20 = (((arr_4 [i_3 + 2] [i_3 + 1] [i_3 + 3]) ? 288439775 : (arr_11 [i_2])));
                    arr_14 [i_0] [i_2] [7] [i_2] [i_2] = (-1 * 0);
                }
                for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_21 += (arr_17 [i_5] [i_5] [i_2] [i_2 + 1] [i_2 + 1]);
                        var_22 = (min(var_22, (arr_7 [i_0])));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_21 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = ((!(arr_13 [i_0] [i_3 + 3] [i_2] [i_2])));
                        var_23 = (max(var_23, var_15));
                        arr_22 [i_2] [i_2] = (((arr_19 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2]) * 110));
                    }

                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        var_24 = (((arr_23 [i_8] [i_5] [i_3] [18] [i_2 + 1] [18]) >> (arr_3 [i_3 + 3] [i_5])));
                        arr_26 [i_0] [i_2] [i_0] [i_2] [i_8] [18] = (((arr_18 [i_2 + 1]) ? (arr_18 [i_2 + 1]) : (arr_18 [i_2 + 1])));
                        var_25 -= (-55 > -24164);
                        var_26 = (arr_10 [i_0] [i_0] [i_3 + 4]);
                    }
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        var_27 = (min(var_27, -37));
                        var_28 = (((arr_28 [i_3 + 4] [i_3 - 1] [19] [19] [i_3 - 1] [i_3] [i_2]) - 2805113027));
                    }
                }
                arr_31 [i_0] [i_2] [i_3] = 6490;
            }
            var_29 = (arr_19 [i_0] [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_0]);
            var_30 = (min(var_30, var_16));

            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                var_31 = (max(((min(127, 9106781046323067650))), (-45 + 4294967295)));

                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        arr_39 [i_12] [i_12] [i_12] [i_2] [i_12] = (((arr_18 [i_12]) >= (33 < 49923)));
                        var_32 = (arr_17 [i_2] [i_12] [i_10] [i_12] [i_2]);
                    }
                    arr_40 [i_2] [i_2] [i_2 + 1] [i_11] = (max(((-(max(0, (arr_37 [i_0] [i_2] [i_10] [10] [9] [i_2 + 1] [i_0]))))), (((arr_8 [i_2 + 1] [i_2 + 1] [i_10]) ? (arr_10 [i_2 + 1] [i_2 + 1] [i_2 + 1]) : 3259874558674654658))));
                    arr_41 [i_11] [i_2] [i_2] = (~(((arr_12 [i_10] [i_2] [i_2] [i_0]) ? (arr_12 [16] [i_2] [i_2] [i_0]) : 452963835)));

                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        var_33 ^= (((1398457694 < 26415) && var_9));
                        arr_45 [i_2] [i_11] [19] [i_2] [i_2] [i_0] [i_2] = (((~var_14) ? (arr_27 [i_0] [i_0] [i_0] [8] [i_0] [i_0] [i_0]) : (((1 | (arr_1 [i_11]))))));
                        var_34 ^= ((0 ? (arr_23 [i_11] [i_2] [i_11] [i_11] [i_13] [i_2 + 1]) : var_14));
                    }
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        arr_48 [i_2] [i_10] [i_2] = 6490;
                        arr_49 [i_2] [i_2] = (((arr_30 [i_0] [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1]) & (max(15, ((max(var_18, 18077)))))));
                    }
                    arr_50 [i_2] [i_2] [i_10] [i_11] = ((var_18 <= ((~((max(1, 1)))))));
                }
            }
            var_35 -= ((!(~2636205521)));
        }
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 12;i_15 += 1)
    {
        arr_54 [i_15] = ((-(arr_32 [i_15] [i_15] [i_15] [i_15])));
        var_36 = (arr_11 [i_15]);
    }
    for (int i_16 = 0; i_16 < 19;i_16 += 1)
    {

        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            var_37 *= (max((((~(arr_46 [i_17])))), (arr_46 [i_17])));
            var_38 = (max(var_38, var_11));
        }
        arr_62 [i_16] = (arr_11 [i_16]);
    }
    #pragma endscop
}
