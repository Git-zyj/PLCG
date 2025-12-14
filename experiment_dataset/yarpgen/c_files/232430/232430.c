/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_10 |= (var_7 & ((+(((arr_13 [i_0] [i_0] [i_2] [i_3] [i_0]) ? (arr_12 [i_0] [i_0] [7] [7] [i_1] [i_4]) : var_0)))));
                                var_11 = ((((!var_5) ? (~var_5) : (((!(arr_10 [i_0] [i_1] [i_0])))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            var_12 = (min(var_12, ((min((arr_12 [i_6] [i_5] [i_1] [i_1] [i_1] [i_0]), 217)))));
                            arr_22 [i_0] [i_1] [i_5] [i_5] [i_6] = (~var_3);
                            arr_23 [i_0] [i_2] [2] [i_6] |= ((((-(max(var_4, (arr_7 [i_1] [i_1] [i_6])))))) ? ((max(120, var_0))) : ((217 + (min(-124, var_6)))));
                        }
                        var_13 = (max(var_13, ((((arr_4 [i_0] [i_0]) ? (max((((arr_4 [i_0] [i_1]) ? (arr_18 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0]) : var_3)), -var_4)) : (max(var_3, var_6)))))));
                        var_14 = (max(var_14, (arr_15 [i_0] [i_1] [i_2])));
                    }
                    var_15 = ((((((arr_9 [i_0] [i_1] [i_2] [i_2]) ? ((((arr_11 [i_0]) ? var_3 : (arr_9 [i_2] [i_1] [i_0] [10])))) : (arr_1 [i_0] [i_0])))) ? 29556 : (~-105)));
                    var_16 = var_9;
                }
            }
        }
    }

    for (int i_7 = 3; i_7 < 7;i_7 += 1)
    {
        arr_26 [i_7] [i_7] = 26;
        arr_27 [i_7] = (arr_15 [i_7 + 2] [i_7] [i_7]);
    }
    var_17 = (~-52);
    #pragma endscop
}
