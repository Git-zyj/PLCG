/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = (min(var_12, 1608391541));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_13 ^= (arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                            var_14 -= ((~(arr_9 [i_2] [i_2] [i_2] [i_1] [i_0 - 1])));
                            var_15 += (arr_12 [i_0 - 1] [i_1] [i_2] [i_3]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            {
                var_16 |= ((((min(var_0, (arr_6 [i_4] [i_5] [i_5] [i_4])))) ? (min((arr_1 [i_4]), -22)) : (max((arr_6 [i_5] [i_5] [i_4] [i_4]), (arr_5 [i_4])))));
                var_17 -= (((179 || 0) ? var_2 : (min((~-7617071764270204747), (max(127, var_0))))));
            }
        }
    }
    #pragma endscop
}
