/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((!(0 - var_10)));
        var_18 = (((-4245832548463149526 != -4245832548463149517) >> (((arr_0 [8]) - 120))));
        var_19 = (((!var_1) ? (arr_0 [i_0]) : (arr_0 [i_0])));
    }
    var_20 = ((((max(14564443241992158266, ((max(var_3, var_2)))))) ? var_16 : var_6));
    var_21 = var_5;

    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = var_11;
        var_22 ^= (arr_4 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_23 = (((arr_10 [i_2]) > (arr_8 [i_2])));
            var_24 = (arr_8 [i_2]);
        }
        for (int i_4 = 2; i_4 < 22;i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 20;i_6 += 1)
                {
                    {
                        var_25 = ((((((arr_12 [3]) ? 0 : var_0))) ? -4245832548463149506 : (arr_15 [i_4 - 2] [i_6 - 2] [i_6])));
                        var_26 = 40249;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 22;i_8 += 1)
                {
                    {
                        var_27 = 1;
                        var_28 = (((arr_8 [i_2]) || (arr_8 [i_2])));
                        var_29 = (~-35);
                    }
                }
            }
            var_30 ^= (arr_7 [i_4 + 1]);
        }
        for (int i_9 = 2; i_9 < 22;i_9 += 1) /* same iter space */
        {
            var_31 = (!-3848);

            for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
            {
                var_32 = (0 * 0);
                var_33 |= ((!(arr_6 [14])));
            }
            for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
            {
                var_34 = 72057594037927932;
                var_35 = 26;
                arr_30 [4] [i_11] [i_2] [i_2] = arr_24 [i_2];
                var_36 = ((~(arr_21 [i_9 - 2] [i_9 - 2] [i_11] [7] [i_11])));
                arr_31 [i_2] [i_9] [i_9] [i_2] = (((arr_24 [i_9 + 1]) + 65535));
            }
            for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
            {
                var_37 = (((arr_15 [i_2] [i_9 - 1] [1]) ? var_11 : (arr_15 [i_2] [i_2] [1])));
                var_38 += (((arr_27 [i_9 + 1] [i_9 - 1] [i_2] [i_2]) >> (-72057594037927932 + 72057594037927944)));
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 21;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        {
                            var_39 = ((var_14 + ((3789470440 ? var_17 : 1134907106097364992))));
                            var_40 = (arr_20 [i_2] [i_9 + 1] [i_9]);
                            var_41 = (i_2 % 2 == zero) ? ((1006632960 >> (((arr_17 [i_12] [i_2] [i_2] [18]) + 4415684005056329901)))) : ((1006632960 >> (((((arr_17 [i_12] [i_2] [i_2] [18]) - 4415684005056329901)) - 3928445957998571436))));
                        }
                    }
                }
                var_42 = (arr_11 [i_9 - 2] [i_9 - 2] [i_9 - 1]);

                for (int i_15 = 2; i_15 < 21;i_15 += 1)
                {
                    var_43 = (arr_34 [i_15 + 2] [i_9 + 1]);
                    var_44 = ((7600599170649831944 ? 0 : 72057594037927952));
                    arr_47 [i_15] [i_15] &= var_4;
                }
            }
            var_45 = (((arr_19 [i_2] [i_2] [i_9 - 1]) == (arr_19 [i_2] [i_2] [i_9 + 1])));
        }
        for (int i_16 = 2; i_16 < 22;i_16 += 1) /* same iter space */
        {
            var_46 += (((arr_36 [1] [i_2] [i_16] [i_16]) ? (arr_42 [i_16] [i_16 + 1] [i_16 - 2] [i_16 + 1] [i_16 + 1] [i_16 + 1]) : ((var_11 | (arr_21 [i_2] [i_16] [i_16] [i_16] [i_16])))));

            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                var_47 = (arr_25 [i_16 - 2] [i_16 + 1] [i_2] [i_16 - 1]);
                var_48 = (arr_18 [1] [12] [i_17]);
                arr_54 [i_2] [i_2] = (((arr_38 [19] [i_2]) && 8750460535578606526));
            }
            var_49 = ((2061584302080 ^ ((12996 | (arr_16 [19] [i_16] [i_16])))));
        }
        var_50 = ((-(arr_38 [1] [i_2])));
    }
    #pragma endscop
}
