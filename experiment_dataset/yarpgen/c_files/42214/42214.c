/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [3] = var_10;
        arr_4 [i_0 - 1] = (((!var_9) & (arr_0 [i_0 - 1] [i_0])));
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_17 = (min((arr_2 [i_1 - 3] [i_1 + 4]), 4294967272));
        var_18 = (arr_0 [i_1 + 3] [i_1 + 3]);
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_19 [i_1] [i_2] [i_2] [i_4] [i_2] [i_5] = var_6;
                                arr_20 [i_4] [i_4] [i_3] [18] [i_5] [i_2] [i_4] = (min((min(120, 4294967272)), (min(0, 27))));
                                var_19 = (min(((~((1 ? (arr_11 [i_1 + 3] [i_2 + 1] [8]) : var_11)))), var_6));
                                var_20 += (min(var_15, (arr_7 [i_1 - 3])));
                            }
                        }
                    }
                    var_21 -= ((20003 | ((140 ? (((243982263 ? 45515 : 20002))) : -2022640541))));
                }
            }
        }
    }
    var_22 = ((~(max((var_10 ^ var_1), (var_3 + var_6)))));
    var_23 = var_2;
    #pragma endscop
}
