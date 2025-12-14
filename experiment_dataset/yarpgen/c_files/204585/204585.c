/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!var_10);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_2] = 1754837516;
                    arr_10 [i_0] [i_1] [i_1] = ((((1754837519 ? (arr_8 [i_0] [i_0] [i_0]) : (arr_2 [i_0 + 1]))) * (arr_3 [i_0] [i_1 + 1])));
                }
            }
        }
        arr_11 [i_0 - 1] [i_0 + 2] = var_4;
    }
    for (int i_3 = 2; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_21 = (min(var_21, (arr_14 [i_3 - 1])));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 18;i_5 += 1)
            {
                {
                    var_22 = (max(var_22, (arr_6 [6] [6])));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            arr_25 [i_3] [i_5] = (arr_17 [i_3 + 2] [i_7]);
                            arr_26 [i_3] [i_4] [i_5] [i_6] [i_7] = 4294967291;
                            var_23 = (arr_14 [i_3]);
                            var_24 = (((arr_2 [i_3 + 3]) && (arr_2 [i_3 + 1])));
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            var_25 = (((arr_0 [i_8]) == var_14));
                            var_26 = ((!(arr_24 [i_3] [i_3 - 1] [i_5] [i_4] [i_5 - 1] [i_6] [i_8])));
                        }
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            arr_32 [i_3] [i_4] [i_5] [i_6] [i_9] = (arr_15 [11] [1] [6]);
                            var_27 = (max(var_27, (~var_19)));
                            var_28 -= var_13;
                            arr_33 [i_5] [i_6] [i_3 - 2] [i_4] [i_5] = ((((((arr_18 [i_3] [i_5 - 1]) ? (arr_1 [i_3 - 1]) : var_3))) ? (var_2 % 1) : 1754837524));
                            var_29 *= ((var_8 ? (arr_3 [i_5 + 2] [i_3 - 2]) : (arr_31 [i_3] [i_3] [i_3 + 3] [i_5 + 2] [i_9])));
                        }
                        var_30 -= (((((arr_12 [i_5]) < var_5)) ? (((arr_4 [i_3 + 3] [i_4] [i_6]) ? var_3 : (arr_19 [i_3] [i_3] [i_3] [i_6]))) : (arr_23 [i_3] [i_6] [i_3])));
                        var_31 = (max(var_31, ((((arr_14 [i_3 - 2]) != 255)))));
                    }
                    for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
                    {
                        var_32 = ((min((arr_12 [i_3 - 2]), var_16)));
                        var_33 = (arr_12 [i_5]);
                        arr_36 [i_3 + 2] [i_10] [i_5] [i_10] &= (max((((((arr_0 [i_3 - 2]) ? (arr_19 [i_10] [i_5 - 1] [i_4] [i_10]) : (arr_14 [i_3]))))), ((-32745 ? 1754837516 : 2873409231676664657))));
                        var_34 = (max(var_34, ((((((((var_0 ? -99202997 : (arr_34 [i_3] [i_3 - 2] [i_3] [i_3 - 2] [i_5] [i_10])))) && (((var_3 / (arr_0 [i_3 + 2])))))) ? (((arr_8 [i_5] [i_5 + 1] [i_5 - 1]) ? (arr_34 [3] [i_5] [i_5] [i_5] [i_5 + 2] [i_5 - 1]) : -3618100763455282596)) : (arr_16 [i_3] [i_3]))))));
                    }
                    for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
                    {
                        arr_39 [i_11] [i_5] [i_5] [i_3] = arr_17 [i_4] [3];
                        var_35 *= ((-((-var_5 ? (((arr_7 [i_11]) << (var_15 + 30909))) : (((arr_23 [i_5] [i_11] [i_5]) - 78))))));
                    }
                    /* vectorizable */
                    for (int i_12 = 2; i_12 < 19;i_12 += 1)
                    {
                        arr_44 [3] [i_4] [i_5] [i_5] [i_12] = (~(arr_17 [8] [i_4]));
                        var_36 += (((!92) / (arr_12 [i_3 + 3])));
                    }
                    arr_45 [i_3] [10] [i_5] [12] = (((arr_37 [i_5 - 1] [i_5] [i_5 - 1] [i_5]) ? var_8 : 4294967295));
                    var_37 = ((-(arr_29 [i_4] [6] [i_4])));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_13 = 1; i_13 < 19;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 19;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    {
                        arr_55 [i_3] [i_13] [i_14 - 1] [i_15] = ((((((((arr_34 [i_3] [9] [i_13] [i_14] [i_15] [i_15]) != (arr_47 [i_3] [i_3] [i_3]))))) % (max((arr_30 [i_3 + 2] [i_13 - 1] [i_14 - 1] [i_3 + 2] [i_15] [i_15] [i_3 + 2]), var_16)))));
                        var_38 *= (min((max(1754837517, 1754837516)), ((max((arr_4 [i_3 - 1] [i_3 + 1] [i_3 - 1]), (arr_48 [4] [4]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
