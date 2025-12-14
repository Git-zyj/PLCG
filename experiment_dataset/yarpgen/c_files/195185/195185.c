/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 39077;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_10;
        var_12 = (((arr_1 [i_0 - 1]) / (arr_1 [i_0 + 1])));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_13 = (min(var_8, (var_0 <= var_1)));
        arr_5 [i_1] &= (+-3580027166);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 24;i_3 += 1)
            {
                {
                    var_14 = (((min(var_4, (((~(arr_8 [i_2])))))) << (3580027174 - 3580027142)));
                    arr_12 [21] [i_1] [i_1] = (((((~(max(var_9, var_4))))) ? 10872244108116675238 : 714940129));
                    arr_13 [i_1] [i_2] [i_3] = (((arr_8 [i_1]) ? (~714940142) : (arr_8 [i_1])));
                }
            }
        }
        arr_14 [i_1] [14] = ((((min((1 & var_5), var_8))) ? 0 : (~4207471176)));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {
                {
                    var_15 = ((var_8 & (min((~var_4), ((((arr_6 [i_1] [i_1] [i_1]) & (arr_19 [i_1] [i_4] [24]))))))));
                    var_16 = var_9;
                    arr_20 [i_1] [i_4] [i_5] = (min((min((arr_7 [i_5 + 2] [i_5] [i_5 - 1]), (arr_7 [i_5 + 1] [i_5] [18]))), (((min(var_7, -25100))))));
                    var_17 = (max(-1, var_0));

                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_18 = 1564596685;
                        var_19 = (min(var_1, ((~((var_0 ? (arr_8 [i_1]) : var_1))))));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
    {
        var_20 = (((((arr_25 [19] [19]) < (arr_19 [i_7] [i_7] [1]))) ? (max((min(18446744073709551614, (arr_25 [i_7] [i_7]))), ((((arr_23 [i_7] [i_7] [i_7] [i_7]) || var_3))))) : var_9));
        var_21 = (min((min((arr_7 [i_7] [i_7] [i_7]), 3)), (((714940155 || (arr_11 [i_7] [i_7] [i_7]))))));
        arr_27 [8] |= ((!((!((2147483647 == (arr_3 [2])))))));
    }
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 2; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                for (int i_11 = 4; i_11 < 17;i_11 += 1)
                {
                    {
                        var_22 += (~18824);
                        arr_41 [i_8] [i_8] [i_9] [i_11] [i_11] = ((((min(((((arr_32 [i_8]) ? -7161 : 714940122))), var_10))) ? (((arr_34 [i_8] [i_9] [i_9 - 2]) ? (arr_34 [i_8] [15] [i_10]) : var_8)) : (arr_32 [i_8])));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 15;i_14 += 1)
                {
                    {
                        arr_51 [i_8] [i_8] [i_8] [i_14] = ((2730370610 || (arr_32 [i_8])));
                        arr_52 [i_8] [i_8] [i_8] [i_8] = var_3;
                        var_23 *= -1;
                        var_24 = (((arr_28 [i_14 + 1]) * (!var_4)));
                    }
                }
            }
            var_25 = var_1;
        }
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            arr_55 [i_8] = (!var_1);
            var_26 = ((~(((arr_19 [i_8] [0] [i_15]) ? (arr_19 [i_15] [9] [i_8]) : 714940129))));
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 18;i_16 += 1)
            {
                for (int i_17 = 3; i_17 < 15;i_17 += 1)
                {
                    {
                        var_27 = var_7;
                        var_28 = ((~((max((arr_37 [2] [i_8] [i_17 - 2] [i_17 + 1]), (arr_37 [i_16] [i_8] [i_17 - 2] [i_17 + 2]))))));
                        var_29 = ((15 & ((min((!0), (min(-7161, 32761)))))));
                        arr_60 [i_16] [4] [i_16] |= -7149;

                        /* vectorizable */
                        for (int i_18 = 0; i_18 < 18;i_18 += 1)
                        {
                            var_30 = (arr_54 [13]);
                            arr_64 [i_18] [i_8] [i_18] [i_18] [i_18] = 26390;
                        }
                    }
                }
            }
        }
        var_31 = (min((max(39, var_0)), (((!(arr_23 [3] [18] [i_8] [i_8]))))));
    }
    var_32 = ((8839643347009922659 >> (((((min(714940120, var_9)) << (var_7 + 16885))) - 1442840523))));

    /* vectorizable */
    for (int i_19 = 0; i_19 < 15;i_19 += 1)
    {
        var_33 = arr_17 [i_19] [i_19] [i_19] [i_19];
        arr_67 [i_19] [i_19] = (((arr_24 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]) + (arr_24 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19])));
    }
    #pragma endscop
}
