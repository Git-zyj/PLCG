/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_15 = -10159;
                            arr_9 [i_0 - 1] [i_1] [i_1] [i_3] = (((((min((arr_5 [i_1 + 1] [i_1 + 1] [i_1]), (arr_6 [i_0] [i_0] [i_3]))))) / -var_0));
                            arr_10 [i_1] [i_1] [i_1 - 1] [i_1 + 2] = (((arr_3 [i_1]) && ((((((-(arr_5 [i_1] [i_2] [i_1])))) * (arr_2 [i_1] [i_1 + 2]))))));

                            for (int i_4 = 0; i_4 < 12;i_4 += 1)
                            {
                                arr_14 [i_1] [i_3] [i_3] [i_2] [i_1] [i_1] = 647810424;
                                var_16 = (max(var_16, 24557));
                                arr_15 [i_1] [i_0 + 4] [6] [i_1] = ((!((((arr_12 [i_1] [i_0 + 2] [i_1 - 1]) ? var_3 : var_10)))));
                            }
                        }
                    }
                }
                arr_16 [i_1] = ((5482 ? 5482 : 13772));
            }
        }
    }
    var_17 += var_0;
    #pragma endscop
}
