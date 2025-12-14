/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 10;i_3 += 1)
                {
                    {
                        var_17 += (((arr_6 [8] [8] [i_3]) ? 36 : (arr_6 [i_1] [i_2] [i_3 - 4])));
                        var_18 = (arr_8 [i_0] [i_1] [i_1]);
                    }
                }
            }
            var_19 = (min(var_19, ((((arr_10 [i_0 + 1] [10] [i_0 - 1] [i_0 + 2]) / (arr_2 [i_0 - 1]))))));

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_20 = ((~(arr_1 [i_0 + 2] [i_0 + 2])));
                var_21 += (var_7 || 0);
            }
        }
        arr_14 [i_0 + 3] [i_0 + 3] = (((arr_0 [i_0]) ? 6613713157172736732 : (arr_8 [i_0] [4] [4])));
        var_22 = (((((arr_12 [i_0 + 1] [i_0] [10]) + (arr_1 [i_0 + 3] [i_0 + 1])))) + (((arr_9 [0]) + var_3)));
    }

    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_23 = ((((35184363700224 ? (min(-6613713157172736733, 4294967292)) : (~-31256))) / (arr_15 [i_5] [16])));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 24;i_7 += 1)
            {
                {
                    var_24 = (((((~(arr_15 [i_5] [i_5])))) ? (max(-19, (max(2959784539511227048, 6613713157172736740)))) : (min(var_4, (arr_19 [i_5] [i_6] [i_7 - 2])))));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_25 += (~var_6);
                                var_26 = (arr_22 [i_5]);
                                var_27 = (min((((((((arr_25 [3] [i_7] [i_8] [i_7] [3] [i_6] [i_5]) ? (arr_22 [10]) : (arr_20 [i_5] [i_5] [i_7 - 1] [i_7 - 1])))) ? (arr_21 [21] [i_9] [20] [i_6 + 1]) : -31262))), ((((arr_23 [i_5] [i_5] [i_5] [i_5] [i_5]) ? -35184363700211 : var_16)))));
                            }
                        }
                    }
                }
            }
        }
        var_28 = (((9223372036854775792 ? (arr_19 [i_5] [i_5] [i_5]) : 0)));
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 22;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 25;i_13 += 1)
                        {
                            {
                                var_29 = ((max(((var_13 & (arr_30 [i_13] [i_13] [i_13] [i_12])), (var_5 && 60627)))));
                                var_30 = ((-(arr_29 [i_5] [i_10 + 1] [i_5])));
                                var_31 &= 7000022927857345494;
                                arr_37 [6] [i_5] [i_11] [6] [6] = (min((arr_15 [i_5] [i_5]), (111 < 2408886835)));
                            }
                        }
                    }
                    var_32 = ((-((-(arr_20 [i_5] [i_5] [24] [i_11])))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 25;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 25;i_16 += 1)
            {
                for (int i_17 = 2; i_17 < 24;i_17 += 1)
                {
                    {
                        var_33 = (arr_31 [i_15] [i_15] [i_17]);
                        arr_48 [20] [i_15] [i_16] [i_14] = ((((var_16 ? 949146630752345055 : var_8)) * (arr_45 [i_17 - 1])));
                        var_34 = (((4975 ? -19 : -31264)));
                    }
                }
            }
        }

        for (int i_18 = 0; i_18 < 25;i_18 += 1)
        {
            var_35 = (min(var_35, var_13));
            var_36 = ((28672 & (arr_41 [9] [i_18])));
            /* LoopNest 3 */
            for (int i_19 = 0; i_19 < 25;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 25;i_20 += 1)
                {
                    for (int i_21 = 3; i_21 < 24;i_21 += 1)
                    {
                        {
                            var_37 = ((-8881 ? (((arr_44 [8] [i_20] [i_14] [1]) - 32767)) : (arr_19 [i_14] [i_21] [i_21 - 3])));
                            var_38 += (((arr_49 [i_21 - 1]) << (arr_58 [i_14] [i_18] [12] [i_18] [i_20] [i_21 + 1])));
                        }
                    }
                }
            }
        }
        for (int i_22 = 0; i_22 < 25;i_22 += 1)
        {

            for (int i_23 = 0; i_23 < 25;i_23 += 1)
            {
                var_39 = (~(arr_16 [i_14] [i_14]));
                var_40 = (min(var_40, 4294967295));
                var_41 = (((arr_20 [i_14] [i_14] [i_22] [i_22]) ? (arr_42 [i_14] [i_14] [i_23]) : var_15));
                arr_65 [i_14] = ((var_0 * (arr_28 [i_14])));
            }
            for (int i_24 = 0; i_24 < 25;i_24 += 1)
            {
                var_42 = -954130529851885357;
                var_43 = (min(var_43, (((arr_49 [i_22]) ? var_11 : (arr_36 [i_24] [i_22])))));
                var_44 = (min(var_44, 8));
            }
            var_45 = (arr_22 [i_14]);
            /* LoopNest 2 */
            for (int i_25 = 0; i_25 < 25;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 25;i_26 += 1)
                {
                    {
                        var_46 = (+((16377 ? (arr_27 [11] [11] [1] [i_26] [13]) : var_9)));
                        var_47 = 6613713157172736716;
                    }
                }
            }
            arr_73 [i_14] [17] = ((arr_57 [i_22]) / (arr_28 [i_14]));
        }
    }
    var_48 = (max(var_48, (((max((max(262654215, var_6)), (((138 ? var_10 : var_4))))) | (max((var_12 & var_16), ((max(var_7, 32722)))))))));
    var_49 = 31;
    var_50 |= max(var_0, var_0);
    #pragma endscop
}
