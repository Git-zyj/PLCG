/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, (((-(((arr_1 [i_0]) ? (arr_1 [i_2]) : 13880)))))));
                    var_14 = (max((((arr_0 [i_2]) ? (max(var_12, (arr_0 [i_0]))) : var_11)), 1));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                    {
                        arr_8 [i_2] [i_2] [i_1] [i_2] = var_9;
                        arr_9 [i_0] [i_2] [i_0] [18] [12] [i_3] = ((((max(0, (max(var_11, 6158513666351086385))))) ? 215 : var_10));
                        var_15 = ((((((var_5 ? var_11 : var_0)) + 0)) >= var_1));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                    {
                        var_16 = 225;
                        arr_14 [i_0] [6] [3] [i_2] [3] [i_4] = var_10;
                        var_17 = (max(var_17, (((((((arr_13 [3] [9] [14] [i_0]) ? (arr_7 [i_0] [18] [i_1] [i_2] [i_0]) : var_4))) ? var_0 : ((((arr_12 [i_0] [1] [i_1]) ? 1 : var_10))))))));
                        var_18 = (((var_0 * (arr_0 [i_0]))));
                        arr_15 [10] [19] [i_2] [i_2] = var_0;
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_0] [i_0] [1] [i_2] [i_0] = (((max((max(var_10, var_4)), var_3))) & (max(((1 >> (var_8 - 11104399949179328981))), (var_10 <= 113))));
                                arr_22 [i_0] [11] [11] [17] [17] [i_2] [13] = ((1 ? (((~((var_4 ? 3167542355 : var_7))))) : var_0));
                            }
                        }
                    }
                }
            }
        }
        var_19 = ((~((max(3433, 8472)))));
    }
    var_20 = (((((!((max(var_11, var_9)))))) & ((max(var_7, var_11)))));
    #pragma endscop
}
