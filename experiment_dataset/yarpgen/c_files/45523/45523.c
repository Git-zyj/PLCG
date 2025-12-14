/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_15 = (!7248051560669081006);
                        arr_9 [i_0] [i_1 + 1] [i_2 - 2] = ((((!((((arr_4 [22] [i_2] [i_2]) ? -18383 : (arr_7 [i_1] [i_2 - 1])))))) || (arr_5 [i_0] [i_0] [i_0])));
                        var_16 = (arr_1 [i_0]);
                    }
                    var_17 = ((max((arr_7 [i_1 + 1] [3]), (arr_2 [i_0]))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 22;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                arr_22 [i_7] [i_0] [i_0] [i_4] [i_4] [i_0] [i_0] = (arr_3 [i_4] [i_6] [i_0]);
                                var_18 = ((!(arr_3 [i_0] [i_4] [i_0])));
                                arr_23 [16] [i_4] [i_5 + 1] [i_0] [i_7] [i_7] = var_14;
                                arr_24 [i_0] [10] [11] [i_0] [i_0] = var_2;
                            }
                        }
                    }
                    arr_25 [i_0] [i_0] [i_5 + 2] = ((!((((arr_11 [i_4] [i_0]) ? 7938142672897914513 : ((max(var_12, var_14))))))));
                    arr_26 [i_0] [i_0] [i_5 + 1] [i_0] = ((!(((~(arr_3 [i_5 + 1] [i_5 + 1] [i_0]))))));
                    arr_27 [i_0] [i_0] = ((((max((((arr_11 [i_0] [i_0]) | (arr_1 [i_0]))), (arr_20 [i_5 + 1] [i_5] [i_5 + 2] [i_5 - 1] [i_5 - 2] [i_5 - 1] [i_5 - 1])))) ? (max((max(7248051560669081006, 10957)), var_3)) : var_7));
                }
            }
        }
    }
    var_19 = var_9;
    #pragma endscop
}
