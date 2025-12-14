/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_14 -= (((((-(max(153719036488832417, (arr_1 [i_0] [i_0])))))) ? (max(var_8, 16826723218132375924)) : (min(((1620020855577175691 >> (3077013927 - 3077013908))), (16826723218132375924 && var_1)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] |= (arr_1 [5] [i_1]);
            arr_5 [i_1] [i_1] [i_0] = (arr_2 [i_0] [i_0] [i_0]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [17] [13] [i_0] [11] = (arr_10 [i_3 - 3] [i_1] [i_2] [i_1]);
                        var_15 = ((var_11 << ((((var_13 ? 1620020855577175712 : -23)) - 1620020855577175679))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
        {
            var_16 = ((1922425111 | (arr_1 [17] [i_4])));
            arr_14 [i_4] = ((var_4 ? ((34 ? -8675230263463005582 : 1922425096)) : (var_1 < var_2)));
            arr_15 [i_0] = ((~(arr_13 [i_0])));
            arr_16 [i_4] [i_0] = -49152;
        }
        arr_17 [i_0] |= ((((((1177655583170934035 ? (arr_0 [i_0]) : 1177655583170934035))) ? (18501 == var_13) : ((var_13 ? var_11 : 13)))));

        for (int i_5 = 2; i_5 < 16;i_5 += 1)
        {
            var_17 = ((((((arr_12 [i_0] [i_5] [i_0]) ? -4461869003691493585 : (arr_12 [i_5 + 1] [i_5] [i_5 + 1])))) ? (arr_18 [i_0]) : var_11));
            var_18 = (max(((max((arr_18 [i_5 - 1]), var_10))), ((~(arr_12 [i_0] [i_5 + 1] [i_0])))));
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            var_19 -= (arr_1 [i_6] [i_7]);
            arr_28 [i_6] = (22270 == -1177655583170934046);

            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_20 = (max(var_20, ((((((var_8 ? var_10 : 1))) ? var_13 : -1)))));
                arr_31 [i_6] [i_8] [i_7] [i_8] = (var_12 == var_10);
                var_21 = (((4094 * 16826723218132375925) + (((0 ? 1 : var_6)))));
            }
            for (int i_9 = 2; i_9 < 18;i_9 += 1) /* same iter space */
            {

                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    arr_37 [i_10] [i_9 + 1] [10] [i_6] = (((((var_3 ? 1078762802 : -23))) ? (((-4 ? 30338 : 15))) : (arr_10 [i_9 - 1] [i_9 + 1] [18] [i_9 - 2])));
                    arr_38 [i_6] [i_7] [5] [i_10] = ((31 ? -1 : 151));
                }
                var_22 = -var_12;
            }
            for (int i_11 = 2; i_11 < 18;i_11 += 1) /* same iter space */
            {
                var_23 = (((10 <= 31426) * 0));
                var_24 = (max(var_24, var_4));
            }
            var_25 -= (1592 > 484604398);
            var_26 &= (arr_42 [i_6] [i_7] [15] [i_7]);
        }
        for (int i_12 = 1; i_12 < 1;i_12 += 1)
        {
            arr_47 [i_12] = 34;
            arr_48 [i_12] = 9007199254740976;
            arr_49 [i_6] [i_12] [i_12] = 0;
        }
        arr_50 [i_6] [i_6] = ((-31453 ? 1 : (((arr_12 [i_6] [i_6] [i_6]) ? -4461869003691493596 : var_4))));
        arr_51 [12] [i_6] = -31162;
        arr_52 [9] = (~2372542195);
    }
    var_27 = (((1 >> (239 - 235))));
    #pragma endscop
}
