/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((26898 ? var_14 : (max(var_0, ((var_6 ? var_5 : var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = (((((4225503022705892297 ? -4225503022705892297 : var_13))) >= var_10));
                var_20 += var_6;
                var_21 ^= (4225503022705892297 - var_15);
                var_22 = ((~(((arr_4 [i_0 - 3] [1] [i_0 + 1]) ? (arr_4 [i_0 - 3] [i_0] [i_0 + 1]) : (arr_4 [i_0 - 3] [i_0 - 3] [i_0 + 1])))));
            }
        }
    }
    var_23 = (((~(max(var_16, var_11)))) - (((((-4225503022705892269 ? var_11 : var_15))))));

    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {
                        var_24 = (arr_10 [i_2] [i_2] [i_2 - 1]);
                        var_25 = (~var_15);
                    }
                }
            }
        }
        var_26 = ((-4225503022705892304 >= ((((arr_14 [i_2]) ? (~0) : (arr_13 [i_2] [i_2] [i_2] [i_2]))))));
        var_27 = (-2356729777311233740 | var_5);
    }
    for (int i_6 = 1; i_6 < 12;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                {
                    var_28 = var_12;

                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        arr_23 [i_6] [i_7 + 2] [i_8] [i_9] [i_8] = (((~4225503022705892273) ? ((min(119, 35981))) : (((3839382007 == (((1011263463 ? var_6 : var_17))))))));
                        var_29 = (((((~(arr_15 [i_6 + 1])))) ? (((var_16 << ((((var_11 ? (arr_6 [i_6]) : 27231)) - 9896081114901125816))))) : 8229603996924449272));
                        var_30 ^= (arr_10 [i_6] [i_6] [i_6]);
                        arr_24 [i_6] [i_7] [i_8] [i_9] [i_7] = 1;
                        arr_25 [i_6] [i_6] [i_8] [i_9] [i_6] = (min((var_1 / 4225503022705892297), -39));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 12;i_11 += 1)
            {
                {
                    arr_31 [i_6 + 2] [i_10] [i_11 - 1] [i_11] = (min(var_14, ((((arr_20 [i_6 - 1]) ^ (arr_20 [i_11 + 1]))))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 14;i_13 += 1)
                        {
                            {
                                var_31 = ((+((((((-9223372036854775807 - 1) ? var_4 : 232))) ? 2378717389 : var_5))));
                                var_32 = ((((((((-5782043491497601139 ? (arr_14 [i_6]) : 1243780519))) ? (arr_34 [i_6] [i_11 + 2]) : (((arr_32 [i_6] [i_13]) ? 1806473768 : var_8))))) ? (((max((arr_16 [i_6]), var_8)))) : (min((arr_34 [i_6] [i_6]), ((min((arr_35 [i_6]), -1806473761)))))));
                                arr_37 [i_10] [i_10] [i_10] [i_12] [i_13] = (max(((((max(var_0, 32767))) ? (~-3193147138077470862) : var_16)), (arr_1 [i_6 + 2] [i_6 + 2])));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_14 = 2; i_14 < 16;i_14 += 1)
    {
        var_33 = (min(1, var_3));

        /* vectorizable */
        for (int i_15 = 0; i_15 < 17;i_15 += 1)
        {
            var_34 = -32764;
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 17;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 17;i_17 += 1)
                {
                    {
                        arr_50 [i_14] [i_14] [i_14] [i_14] = var_4;
                        var_35 = ((~(arr_45 [i_15] [i_15] [i_14])));
                    }
                }
            }
        }
        var_36 = 1806473770;
        arr_51 [i_14] = (min(((-8807416994167998306 ? (arr_6 [i_14 + 1]) : (arr_41 [i_14 - 2]))), -2355203236833379700));
    }
    #pragma endscop
}
