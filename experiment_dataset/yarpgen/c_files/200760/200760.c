/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((min(879539655, (1 == 1)))) == ((var_7 ? var_1 : ((var_1 ? var_3 : var_10))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = (~var_14);
                    arr_9 [i_0] [i_1 + 3] [i_1] = (min((((!(arr_8 [i_2 - 2] [i_1 - 2])))), (min((arr_4 [i_1] [i_1] [i_2 - 2]), (arr_8 [i_2 + 3] [i_1 + 4])))));
                    arr_10 [2] [i_1] [i_1] = 2147483647;
                    var_17 &= ((((((arr_2 [i_2 - 4] [1]) ? (arr_0 [i_1] [i_1 + 2]) : var_6))) ? -2113701043 : ((-(arr_0 [i_1 + 3] [i_1 - 2])))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_18 = ((var_0 ? (arr_11 [i_3]) : -8829));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_19 += -4294967295;
            var_20 = (((arr_5 [i_4]) ? (arr_5 [i_4]) : (arr_5 [i_4])));
        }
        var_21 = (var_14 ? (((((arr_8 [i_3] [i_3]) && (arr_8 [i_3] [i_3]))))) : (((arr_8 [11] [11]) ? (arr_8 [i_3] [7]) : var_13)));
        arr_16 [i_3] = (!1);
    }
    for (int i_5 = 2; i_5 < 17;i_5 += 1) /* same iter space */
    {
        var_22 *= var_7;

        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
            {
                var_23 = ((!(((var_0 ? var_5 : ((var_8 ? var_0 : 2181266253)))))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 19;i_9 += 1)
                    {
                        {
                            var_24 &= 14972939465971397737;
                            var_25 *= (691851593 - 2181266253);
                            arr_28 [i_8] [i_8] [i_7] [i_7] [i_6] [i_5] = (((arr_7 [i_5] [i_5] [8]) << (var_7 - 10451)));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
            {
                var_26 = (((var_2 + 2147483647) << (((((arr_32 [i_5] [i_10] [20]) ? var_6 : var_10)) - 18446744073330069806))));

                for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
                {

                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        var_27 *= ((~(((arr_24 [i_12] [i_12] [4] [i_12]) ? var_12 : (arr_3 [i_10])))));
                        arr_38 [i_5] [i_6] [i_6] [i_10] [i_11] [i_11] [i_5] = (((arr_24 [i_5] [20] [i_5] [i_5]) >= var_1));
                    }
                    var_28 *= ((var_10 ? ((-(arr_30 [i_5] [i_6] [i_10]))) : var_2));
                    arr_39 [i_11] [i_10] [i_5] = (arr_29 [i_5] [i_6] [i_10] [i_11]);
                    arr_40 [i_5 + 3] [i_6] [i_10] [i_11] = ((var_2 ? -953988542 : -12616));
                    arr_41 [i_5 + 1] [i_5] [i_5] [i_5] = ((!(arr_8 [i_5] [i_5 + 2])));
                }
                for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
                {

                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        var_29 *= (((arr_4 [i_5 - 1] [i_14] [i_10]) + (var_5 > var_12)));
                        var_30 = (min(var_30, var_2));
                    }
                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        var_31 ^= (arr_30 [i_5] [i_5 - 2] [i_5]);
                        arr_49 [i_5] [i_6] [i_10] [i_10] [i_13] [i_15] = (arr_2 [i_5] [1]);
                        arr_50 [i_5] [i_5] [i_5] [i_5 - 2] [i_5] = ((!(arr_15 [i_15])));
                    }
                    arr_51 [i_5] [i_10] [i_10] [i_6] = ((!(arr_44 [10] [i_6] [i_6] [10])));
                    var_32 = (max(var_32, (arr_2 [i_5] [15])));
                }
            }
            /* vectorizable */
            for (int i_16 = 4; i_16 < 20;i_16 += 1)
            {
                var_33 = (((0 >> 1) & 691851593));
                var_34 = (min(var_34, (var_4 * var_1)));
                var_35 += 14;
            }
            arr_55 [i_6] &= (min(62969, var_0));
            var_36 = ((-(arr_36 [i_5] [i_6])));
            var_37 = ((-953988542 ? ((((((arr_13 [1] [i_6]) * (arr_33 [i_5] [i_6] [20])))) ? (((arr_18 [i_5] [i_5]) ? 27143 : (arr_4 [i_5 + 4] [i_5] [i_5 - 1]))) : (arr_33 [i_5] [i_5] [17]))) : var_1));
            var_38 += (((((arr_4 [i_5 + 1] [i_5] [i_5 - 1]) - (arr_4 [i_5 + 3] [i_5] [i_5 + 2]))) + ((889976562642549373 ? -1 : 54313))));
        }
        for (int i_17 = 0; i_17 < 21;i_17 += 1)
        {
            var_39 |= ((min((3 / 13119), (!19041))));
            arr_58 [8] = ((2113701043 / (((arr_27 [i_5 - 1] [i_5 + 3] [i_5 + 1] [i_5 - 1] [i_5 - 2] [i_5 + 1] [i_5 - 1]) ? 11803280443697608738 : -953988543))));
        }
    }
    for (int i_18 = 2; i_18 < 17;i_18 += 1) /* same iter space */
    {
        var_40 ^= var_13;
        var_41 = ((~(((arr_20 [i_18 - 1] [i_18 - 2]) ? (arr_20 [i_18 - 1] [i_18 + 4]) : (arr_20 [i_18 - 2] [i_18 - 2])))));
    }
    var_42 *= 3458764513820540928;
    #pragma endscop
}
