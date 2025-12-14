/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_3));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = (max((min((arr_0 [i_0]), (arr_0 [i_0]))), 1573));
        var_19 = (min(var_19, -3816));
        var_20 = ((arr_0 [i_0]) ? ((~(max((arr_0 [i_0]), 1)))) : (((arr_0 [i_0]) | var_0)));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    {

                        for (int i_4 = 4; i_4 < 21;i_4 += 1)
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_1] [i_0] [i_1] = (arr_0 [i_3 - 1]);
                            var_21 = (min(var_21, var_5));
                        }
                        var_22 *= (min(-3787, (((-(arr_5 [i_1 + 1] [12] [4]))))));

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 24;i_5 += 1)
                        {
                            arr_16 [i_1] [i_1 - 1] [i_2] [i_3] [i_5] = (1 - 1);
                            var_23 = (~7398);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 3; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 9;i_8 += 1)
            {
                {
                    var_24 = (min(var_24, ((max((((!(arr_0 [i_6 - 1])))), ((((max(24847, (arr_7 [i_6] [22] [6] [i_7])))) ? (arr_22 [i_7] [i_8]) : (arr_4 [i_6 - 1] [i_6 - 2]))))))));
                    var_25 = (min(var_25, (((((!((max(19498, (arr_24 [i_8] [i_8] [i_7] [i_6])))))) && ((!(arr_24 [i_6 + 1] [i_8 + 2] [i_8] [i_8]))))))));
                    var_26 = (min(var_26, 0));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 9;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 9;i_10 += 1)
                        {
                            {
                                var_27 = (min(((((((arr_28 [i_6] [i_7] [i_8 - 1] [i_9 + 1] [i_10]) || var_10))) / (arr_17 [i_8]))), 51043));
                                var_28 = (~(((arr_30 [i_9] [i_9] [i_8 + 1] [i_6 + 1] [i_6 - 3] [i_6 - 3] [i_9]) ? (arr_7 [i_6 - 1] [i_7] [i_9] [i_9]) : var_5)));
                            }
                        }
                    }
                    var_29 = (min(var_29, (~-19519)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 21;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            {
                var_30 = -3615587601062296259;
                var_31 = min((min(var_15, (arr_34 [i_11]))), ((((arr_14 [i_11]) <= (arr_13 [i_11] [i_12] [i_11] [i_11] [17])))));
                arr_38 [i_11] = (max((((arr_15 [i_12] [i_12] [i_11] [i_11] [i_11] [i_11]) ? ((max(51043, var_1))) : var_16)), ((((max(1004623407, 13962))) ? ((var_4 ? var_15 : (arr_7 [14] [i_11] [2] [i_11]))) : var_10))));
                var_32 += ((((arr_15 [2] [i_12] [i_11] [i_12] [18] [5]) + (arr_32 [19]))));
            }
        }
    }
    #pragma endscop
}
