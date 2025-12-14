/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [0] = (((((((var_10 ? 28672 : var_0)) - 65))) ? (arr_11 [i_0] [i_1] [i_0] [3] [i_3] [i_4]) : 201));
                                var_12 = (max(var_12, ((((((31498 ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? ((((!(arr_15 [i_0] [i_1] [i_2] [i_3] [i_4]))))) : (max(((((arr_9 [10] [10] [i_2] [i_2]) ? (arr_7 [i_0] [i_1] [2]) : var_7))), 13668392989884180448)))))));
                            }
                        }
                    }
                    var_13 &= ((!((((((-1495820526 ? 1 : (arr_5 [i_1])))) ? var_11 : ((((arr_13 [i_0]) ? -750824883 : var_9))))))));
                }
            }
        }
        var_14 += (((((208 ? var_10 : var_0))) ? 4778351083825371150 : ((((arr_10 [i_0] [i_0] [i_0] [1]) ? 146 : var_4)))));
    }
    var_15 = (((127 + var_4) < (((~34) ? (min(var_11, var_4)) : (((var_9 ? var_7 : var_7)))))));
    var_16 = var_3;
    #pragma endscop
}
