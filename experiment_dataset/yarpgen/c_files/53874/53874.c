/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_10 += (max(var_1, (max(264384723911329810, 12136511700212431231))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 = (((var_9 - var_3) ? (((!(arr_3 [i_0] [i_2 + 1] [i_2 + 1])))) : (max((1 + var_3), ((max(-31645, (arr_4 [i_0] [i_1]))))))));
                                var_12 -= (max(var_0, var_5));
                                var_13 = (max(((max(-56, (max(-117, 80))))), 40654));
                                arr_12 [i_2 - 2] [i_0] = (max((max((((arr_8 [1] [i_3] [i_0] [i_0] [i_0] [i_0]) & var_7)), (var_4 == 57530))), (((!(arr_4 [i_0] [i_3]))))));
                            }
                        }
                    }
                    arr_13 [i_2 - 2] [i_0] [i_2] = (arr_4 [i_0] [i_0]);
                    var_14 = (arr_6 [i_0 - 1] [i_1 - 1] [i_0] [i_0 - 1]);
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_19 [i_1 + 1] [i_1 - 1] [i_0] [i_1] [i_1] [i_1] [16] = ((max((min(12650433317369138319, (arr_8 [i_0] [i_6] [i_0] [i_5] [i_0] [i_6]))), var_3)));
                                var_15 = (arr_3 [i_0] [i_0] [i_5]);
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_16 = ((24 ? -23845 : 2726677404));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                {
                    var_17 = (min(-9172846404051181640, (((arr_11 [i_7] [i_7] [i_8] [i_8] [i_9]) ? (((arr_26 [3] [i_8] [3]) * -8533999098202613867)) : (64731 / 21101647)))));
                    arr_28 [i_7] [i_7] [i_7] = (arr_2 [i_7] [i_7]);

                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                        {
                            arr_33 [i_7] [i_9] [7] = 249;
                            var_18 = ((~((((arr_27 [1] [i_7] [i_11]) <= var_6)))));
                            arr_34 [i_7] = ((((!6) || 247)) ? (min(15463, ((var_2 ? var_1 : (arr_0 [i_7] [i_7]))))) : (((!2056423563) ? (((!(arr_8 [i_7] [16] [i_7] [i_9] [i_7] [9])))) : (arr_32 [i_11] [3] [i_9] [i_8] [i_7]))));
                            arr_35 [15] [15] [6] [5] [i_11] [i_7] [0] = (arr_2 [i_7] [i_7]);
                            arr_36 [i_7] [i_10] [i_10] [i_10] [i_7] [i_10] [9] = ((-42 ? -125 : 4));
                        }
                        for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
                        {
                            var_19 = (var_6 * var_0);
                            arr_39 [i_7] [i_7] [i_7] [i_7] [i_9] [i_10] [i_12] = (arr_22 [i_7] [i_8]);
                        }
                        arr_40 [i_7] [i_9] [1] [i_8] [i_7] [i_7] = ((((((((15 ? 232 : 14499))) ? ((min(55, (arr_4 [i_7] [i_7])))) : (((arr_18 [i_10] [2]) ? 133 : var_1))))) ^ ((156 ? -27691 : (max(940, -1392698469995575962))))));
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_20 = (max(var_20, (-381403004 >= 1)));
                        var_21 = (min(var_21, (((((var_9 ? ((max((arr_7 [i_7] [i_7] [i_7] [i_7]), var_3))) : 65535)) << (((arr_5 [1]) - 3381969068)))))));
                        arr_43 [i_7] [i_7] [i_7] [i_7] [i_8] = (arr_22 [i_7] [i_13]);
                    }
                }
            }
        }
    }
    var_22 = var_9;
    var_23 = var_3;
    #pragma endscop
}
