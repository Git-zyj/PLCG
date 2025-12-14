/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [3] = ((+((+(((arr_3 [i_0] [i_0] [i_0]) ? var_2 : 1))))));

                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] |= ((32753 ? 7 : -9005));
                    arr_9 [i_0] [i_1] [i_2] [i_2 + 1] = 3207044049489825057;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    arr_14 [i_0] [i_1] = (arr_13 [i_3] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 8;i_5 += 1)
                        {
                            {
                                var_13 = (((arr_2 [i_3] [i_4]) - var_4));
                                arr_19 [i_3] [i_0] [6] [i_4] [4] &= (arr_10 [i_0] [i_1] [i_0] [8]);
                                var_14 = var_0;
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (min(4, 1307896766));
    #pragma endscop
}
