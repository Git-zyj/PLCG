/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_10 += max(28427, 37108);
                    arr_8 [i_0] [i_0] [i_2] = var_6;
                    var_11 = (arr_5 [10] [i_1] [0] [0]);

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_12 = (min((min(((-224331317 ? 37108 : 1)), 37121)), -2));
                        arr_11 [i_0] [i_0] [i_1] [i_2] [15] = (arr_7 [i_0]);
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_13 = (min(var_7, (min((max(var_1, (arr_9 [i_4] [i_1] [i_1]))), (arr_13 [i_1] [i_2] [i_1] [i_0])))));

                        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            var_14 = var_1;
                            var_15 = (max(var_15, (-2147483647 - 1)));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            var_16 = (arr_18 [i_1] [19] [i_1] [i_1] [i_1]);
                            var_17 = (arr_13 [i_0] [i_2] [i_2] [i_4]);
                        }
                        arr_19 [i_0] [i_4] [i_4] [i_4] = (min(((37085 ? 217378597173833748 : 1839426714)), ((((arr_12 [i_1]) ? (arr_12 [i_0]) : (arr_12 [i_4]))))));
                        var_18 = var_8;
                        var_19 *= (((arr_15 [i_0] [i_0] [16] [i_4] [i_4] [i_4]) ? (arr_10 [i_1] [i_2] [i_4]) : (arr_18 [i_0] [i_0] [i_2] [i_4] [i_4])));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_20 = (((arr_4 [i_0] [i_0] [i_0]) ? var_0 : 1060797166));
                        arr_22 [1] [1] [i_7] [i_7] = var_1;
                    }
                }
            }
        }
    }
    var_21 = (min(var_21, ((min((min((max(1570113855192393854, 21526)), 37108)), 14166)))));
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 7;i_10 += 1)
            {
                {
                    arr_31 [1] [i_8] [i_10] [i_10] = 1774138520;

                    for (int i_11 = 2; i_11 < 9;i_11 += 1) /* same iter space */
                    {
                        var_22 = (max(((((arr_9 [i_8] [i_9] [i_11]) ? (arr_14 [i_9] [i_9] [i_10 + 3]) : ((max((arr_1 [i_9] [i_11]), (arr_13 [i_8] [i_9] [i_10 + 1] [i_11 + 2]))))))), (max(((var_6 ? (arr_24 [i_9]) : var_1)), 28440))));
                        arr_35 [i_9] [10] [i_9] [i_9] [i_9] [i_8] = (max(((min(2147483647, (arr_34 [i_8])))), (min(217378597173833730, (arr_34 [i_8])))));
                        arr_36 [i_8] [i_8] = (max((arr_16 [14] [18] [18] [i_9] [i_9] [i_10] [14]), (arr_17 [i_8] [i_11])));
                        arr_37 [i_10] [i_8] [i_8] [3] [10] = 1;
                    }
                    for (int i_12 = 2; i_12 < 9;i_12 += 1) /* same iter space */
                    {

                        for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
                        {
                            arr_42 [i_8] [i_12] [i_8] [8] [i_8] = var_1;
                            arr_43 [i_8] [i_9] [i_9] = (max((min(217378597173833748, 139611588448485376)), -2147483647));
                        }
                        for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
                        {
                            arr_48 [i_8] [i_9] [i_10] [i_12] [i_14] = (min((max(8532527375050593350, var_7)), var_2));
                            arr_49 [i_8] = 44009;
                        }
                        var_23 = (arr_18 [i_8] [i_9] [i_8] [i_10] [i_12]);
                        var_24 = (((arr_47 [i_12] [i_12 - 2] [i_10] [i_9] [i_8]) ? (((min(1, (arr_5 [i_12 - 1] [i_12] [i_12 - 2] [i_12]))))) : (((((21527 ? 1 : 23574))) ? -7827396454610516290 : (max(var_9, 7995367686093900274))))));
                    }
                    for (int i_15 = 2; i_15 < 9;i_15 += 1) /* same iter space */
                    {
                        arr_53 [i_8] [i_8] [i_10 + 2] [i_15 + 1] [i_10] = (min(var_5, var_1));
                        var_25 += (arr_14 [i_8] [11] [11]);
                        arr_54 [i_8] [i_8] = 1;

                        /* vectorizable */
                        for (int i_16 = 1; i_16 < 1;i_16 += 1) /* same iter space */
                        {
                            var_26 = (arr_4 [i_10 + 4] [i_16 - 1] [i_16 - 1]);
                            arr_58 [i_15 - 1] [i_8] = var_4;
                        }
                        for (int i_17 = 1; i_17 < 1;i_17 += 1) /* same iter space */
                        {
                            var_27 = (max(var_27, (((-765 ? 29 : 7995367686093900274)))));
                            var_28 = (min((arr_59 [i_8] [i_9] [i_10] [5] [i_15 + 2] [i_15 - 1] [i_15 + 2]), (min(((max((arr_29 [i_15] [i_17]), 20120))), (max(8380847037149769709, 3294890757195004583))))));
                            var_29 = (min(17994074850905607269, var_9));
                        }
                    }
                    arr_61 [i_8] = (arr_17 [i_10 + 2] [i_8]);
                }
            }
        }
    }
    #pragma endscop
}
