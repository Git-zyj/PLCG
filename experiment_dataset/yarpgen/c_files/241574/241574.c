/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = (arr_2 [i_0]);

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_12 = ((((min(((((arr_2 [i_0]) ? 1 : var_0))), (~3530933359587542103)))) ? ((var_6 ? (arr_8 [i_2 - 1] [i_2 - 1]) : (arr_0 [i_2 - 1] [i_2 - 1]))) : ((var_9 ? var_4 : (arr_5 [i_0] [i_1] [i_2 - 1])))));
                        var_13 += ((!(((~(((var_8 && (arr_0 [i_0] [i_0])))))))));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_1] [i_2] [i_1] [i_4] = ((max((arr_1 [i_2 - 1]), (arr_9 [i_0] [1] [i_2 - 1]))));
                        arr_14 [i_4] [i_2] [i_2] [6] [1] = (max((arr_7 [i_2 - 1] [3]), ((3530933359587542100 ? 1 : 14915810714122009545))));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            arr_18 [i_0] [i_1] [i_5] [i_2] [i_1] [i_0] = (arr_10 [15] [i_1] [15] [i_5] [i_2 - 1]);
                            var_14 = (((arr_8 [i_0] [i_1]) & (arr_3 [i_5] [4])));
                        }
                    }
                }
            }
        }
        var_15 = min(var_4, ((var_9 ? var_2 : (arr_6 [i_0]))));
        var_16 = (max(var_4, (arr_8 [i_0] [i_0])));
        var_17 ^= ((((((var_7 && (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))))) && 131040);
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        arr_23 [i_6] [i_6] = (~var_4);
        var_18 ^= ((-(arr_19 [1] [1])));
    }
    var_19 = var_9;
    var_20 = 3530933359587542103;
    var_21 = (max((max(var_4, var_2)), var_4));
    var_22 -= -946447141;
    #pragma endscop
}
