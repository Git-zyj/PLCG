/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_15 = (min(var_15, (((-110 ? (max(-521234886, 25)) : var_13)))));
                            arr_11 [i_1] [i_1] [i_2] [i_3] = (arr_5 [i_1]);
                        }
                    }
                }
                var_16 = ((+((((max((arr_1 [5]), var_8))) ? (arr_5 [i_1]) : 4294967270))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_17 = var_7;

                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 14;i_6 += 1)
                            {
                                var_18 = (arr_10 [i_5 + 1] [i_5] [i_1] [i_5]);
                                arr_19 [i_6] [i_0] [i_1] [i_1] [i_1] [i_0] [i_0] = ((-2113495185 ? var_0 : (((var_12 ? var_14 : 201)))));
                                var_19 = (((((-(arr_18 [i_1])))) ? (((((arr_18 [i_1]) <= var_5)))) : (arr_16 [i_5 + 1] [i_5] [i_5 - 1] [i_6])));
                                var_20 = (min(var_20, (arr_8 [i_0] [i_1] [11] [i_6])));
                                var_21 = ((var_0 >= (((arr_3 [12] [i_1] [i_5]) ? 39 : var_3))));
                            }
                            for (int i_7 = 0; i_7 < 14;i_7 += 1)
                            {
                                var_22 = -8659726360693892277;
                                arr_22 [i_0] [i_1] [6] [i_1] [i_1] = (arr_10 [i_1] [i_1] [i_1] [i_0]);
                                var_23 += 2823488241;
                                var_24 = (min(var_24, ((((((max((max(var_10, var_4)), ((((arr_7 [i_0]) >= 219))))))) >= (min((-8 | 18), (((-2836307501787938922 ? var_1 : var_9))))))))));
                            }
                            var_25 = ((((-(arr_12 [i_5 - 1] [i_5 - 1] [i_5 - 1]))) < var_14));
                            var_26 = (min(var_26, (arr_10 [i_0] [i_1] [i_4] [10])));
                        }
                    }
                }

                for (int i_8 = 4; i_8 < 13;i_8 += 1)
                {
                    var_27 = (arr_0 [i_8 - 1]);
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 12;i_10 += 1)
                        {
                            {
                                arr_30 [i_0] [i_1] [i_8] [i_0] [i_10] = (~var_0);
                                var_28 += var_9;
                                arr_31 [i_1] [11] [i_1] [i_1] [i_1] = ((var_2 ? (max(-2113495185, var_12)) : (arr_2 [i_1] [i_1])));
                                var_29 = 30;
                                var_30 |= ((max(((max(1471479053, -25))), (arr_23 [i_1] [i_9] [i_9] [i_0]))) - 1833);
                            }
                        }
                    }
                }
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    arr_34 [i_1] [i_1] [i_11] = (((-(arr_32 [i_0] [i_1] [i_1] [i_11]))));
                    arr_35 [i_0] [i_1] [i_1] = -77;
                    var_31 = (max((((((4294967273 ? -8232191920893304327 : 25))) ? (arr_18 [i_1]) : (((arr_28 [i_0] [3] [i_1] [i_11]) ? 1839 : 1471479075)))), 463585368));
                    arr_36 [i_1] [i_1] [i_11] = (((arr_26 [i_0] [12] [i_11] [i_1] [i_11] [i_1]) ? 1851 : ((68 ^ (arr_3 [i_0] [3] [i_0])))));
                    var_32 = (max(var_32, ((max(((((arr_4 [i_0]) ? (arr_4 [i_11]) : (arr_4 [i_0])))), ((min((arr_21 [i_1]), (arr_7 [i_11])))))))));
                }
                var_33 = (((arr_15 [i_0] [2]) * (arr_1 [i_1])));
            }
        }
    }
    var_34 = var_12;
    var_35 = ((((var_4 + 2147483647) >> (var_10 - 19093))));
    var_36 = (~var_5);
    #pragma endscop
}
