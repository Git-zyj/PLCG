/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_14 = ((((((0 ? 0 : (arr_3 [i_0 + 2] [i_0 + 2] [i_2])))) ? (arr_1 [i_0 - 2]) : var_6)));
                    arr_6 [i_2] [i_1] [5] [i_0] = var_6;
                    arr_7 [i_0] [i_1] [1] [7] = ((-(((((min(var_12, (arr_4 [i_1] [1])))) && var_0)))));
                    var_15 = ((~32768) && (arr_5 [i_0 + 2] [4] [i_0 - 2]));
                    var_16 = ((((((var_7 || (arr_1 [19]))))) && (arr_0 [i_0 - 3])));
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    var_17 = (min(((((~255) || (arr_1 [i_0 + 1])))), (((var_8 ? 127 : 93)))));
                    var_18 -= var_13;
                }
                /* vectorizable */
                for (int i_4 = 3; i_4 < 21;i_4 += 1)
                {
                    arr_12 [8] [i_1] [i_4] [i_0] = (arr_0 [i_0 + 2]);
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_19 = (arr_4 [i_5] [i_6]);
                                var_20 = ((((var_7 || (arr_11 [i_0] [22] [i_5 - 2] [i_5 - 2]))) || (arr_9 [i_6] [i_1] [6])));
                            }
                        }
                    }
                    arr_19 [i_0] [17] [i_1] [i_4] = (arr_10 [i_0 - 1] [i_0 + 2] [i_0 + 2]);
                }
                var_21 = (arr_5 [2] [i_1] [i_1]);
                var_22 = (var_1 && 111);
                arr_20 [i_0] = (!((((var_4 || 0) ? var_6 : var_12))));
            }
        }
    }
    var_23 = var_3;
    var_24 = var_12;
    #pragma endscop
}
