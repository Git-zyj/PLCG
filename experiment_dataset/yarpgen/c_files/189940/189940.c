/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 = var_19;
                    var_22 = 1886015900;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1 - 1] [i_2] [i_3] [i_2] [10] [i_4] = ((16799183278906760376 % (arr_8 [i_1 - 2] [i_1] [i_1] [i_1 + 1])));
                                var_23 = ((((min(3333926230, var_6))) ? var_8 : (min(3333926238, (((-3224 ? var_19 : 1886015909)))))));
                                arr_14 [i_0] [19] [i_2] [i_0] [19] = (min(-1886015901, (arr_5 [i_0] [i_1 + 1])));
                            }
                        }
                    }
                    arr_15 [i_2] [i_1 + 1] [i_0] = (arr_8 [i_0] [i_1 - 1] [i_2] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
