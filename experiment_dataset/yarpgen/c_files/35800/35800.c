/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_17 = 61;
                    var_18 = (3893719272 - 134);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_3] [i_4] [i_0] [i_6] = (((((arr_15 [i_0] [i_3] [i_4] [i_5 - 2]) | var_9)) / (-6353 - -112)));
                                var_19 = (arr_8 [i_0] [i_0]);
                            }
                        }
                    }
                    arr_21 [i_3] [i_3] = (~7912761375533705082);
                    arr_22 [4] [i_3] [i_3] [i_4] = (!-27504);
                }
            }
        }

        for (int i_7 = 4; i_7 < 14;i_7 += 1)
        {
            var_20 += (arr_9 [i_0] [i_0]);
            arr_25 [i_0] = (!541959803);
        }
    }
    var_21 = var_3;
    #pragma endscop
}
