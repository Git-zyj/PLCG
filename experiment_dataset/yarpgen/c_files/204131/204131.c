/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 3910176270140895377;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_0] [i_0] [i_3] = -958681641;
                            var_12 = 958681630;
                            arr_13 [i_0] [i_1] [i_2] [i_1] = 2085037630;
                            var_13 -= (arr_1 [i_3]);
                            arr_14 [i_0 - 2] [i_0 - 1] [i_0] [i_0] = var_0;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 24;i_6 += 1)
                            {
                                var_14 = (((arr_10 [i_0] [i_0] [i_0]) ? ((var_10 ? var_7 : (arr_18 [i_6] [i_5] [i_0] [i_0]))) : -958681630));
                                var_15 = (((arr_1 [i_0]) ^ (arr_0 [i_1 - 1])));
                                var_16 = ((~(arr_0 [i_4])));
                            }
                            var_17 = (((arr_24 [i_0 - 1] [i_0 - 1] [i_4 + 1] [i_5] [i_0 - 1] [i_4]) ? (((7022689886049045076 ^ ((((arr_18 [i_0] [i_0] [i_0] [i_0]) ^ (arr_22 [i_0] [i_1] [i_0] [i_1] [i_1]))))))) : var_7));
                            arr_25 [i_0] [i_1] = (max(((var_0 << (3910176270140895377 - 3910176270140895376))), (arr_24 [i_0] [i_0 + 1] [i_1 - 1] [i_4] [i_4] [i_0 + 1])));
                        }
                    }
                }
                var_18 = (((((((arr_8 [i_1] [i_1]) - (arr_10 [i_0] [i_0] [i_1])))) ? 0 : (max((arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_18 [i_0] [i_1 - 1] [i_1 + 1] [i_0]))))));
                var_19 += ((~(((((~(arr_24 [i_1 + 1] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (min((arr_3 [i_1]), -2085037639)) : var_7))));
            }
        }
    }
    #pragma endscop
}
