/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_17 += (arr_3 [i_0] [i_1]);
                var_18 = (max(var_18, ((((((arr_0 [i_1]) ? (arr_3 [i_0 + 4] [i_0 + 2]) : (min((-2147483647 - 1), var_12))))) ? (min((arr_2 [i_0]), (max(var_9, var_7)))) : (arr_2 [i_0 + 1])))));
                var_19 |= ((var_1 && (((3964682531 ? -5 : (!-1))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_20 = (((((var_8 ? var_12 : var_10))) ? (2861525055957503963 - 16775168) : (arr_5 [i_0] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_21, (((var_8 ? (arr_2 [i_0 + 4]) : var_2)))));
                                arr_14 [i_0] [i_0 + 2] [i_1] [i_0] [i_2] [i_3] [8] = (arr_9 [i_0] [i_1] [i_2] [i_0 - 1]);
                                var_22 = 6;
                            }
                        }
                    }
                    var_23 += (arr_4 [i_0] [i_1]);
                }
                for (int i_5 = 3; i_5 < 9;i_5 += 1)
                {
                    var_24 = ((18446744073709551615 ? 450260932 : -32759));
                    var_25 += (~16);
                }
                /* vectorizable */
                for (int i_6 = 1; i_6 < 8;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_26 += (!15);
                        arr_24 [i_0] [i_1] = 197;
                        var_27 = (((arr_5 [0] [i_1]) ? -111 : -73));
                        arr_25 [i_0] [i_0] [i_0] [i_0] = ((2524698244 ? (arr_1 [i_0 - 2] [i_0 + 2]) : 88));
                    }

                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_28 = (((arr_9 [1] [1] [1] [1]) - ((324430350 ? var_5 : var_13))));
                        var_29 = (min(var_29, (((81 ? var_0 : (~-8))))));
                        var_30 = ((1 ? (arr_11 [i_0 + 3]) : var_11));
                    }
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        var_31 = -1;
                        var_32 = var_11;
                        var_33 += var_4;

                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            arr_32 [8] [i_10] [i_9] [i_6] [i_0] [i_0] [i_0] = (-134217728 ? 3844706381 : (~var_11));
                            var_34 = (max(var_34, (arr_6 [i_0 - 2] [i_6 + 1] [i_6 + 1] [i_0 - 2])));
                            var_35 = ((!(((450260905 ? 2147483647 : (arr_7 [i_0] [i_1] [i_6 + 1] [i_9]))))));
                            var_36 = (((arr_30 [i_0 + 4] [i_1] [i_6] [i_9] [i_6 + 1]) ? 247 : var_4));
                        }
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            var_37 ^= (((arr_29 [i_0 + 2]) ? -1144152617 : (arr_16 [i_11] [2])));
                            var_38 = ((arr_4 [i_0] [i_0 + 3]) ? 44 : var_14);
                            var_39 = var_1;
                        }
                        for (int i_12 = 1; i_12 < 8;i_12 += 1)
                        {
                            var_40 ^= (-(arr_12 [i_0 + 1] [i_12 + 2] [9] [i_12] [i_12] [i_0 + 1]));
                            var_41 = (min(var_41, (((!(238 / 65527))))));
                        }
                    }
                }
            }
        }
    }
    var_42 = var_10;
    #pragma endscop
}
