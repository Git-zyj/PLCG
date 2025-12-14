/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 = var_11;
                    arr_10 [i_0] [i_0] [i_0] [i_0] = 5398419071864271184;
                    var_15 = (arr_9 [3] [8] [i_2]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {
                var_16 = (min(var_16, var_1));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 8;i_6 += 1)
                    {
                        {
                            var_17 = (arr_13 [i_3]);
                            var_18 = arr_9 [i_4] [8] [i_6];
                        }
                    }
                }
            }
        }
    }
    var_19 = var_12;
    #pragma endscop
}
