/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = (((min((!var_2), -8640472637392463371)) <= var_13));
                    var_21 = ((((-52679 ? (min((arr_2 [i_0]), 17696502774185838364)) : (10 > 100))) ^ ((min(1023, ((12858 ? var_8 : (arr_6 [8] [i_0] [i_2]))))))));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_0] = 52678;
                        arr_13 [i_0] [i_1 + 1] [0] [i_0] = 9223372036854775776;
                        arr_14 [i_0] [i_0] [i_0] [i_3] = (~-111);
                        arr_15 [i_0] [i_0] [i_2] [i_0] = ((((min((min(17384591254306783228, 12851)), (arr_6 [i_0] [i_0] [i_1 - 1])))) ? (min(12858, 0)) : (arr_10 [i_0])));
                    }
                }
            }
        }
    }
    var_22 = ((min(var_0, var_13)));
    var_23 = ((~((((min(11746, -87))) ? (((max(12857, -101)))) : -6563568747062278613))));

    /* vectorizable */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_24 = (min(var_24, (52678 - var_6)));
        arr_18 [i_4] = (7 / 192);

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_25 &= (arr_20 [0] [i_5]);
            arr_21 [i_4] [i_5] = 39225;
            var_26 = (((arr_19 [i_4] [i_5] [6]) ? (arr_19 [i_4] [i_5] [i_5]) : (arr_19 [i_4] [i_5] [i_4])));
            arr_22 [i_4] [i_5] = ((4447663023086511942 ? 52665 : 105));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_27 = (max(var_27, (((!(arr_20 [0] [i_4]))))));
            var_28 = ((!(((~(arr_16 [4] [4]))))));
            arr_25 [i_6] [i_6] [i_6] = var_7;
            var_29 += (!130816);
        }
        arr_26 [i_4] = -65;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        arr_31 [i_7] = (~113);
        var_30 = (((arr_17 [i_7]) ? (arr_29 [1] [i_7]) : 11758));
        var_31 = (((arr_30 [i_7]) <= ((1 ? 52679 : -34))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 4; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            {
                                var_32 = (max(var_32, (arr_16 [i_10 - 3] [i_10])));
                                var_33 &= 26;
                            }
                        }
                    }
                    arr_43 [i_7] = (arr_19 [i_7] [i_7] [i_9]);
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 0;i_12 += 1)
    {
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 13;i_15 += 1)
                {
                    {
                        var_34 = (min((min(1, 21555)), 14));
                        var_35 = ((~(min((~1), -39225))));
                        var_36 = (((arr_46 [i_12] [i_13]) ? (arr_46 [i_12] [i_15 + 1]) : var_16));
                    }
                }
            }
        }
        var_37 = (min((max(var_12, (arr_45 [i_12 + 1]))), ((((~(arr_47 [i_12])))))));
        var_38 ^= var_19;
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 16;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 16;i_17 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 16;i_19 += 1)
                        {
                            {
                                var_39 = (~-2073);
                                var_40 = 685;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 16;i_20 += 1)
                    {
                        for (int i_21 = 4; i_21 < 13;i_21 += 1)
                        {
                            {
                                var_41 = 40287;
                                arr_72 [i_12] [i_20] [i_12] [i_12] [i_21] = ((!(((~(arr_64 [i_12] [i_12 + 1] [i_17] [i_21]))))));
                            }
                        }
                    }
                }
            }
        }

        for (int i_22 = 0; i_22 < 16;i_22 += 1)
        {
            var_42 = (min(var_42, (((1 & (arr_51 [14] [i_12 + 1] [6] [i_12]))))));
            arr_76 [i_12] [i_12] [i_12] = (((min((arr_48 [i_12] [i_22] [i_22]), var_19))) ? (((arr_51 [i_12] [i_12 + 1] [i_12] [i_12 + 1]) / (arr_48 [i_12] [i_12] [i_22]))) : (!1));
            var_43 = (min(var_43, ((min((arr_50 [i_12 + 1] [12] [i_12 + 1]), var_11)))));
            arr_77 [i_12] [i_22] = (min((arr_60 [i_12 + 1] [i_12] [i_12 + 1] [i_12 + 1]), var_19));
        }
    }
    #pragma endscop
}
