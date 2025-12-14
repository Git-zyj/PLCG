/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] = (2340305420 && 333111370748791457);
                            arr_13 [i_3] [17] [i_2] [i_1] [i_0] = (min((arr_11 [i_2] [i_2] [i_2 + 1] [2]), 22));
                            var_10 = -333111370748791454;
                            arr_14 [i_0] [i_1] [10] [i_3] = (min(1, 32512));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_11 = var_0;
                            var_12 |= ((+(((arr_16 [i_0] [i_1] [i_4] [0]) | var_0))));
                            arr_20 [i_5] [i_5] [12] [i_5] [i_0] = ((var_4 ? (max(var_6, (arr_3 [i_0]))) : (62 - 333111370748791457)));
                            var_13 *= ((~(arr_8 [i_4] [i_5])));
                        }
                    }
                }
            }
        }
    }
    var_14 = ((+(((333111370748791428 - var_9) ? -770946858753157363 : (((var_6 ? var_3 : var_0)))))));
    #pragma endscop
}
