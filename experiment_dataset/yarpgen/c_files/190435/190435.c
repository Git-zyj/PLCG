/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                    {
                        arr_8 [i_0] [i_1] [i_2] [9] [1] [i_1] = (((arr_7 [i_0] [15] [i_2] [i_1]) ? (arr_1 [i_1] [12]) : (arr_7 [i_0] [i_1] [i_1] [i_1])));
                        var_14 = (~var_3);
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                    {
                        var_15 = -246964370;
                        var_16 = (arr_3 [i_0] [i_0]);
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_17 += (arr_3 [9] [9]);
                            var_18 = 246964368;
                        }
                        var_19 = (max(var_19, ((var_8 ? (((((arr_2 [12] [14]) + 2147483647)) << (((var_3 + 2528017857380387430) - 26)))) : (((arr_2 [i_1] [i_1]) ? var_4 : (arr_2 [5] [8])))))));

                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_20 -= (((((var_5 ? (arr_7 [i_0] [1] [i_0] [i_5]) : (arr_7 [1] [2] [0] [i_2])))) ? (arr_7 [i_0] [i_0] [1] [i_5]) : (((arr_7 [i_0] [i_1] [i_5] [i_5]) ? (arr_7 [i_0] [i_0] [10] [i_0]) : var_13))));
                            arr_17 [i_1] [4] = (((arr_3 [i_5] [i_7]) + ((var_4 ? (min((arr_0 [i_0]), (arr_4 [i_0] [i_0] [i_2]))) : (((var_8 ? var_10 : var_6)))))));
                            var_21 = (max(var_21, var_4));
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            var_22 = (arr_19 [i_0] [i_1] [23] [i_1] [i_8]);
                            var_23 = var_11;
                        }
                    }
                    var_24 = (((arr_7 [i_0] [i_0] [21] [i_1]) + 246964368));
                    var_25 += (arr_12 [18] [i_2] [1] [i_0]);
                }
            }
        }
    }
    var_26 = var_9;
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            {
                var_27 = (arr_6 [i_9]);
                var_28 += ((246964368 ? 205 : 0));
                var_29 = -12179299;
            }
        }
    }
    #pragma endscop
}
