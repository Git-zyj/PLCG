/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = ((((((arr_0 [i_0] [i_0]) <= (((arr_3 [i_0] [i_0]) ? (arr_1 [i_1]) : var_5))))) - ((min(15, var_7)))));
                    var_11 |= ((max(14, ((-21663 ? 209 : var_3)))));
                    var_12 = ((((((41238 ? (arr_2 [i_0]) : (arr_2 [i_2])))) + (-9223372036854775807 - 1))));
                }
            }
        }
        arr_7 [i_0] [i_0] = var_8;
        arr_8 [i_0] = (max((arr_2 [i_0]), (arr_5 [i_0])));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        arr_12 [i_3] = -13;

        for (int i_4 = 4; i_4 < 13;i_4 += 1)
        {
            arr_15 [i_3] [i_4 - 2] = (min(4936071286153961983, 20));
            arr_16 [i_3] [i_4] = var_9;
            var_13 = (max(var_13, ((((min((arr_11 [i_4 + 1] [i_4 - 1]), -22))) >> (((min((max(-7556269206091604706, -2147483640)), -22)) + 2147483653))))));
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 12;i_5 += 1)
        {
            var_14 = (min(var_14, (arr_11 [i_3] [i_5])));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        arr_23 [i_3] [i_3] [i_7] [i_6] [i_3] [i_7] = (((arr_21 [i_6] [2] [i_6] [8]) + (arr_21 [i_6] [8] [i_6] [i_7])));
                        var_15 = (((!-22) > var_2));
                        var_16 = (15 >> ((((arr_9 [i_7]) > -4936071286153961982))));
                        arr_24 [i_6] = (((3043 + 32767) ? var_0 : (arr_17 [i_5 - 1] [i_5 - 2])));
                    }
                }
            }
            var_17 = (arr_0 [i_3] [i_5 + 2]);

            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                var_18 = (max(var_18, 37));
                var_19 = (arr_27 [i_3] [i_5 + 1] [i_8] [i_3]);
                arr_29 [i_3] [i_5] [i_3] = ((((104 ? var_5 : 29757)) / ((((arr_11 [i_3] [i_3]) <= var_5)))));
            }
        }
        for (int i_9 = 1; i_9 < 10;i_9 += 1)
        {
            arr_32 [i_9] = (min((arr_18 [i_3] [1]), ((min((arr_26 [7] [i_3] [i_3] [i_9 + 2]), (arr_26 [i_3] [2] [i_3] [i_3]))))));
            var_20 = (((arr_2 [i_3]) ? (((!(((arr_9 [i_3]) || 15148591692782706865))))) : (arr_10 [1] [i_9])));
            arr_33 [i_9] [i_9] = (((((arr_26 [i_3] [i_9 + 2] [i_9 + 3] [i_9 + 1]) / 121)) / (arr_20 [i_9 - 1] [i_9] [i_3])));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            arr_36 [i_10] [i_10] [i_10] = (arr_25 [i_10]);
            var_21 = (min(var_21, ((((arr_9 [i_3]) > (arr_19 [i_3] [i_3] [i_10] [i_10]))))));
        }
    }
    var_22 = ((2161056583728020164 ? var_8 : 18));
    var_23 = var_4;

    /* vectorizable */
    for (int i_11 = 0; i_11 < 20;i_11 += 1)
    {
        arr_39 [i_11] = ((-(!65)));
        arr_40 [i_11] [i_11] = (((arr_3 [14] [18]) ? (((arr_4 [21] [8]) % 4936071286153961955)) : (arr_4 [i_11] [i_11])));
        var_24 = (arr_1 [i_11]);
        arr_41 [i_11] = 234;
    }
    #pragma endscop
}
