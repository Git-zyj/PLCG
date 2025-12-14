/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, (arr_3 [i_0] [i_0] [i_0 - 1])));
                                var_18 = (arr_8 [i_0] [i_1] [i_2]);
                            }
                        }
                    }
                    var_19 = (min(var_19, -51767));
                }
            }
        }
    }
    var_20 = ((3769523472 ? var_6 : var_9));
    var_21 = (min(13747, (max((~var_14), 13751))));
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_22 = 27062;
                    arr_20 [i_5 - 1] [i_6] [i_6] [i_7] = (min(((((((arr_9 [i_5 + 4] [9] [i_6] [4] [4] [i_7]) <= (arr_2 [i_7])))) << (((arr_1 [i_5 - 2]) - 15637268684718854009)))), 51785));
                }
            }
        }
    }
    var_23 = var_15;
    #pragma endscop
}
