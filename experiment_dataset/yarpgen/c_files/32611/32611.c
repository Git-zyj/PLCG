/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(32767, -16955));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [i_2] = (((var_11 == 30947) ? (arr_3 [i_0] [i_2]) : (((arr_4 [i_0] [i_1] [i_0]) ? 32767 : (arr_3 [i_1] [i_2])))));

                    for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
                    {
                        var_13 += (256 > 32767);
                        arr_11 [i_3] [i_1] = arr_2 [6] [i_1] [i_3];
                        var_14 = (max(var_14, (((var_0 ? (arr_2 [i_3 + 1] [i_2 - 1] [4]) : (arr_2 [i_3 + 1] [i_2 + 4] [1]))))));
                    }
                    for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_2] [i_4 + 1] = (arr_13 [i_0] [i_1] [i_2] [i_2 - 2] [i_1] [i_4]);
                        arr_15 [i_0] [i_0] = (((arr_7 [i_2 - 1] [i_2 + 4] [i_2 - 2] [i_4 - 1]) > (((arr_12 [20] [14] [i_2] [i_2] [i_2] [i_2]) - var_0))));
                        var_15 = (min(var_15, var_2));
                        var_16 = (((~32767) | var_8));
                    }
                }
            }
        }
        var_17 = (((-32756 - var_8) ? (((arr_1 [i_0]) - (arr_1 [i_0]))) : 8147));
    }
    for (int i_5 = 3; i_5 < 16;i_5 += 1) /* same iter space */
    {
        arr_19 [i_5] [14] = (max(((((max(0, (arr_4 [i_5] [i_5 + 1] [17])))) ? (((arr_2 [i_5] [i_5 - 2] [i_5]) ? var_3 : (arr_5 [i_5] [i_5] [i_5] [10]))) : ((min((arr_17 [i_5]), (arr_18 [i_5] [i_5])))))), (((arr_3 [i_5] [i_5 + 2]) ? 0 : (arr_3 [i_5] [i_5 + 3])))));
        var_18 = (-1 & 0);
        var_19 = (max(var_19, (max(var_0, ((((arr_0 [i_5 + 3]) || (arr_0 [i_5 + 3]))))))));
    }
    for (int i_6 = 3; i_6 < 16;i_6 += 1) /* same iter space */
    {
        var_20 = ((((((max((arr_2 [i_6] [i_6] [i_6]), var_11))) ? ((((arr_21 [i_6] [i_6]) != 32767))) : ((min(-11458, (arr_5 [i_6] [i_6] [i_6 - 2] [i_6])))))) >> (((arr_7 [i_6] [5] [i_6 - 3] [i_6 - 1]) + 1535))));
        var_21 = (min(var_21, ((((((((((arr_0 [i_6]) ? (arr_9 [2]) : (arr_12 [i_6] [i_6] [i_6] [i_6] [i_6 - 3] [i_6])))) ? (((arr_3 [i_6] [20]) ? (arr_8 [i_6 - 2] [i_6 - 2]) : var_4)) : (~var_9)))) ? (((((-3 ? 512 : -10))) ? ((max(var_6, var_0))) : (arr_16 [i_6 + 2]))) : (arr_5 [i_6] [i_6] [0] [i_6]))))));
        var_22 = arr_9 [8];
        var_23 = (min(var_23, ((((((((arr_10 [i_6 + 3] [i_6] [i_6] [i_6]) - 32757)) - 1122)) + -30321)))));
    }
    for (int i_7 = 3; i_7 < 16;i_7 += 1) /* same iter space */
    {
        var_24 = (~var_4);
        var_25 = ((var_8 < (min(var_7, (~8653)))));
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        for (int i_9 = 3; i_9 < 11;i_9 += 1)
        {
            {
                arr_28 [i_9] [i_9] = (arr_20 [i_8] [i_9 + 1]);
                var_26 = (min(((var_6 - ((var_3 ? (arr_13 [7] [7] [i_8] [2] [7] [i_9 - 2]) : var_2)))), ((((min((arr_24 [i_8]), -8142))) ? (arr_25 [i_9 - 3]) : ((max(var_4, (arr_7 [16] [i_8] [i_8] [i_9]))))))));
            }
        }
    }
    var_27 = (~var_8);
    var_28 = ((!((((var_0 * 8129) ? ((max(var_0, var_9))) : ((max(-30638, -16313))))))));
    #pragma endscop
}
