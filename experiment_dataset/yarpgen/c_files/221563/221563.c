/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 = ((arr_4 [i_0]) ? (min(var_0, (arr_2 [i_0] [i_2]))) : var_5);

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_11 [i_0] [i_2] [i_2] [i_1] [i_0] = ((!((((((((arr_4 [i_0]) + 2147483647)) << (((arr_6 [i_0]) - 1)))) ^ ((var_3 ? 170 : 0)))))));
                        arr_12 [2] [2] [i_2] [i_0] = ((-((min((arr_8 [i_0] [i_1] [i_2] [i_3]), (arr_6 [i_0]))))));
                    }
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        var_14 ^= var_10;
                        arr_16 [i_0] [i_0] [i_2] [i_4] [i_4 + 1] [i_4] = ((-(170 ^ -84)));

                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            arr_19 [i_0] [i_0] [4] [i_0] = ((((min(-76, (arr_3 [i_0])))) ? ((var_4 ? (arr_7 [i_0]) : (var_4 + var_4))) : (((arr_9 [i_0] [6] [1] [i_0]) * (arr_9 [i_0] [i_5] [i_5] [i_0])))));
                            var_15 = ((~(min((~var_12), var_5))));
                        }
                        arr_20 [i_0] [i_1] [i_1] [i_0] [i_0] = ((var_1 ? ((((arr_7 [i_0]) ? var_3 : var_12))) : ((((min(var_2, (arr_13 [i_0] [i_0] [i_2] [i_4 + 1])))) * (((arr_4 [i_0]) ? 127 : var_0))))));
                        var_16 = var_2;
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_17 = min((min((min(var_0, 170)), (arr_14 [1] [12] [i_2] [i_0]))), ((((-9223372036854775807 - 1) ? ((-(arr_7 [i_0]))) : (~var_5)))));
                        arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0] = ((((min(72, ((var_10 ? (arr_1 [i_0]) : -89))))) ? (max((((arr_22 [i_6] [i_6] [1] [i_1] [i_0]) ? 268435455 : (arr_4 [i_0]))), (!var_5))) : (min(var_12, -3181801049427184716))));
                        arr_24 [i_0] [i_1] [i_1] [i_1] [i_1] [5] = 1;
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        arr_27 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] = ((((((((var_5 ? (arr_13 [8] [i_0] [i_2] [i_2]) : (arr_17 [9] [15] [15] [i_2] [15])))) ? var_9 : (((arr_10 [i_0] [7] [i_0] [i_0] [i_2] [i_7]) * (arr_17 [i_0] [8] [8] [i_0] [8])))))) && var_7));
                        arr_28 [i_0] [i_0] [i_7] = (((((var_10 < var_5) << ((((max(1, (arr_14 [i_1] [i_1] [i_1] [i_0])))) - 230)))) * ((-((-93 - (arr_25 [i_0] [i_1] [1] [i_2] [i_7] [i_0])))))));
                    }

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {

                        for (int i_9 = 1; i_9 < 17;i_9 += 1)
                        {
                            arr_35 [i_0] = ((var_12 ? -96 : 86));
                            arr_36 [i_0] = ((~(arr_31 [i_9 + 2])));
                        }
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            arr_39 [i_0] = (arr_15 [i_0] [12] [i_1] [i_1] [i_1] [i_0]);
                            var_18 = (max(var_18, ((((arr_6 [i_10]) + 255)))));
                        }
                        var_19 = ((var_9 ? (arr_3 [i_1]) : 160));
                    }
                    arr_40 [i_0] [i_1] [i_0] [i_2] = var_11;
                    arr_41 [i_1] [i_1] [i_2] &= ((var_7 << ((((~(arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))) - 60))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                {
                    arr_47 [i_0] [i_0] = (min((((((49 ? (arr_21 [i_0] [i_12]) : (arr_0 [i_0] [i_12]))) - ((min((arr_43 [i_0] [i_12]), (arr_31 [i_12]))))))), (min((var_4 / -268435458), ((min(var_8, var_9)))))));
                    arr_48 [i_0] [i_11] [i_0] = -88;
                    arr_49 [i_0] [i_11] [i_12] &= max(((-(arr_25 [i_0] [i_0] [i_0] [i_0] [i_11] [i_12]))), -37);
                }
            }
        }

        for (int i_13 = 2; i_13 < 16;i_13 += 1)
        {
            arr_54 [i_0] = (arr_0 [i_0] [i_13]);
            var_20 = (arr_52 [i_0] [i_0] [i_13]);
            arr_55 [i_0] [i_0] = ((((min(((((arr_2 [i_0] [14]) ? var_12 : var_3))), (min((arr_46 [i_0] [i_0]), (arr_42 [i_0])))))) ? ((min(-var_3, (arr_21 [i_13 - 1] [i_13 - 1])))) : ((((min(var_10, (arr_21 [i_0] [i_13])))) ? ((((arr_26 [i_0] [i_0] [i_13] [i_0]) ? 1 : (arr_30 [i_0] [i_0] [i_0])))) : var_5))));
            arr_56 [i_0] [i_13] = ((((+((max((arr_43 [i_0] [i_0]), var_9))))) < (((!(arr_53 [i_0]))))));
        }
        arr_57 [i_0] = (((((((min(var_1, (arr_5 [i_0] [i_0] [i_0])))) ? var_2 : ((((arr_6 [i_0]) && (arr_21 [i_0] [i_0]))))))) ? var_3 : (arr_38 [i_0] [i_0] [16] [i_0] [i_0] [i_0])));
    }
    for (int i_14 = 0; i_14 < 23;i_14 += 1)
    {
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 23;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 23;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 21;i_17 += 1)
                {
                    {
                        arr_70 [i_14] [i_14] [i_14] [i_14] [5] = var_0;
                        var_21 = (min((arr_69 [i_14] [i_17 - 1] [i_17] [i_17]), (((arr_69 [i_15] [i_17 + 1] [i_17] [i_17]) ? (arr_69 [i_15] [i_17 + 1] [16] [i_15]) : 109))));
                    }
                }
            }
        }
        arr_71 [i_14] [13] = arr_69 [i_14] [i_14] [i_14] [21];

        /* vectorizable */
        for (int i_18 = 2; i_18 < 22;i_18 += 1) /* same iter space */
        {
            arr_76 [i_14] [21] = 5831797591548068282;
            var_22 = var_12;
            var_23 = ((141 ? var_2 : var_4));
        }
        for (int i_19 = 2; i_19 < 22;i_19 += 1) /* same iter space */
        {
            var_24 = var_6;
            /* LoopNest 2 */
            for (int i_20 = 2; i_20 < 21;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 23;i_21 += 1)
                {
                    {
                        var_25 = (arr_60 [3]);
                        var_26 = (arr_69 [i_21] [i_20 + 1] [i_14] [i_14]);
                    }
                }
            }
        }
        arr_83 [i_14] [20] = var_10;
    }
    var_27 = (((-94 ? var_3 : ((135 ? var_2 : var_12)))) << (var_10 - 2553854012));
    #pragma endscop
}
