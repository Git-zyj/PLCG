/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_15 = (max((~var_12), ((((arr_9 [i_0 - 2] [i_0 + 1] [i_0 - 2]) > (arr_9 [i_0 + 2] [i_0 + 1] [i_0 + 1]))))));
                            var_16 = (arr_0 [i_2] [i_1]);
                        }
                    }
                }
                var_17 = 2743128431647396871;
                var_18 = arr_4 [13];
                arr_11 [i_1] [i_0] = ((!(((-(arr_0 [i_0 - 1] [i_0 - 2]))))));
            }
        }
    }
    var_19 = var_8;
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 23;i_6 += 1)
            {
                {
                    arr_20 [i_6] [i_4] = (((arr_17 [i_6] [i_6 - 1] [i_6 + 1] [i_6 + 1]) ? var_12 : (((!(arr_16 [i_6 - 1] [i_6 + 1]))))));
                    var_20 = (min((((!(arr_17 [i_4] [i_4] [i_5] [i_6 - 4])))), (arr_18 [i_4] [i_5])));
                    var_21 -= (max((!64710), ((((arr_18 [i_5] [i_4]) ? var_13 : var_4)))));
                    var_22 ^= var_4;
                }
            }
        }
    }
    #pragma endscop
}
