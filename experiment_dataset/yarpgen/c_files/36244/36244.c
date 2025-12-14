/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_2 / ((max((max(49152, var_5)), var_6)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    arr_10 [i_0] [0] [0] &= (arr_8 [3] [3]);

                    for (int i_3 = 2; i_3 < 13;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            arr_16 [i_0] [2] [i_2] [i_2] [i_0] = var_5;
                            var_11 &= (((((((((((arr_5 [i_2] [i_4]) + 2147483647)) >> (15730011937146884141 - 15730011937146884139)))) ? 141 : (arr_2 [i_3])))) ? (((arr_8 [i_1] [i_4 + 1]) ? (arr_8 [i_3] [i_4 + 1]) : 39945)) : (!165)));
                        }
                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 13;i_5 += 1)
                        {
                            var_12 = -12;
                            var_13 = (arr_4 [i_2]);
                            arr_21 [i_0] [i_3 - 2] [i_3 - 2] = ((65535 / ((var_9 ? (arr_12 [i_5] [i_3] [8] [7]) : 65535))));
                            var_14 = 16383;
                            arr_22 [i_1] [i_0] [1] [i_5] = var_3;
                        }
                        arr_23 [11] [i_1] [i_1] [i_0] [i_1 - 3] = (arr_5 [6] [6]);
                        var_15 -= (min((((2918668533 ? (-1953 | 0) : 55))), 0));
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 13;i_6 += 1) /* same iter space */
                    {
                        var_16 = 32759;
                        var_17 = (max(var_17, ((((arr_12 [i_6 + 1] [i_6 - 1] [i_6 - 2] [i_2]) ? (arr_13 [i_1 + 3] [i_1 + 4] [i_6] [i_1] [i_1]) : (arr_13 [i_1 + 2] [i_1 + 1] [i_6] [i_1] [i_1]))))));
                        var_18 = (min(var_18, var_7));
                    }
                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 13;i_7 += 1) /* same iter space */
                    {
                        var_19 = 55;
                        arr_28 [i_0] [i_1] [i_0] [i_7] = (arr_18 [i_0] [i_0] [11] [7] [13] [7]);
                    }
                    /* vectorizable */
                    for (int i_8 = 2; i_8 < 13;i_8 += 1) /* same iter space */
                    {
                        var_20 = (min(var_20, (((-(((arr_1 [i_1]) ? 57237 : (arr_18 [i_0] [4] [9] [i_0 - 1] [i_0 - 1] [5]))))))));
                        var_21 = ((-((1 ? 256 : 113))));
                    }
                }
            }
        }
    }
    var_22 = (((!var_3) / var_8));
    #pragma endscop
}
