/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = (max(0, (((min(1, (arr_3 [i_0])))))));
                arr_6 [21] [21] = var_6;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_15 [i_2] [i_2] [16] [i_5] = (((((96 ? 653519022 : 1))) | (min(((max((arr_3 [i_2 + 1]), var_6))), (min(31, 16128))))));
                            var_18 = (((!(arr_7 [i_4]))) ? (((7814906391372464035 ? var_2 : var_14))) : (((min((arr_12 [i_2] [i_4 + 2] [i_4 - 3] [i_4 + 1]), (arr_12 [i_2] [i_4 - 3] [i_4 - 1] [i_4 - 3]))))));

                            for (int i_6 = 0; i_6 < 22;i_6 += 1)
                            {
                                var_19 = (min(((((max(1031559457, -2))) / var_12)), ((((max(123, 1)))))));
                                arr_18 [4] [i_2] = 1;
                            }
                            for (int i_7 = 0; i_7 < 22;i_7 += 1)
                            {
                                var_20 |= (max(var_5, ((~(!var_15)))));
                                var_21 = (arr_14 [i_2] [i_2] [i_2]);
                                var_22 = (arr_4 [i_2 + 3] [i_4]);
                                var_23 -= (((~(((!(arr_10 [i_7] [i_2])))))));
                                arr_22 [i_3] [i_2] = var_13;
                            }
                            /* vectorizable */
                            for (int i_8 = 2; i_8 < 21;i_8 += 1)
                            {
                                var_24 = (min(var_24, (arr_7 [i_2])));
                                var_25 = (min(var_25, ((((1 ? 1 : var_13)) << (var_13 + 1668651487)))));
                            }
                            /* vectorizable */
                            for (int i_9 = 0; i_9 < 22;i_9 += 1)
                            {
                                var_26 = (~2023234270);
                                var_27 = ((((arr_5 [i_3] [i_9]) - (arr_13 [i_2]))));
                            }
                        }
                    }
                }

                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    var_28 = (max(var_28, ((max((min((max(var_16, (arr_1 [i_2] [i_3]))), (min(var_15, 840042668)))), (((max(var_11, 2613767567231160544)) & (arr_21 [i_2 + 1] [i_3] [i_10] [i_2 + 4] [11]))))))));
                    var_29 = ((!(((0 ? 5 : -82)))));
                    var_30 = (arr_21 [i_3] [1] [i_10] [i_3] [i_10]);

                    for (int i_11 = 2; i_11 < 20;i_11 += 1) /* same iter space */
                    {
                        var_31 = ((!((!(arr_9 [i_2])))));
                        var_32 = (((((((!(arr_19 [i_2] [i_3] [i_3] [i_3])))))) ? ((1 ? -1484611383212304790 : (-32767 - 1))) : (arr_4 [i_2] [3])));
                        arr_35 [4] [i_10] [i_10] [i_2] = (((min((~var_4), ((min((arr_24 [1] [i_10] [1]), (arr_19 [i_2] [15] [16] [i_11])))))) ^ (arr_29 [i_2] [i_3] [14] [i_10] [i_11 - 1])));
                        var_33 = (((((((arr_10 [0] [i_10]) ? (arr_33 [12] [i_3]) : var_0))) ? var_12 : (~var_3))));
                        var_34 -= (arr_20 [i_2] [i_3]);
                    }
                    for (int i_12 = 2; i_12 < 20;i_12 += 1) /* same iter space */
                    {
                        var_35 = max(1, 1);
                        var_36 = (max(var_36, ((min((max((((1 ? (arr_32 [i_10]) : var_5))), var_12)), (min((arr_30 [i_2 - 1] [i_12 - 2] [i_10]), var_8)))))));
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
                    {
                        var_37 = 1766222061;
                        arr_41 [i_2] [i_3] [11] [i_13] [i_10] = (!2775878452);
                    }
                    for (int i_14 = 0; i_14 < 22;i_14 += 1) /* same iter space */
                    {

                        for (int i_15 = 0; i_15 < 22;i_15 += 1)
                        {
                            arr_47 [i_10] [i_2] [i_10] [i_10] [i_15] = var_8;
                            arr_48 [i_2] [6] [i_10] [i_14] [i_10] &= (max(((min(var_6, (arr_33 [i_2] [i_2 + 4])))), ((1682705676 ? -13 : 255))));
                        }
                        for (int i_16 = 4; i_16 < 19;i_16 += 1)
                        {
                            var_38 -= (arr_8 [i_2] [i_16]);
                            arr_52 [i_2] [i_3] [i_2] [i_3] [i_2] = ((((((var_8 / var_2) ^ ((1701257423579209772 ? 1206849826466617066 : 1))))) ? (~1) : (((-8 + 2147483647) << (((arr_51 [i_2] [i_3] [i_2 + 4] [i_14] [i_3]) - 75))))));
                        }
                        var_39 = (min(0, 87));
                        var_40 += -1451031085309790693;
                    }
                }
            }
        }
    }
    var_41 = (min(var_41, var_15));
    var_42 = ((!((min((var_9 + var_1), var_3)))));
    #pragma endscop
}
