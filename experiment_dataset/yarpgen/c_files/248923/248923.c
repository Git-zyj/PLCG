/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_14;
        var_20 &= (arr_1 [i_0 - 2] [i_0]);
        arr_3 [i_0] = ((+((0 ? (arr_1 [i_0] [7]) : (arr_1 [i_0] [i_0])))));
        var_21 = (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0 + 2] [i_0]) : 34527));
    }
    var_22 = (max(var_22, ((min((max(((min(var_4, 1))), ((3636583792 ? 65520 : 1)))), (-var_3 != var_5))))));

    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_23 |= ((!(var_8 % -1487944158)));
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_24 = (~var_15);
                                var_25 = -6733289967492581992;
                            }
                        }
                    }
                    arr_15 [i_1] [i_2] [i_3] = 658383504;
                }
            }
        }
        arr_16 [i_1] [i_1] = 19886;
        var_26 -= ((44 ? 53259 : -7267934877298147576));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        arr_20 [i_6] = (((arr_14 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) ? (arr_14 [3] [i_6] [3] [i_6] [i_6] [i_6]) : (arr_14 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])));
        arr_21 [11] &= 1487944146;
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                {
                    arr_27 [10] = (!-4);
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            {
                                arr_35 [i_9] [i_10] = (3556421954 | 3636583791);
                                arr_36 [i_10] [6] [i_8] [i_8] [i_8] [i_6] [i_6] = (!var_13);
                                arr_37 [i_6] [i_7] [i_8] [i_9] [i_10] = ((27424 + (4 + 121)));
                            }
                        }
                    }
                }
            }
        }
        arr_38 [10] |= -1487944146;
        arr_39 [i_6] = (arr_14 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]);
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
    {
        var_27 = (!1);
        var_28 = (max(var_28, 249));
        var_29 = ((-(+-13)));
        var_30 = (!var_11);
        var_31 = ((arr_25 [i_11] [i_11] [i_11] [i_11]) - (1 < 34611));
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
    {
        var_32 = 24;
        var_33 = ((+(max((arr_28 [i_12] [i_12]), 1))));
    }
    var_34 ^= var_11;
    #pragma endscop
}
