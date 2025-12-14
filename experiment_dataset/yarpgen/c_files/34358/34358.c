/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_10 = (((((~25152) % ((max((arr_5 [i_0] [i_2] [i_0]), (arr_7 [i_0] [15] [11])))))) ^ ((-(arr_5 [i_0] [i_1] [i_2])))));
                    var_11 |= (min((((((((arr_6 [i_0] [i_2]) >= 1))) <= ((((arr_2 [14]) == -11)))))), (((arr_1 [i_2] [i_2]) ? (arr_1 [i_2] [i_2]) : (arr_1 [i_1] [i_1])))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_0] = ((((arr_12 [i_0] [18] [i_2] [i_0]) ? (arr_11 [i_0] [i_1] [i_2] [i_3]) : 177)));
                        arr_14 [i_0] = var_2;

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_12 |= var_1;
                            var_13 = ((arr_3 [i_3]) + (1 || 109));
                            var_14 = (((arr_9 [i_1] [i_1 + 2] [i_1 + 2] [i_1] [i_1 - 2]) ? 63 : (arr_15 [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_3] [i_3])));
                            var_15 |= (arr_6 [i_0] [i_1]);
                        }
                    }
                }
            }
        }

        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            var_16 = (max(((75 ? 58 : 15)), (((arr_16 [i_5 - 1] [i_5] [i_5] [i_5 + 1] [i_5 - 1] [i_5]) & (arr_16 [i_5 + 1] [i_5] [i_5] [i_5 - 1] [i_5 + 1] [i_5])))));
            var_17 = 77;
            var_18 = (0 ? (arr_11 [i_0] [i_0] [i_5] [i_5]) : ((40368 ? var_3 : ((-(arr_3 [i_5]))))));
            var_19 = (min(var_19, var_1));
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            arr_21 [i_0] = ((!(arr_9 [i_6] [i_6] [i_6] [i_0] [i_0])));
            var_20 = var_7;

            /* vectorizable */
            for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
            {
                var_21 = ((40384 ? (arr_17 [i_0] [i_0] [i_7]) : ((99 ? (arr_17 [i_0] [i_0] [i_0]) : (arr_1 [21] [i_0])))));
                arr_24 [i_6] [i_6] [i_0] [i_6] = 5585;
                arr_25 [i_0] [i_0] [i_7] = ((var_7 % (arr_10 [i_0] [i_6] [i_7] [19] [i_7] [i_0])));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        {
                            var_22 *= ((+((-60 ? (arr_8 [i_8] [14] [i_8]) : 57304))));
                            var_23 = (arr_27 [i_10] [i_0] [i_10]);
                        }
                    }
                }
                var_24 = (min(var_24, (((-(arr_29 [14] [14] [i_8] [i_8] [1]))))));
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
            {
                var_25 = (((arr_38 [i_11] [i_6]) ? ((9881 ? 82 : 78)) : (1 && var_2)));
                arr_39 [i_0] [i_6] [10] [13] = (((arr_35 [i_0]) ? (arr_35 [i_0]) : (arr_35 [i_0])));
                var_26 = (((31 >= 177) ? (((-5566 ? 119 : (arr_6 [i_0] [i_0])))) : (arr_27 [i_0] [i_0] [i_0])));
            }
            for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
            {

                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    arr_46 [i_13] [i_0] [i_13] [19] = (((max((arr_0 [i_0]), (((arr_32 [i_0] [0] [i_12] [i_13] [i_13]) ? (arr_6 [i_13] [i_0]) : (arr_7 [i_0] [i_0] [i_0])))))) ? ((((((arr_33 [18]) ? -19 : var_0))) ? (((max((arr_7 [i_0] [i_6] [i_12]), (arr_45 [i_0] [i_0] [i_0] [i_0]))))) : 3624182457)) : ((((1 * var_3) * ((max((arr_4 [1] [1] [1]), (arr_26 [i_0] [i_0] [i_12]))))))));
                    arr_47 [i_0] [i_6] [i_13] |= (max(25143, -3));
                    var_27 = (max((max(-113, (max(-31, 2553969647636084475)))), (((52500 ? 178 : 1)))));
                }
                var_28 = 62996;
            }
            var_29 = (((max((((arr_10 [i_0] [i_0] [i_6] [i_6] [9] [i_6]) / var_0)), (((-(arr_23 [i_0] [i_0] [i_6] [i_0])))))) != (((min(138, var_0))))));
        }
        var_30 ^= arr_18 [i_0] [i_0];
    }
    for (int i_14 = 0; i_14 < 22;i_14 += 1)
    {
        arr_51 [8] = (((arr_34 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]) ? (arr_7 [i_14] [i_14] [i_14]) : (((!(((-(arr_37 [i_14] [i_14])))))))));
        /* LoopNest 3 */
        for (int i_15 = 1; i_15 < 21;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 22;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 22;i_17 += 1)
                {
                    {
                        var_31 = (min(((((max(-11529, -31435))) ? (arr_4 [i_16] [i_15 + 1] [i_15 + 1]) : (((!(arr_12 [i_15] [i_15] [i_16] [i_17])))))), (arr_54 [i_16])));
                        var_32 = (arr_42 [i_15] [21] [i_15]);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 18;i_18 += 1)
    {
        var_33 = ((((178 ? 5585 : 2515))) == (arr_10 [i_18] [2] [i_18] [i_18] [i_18] [i_18]));
        var_34 ^= ((~(arr_6 [i_18] [i_18])));

        for (int i_19 = 3; i_19 < 17;i_19 += 1)
        {
            var_35 = (((-103 | 64) ^ 78));
            arr_67 [i_19 - 3] [i_19 - 2] = ((!(arr_36 [i_18])));
            var_36 ^= (((arr_41 [i_18]) >= var_4));
        }
    }
    var_37 = (var_8 != 62996);
    #pragma endscop
}
