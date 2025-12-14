/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] = (max(218, (arr_3 [i_0] [18] [i_0 + 1])));
                arr_5 [1] = arr_3 [i_0] [i_0 - 2] [i_0];
                var_20 = (((!-8) ? var_18 : (max((arr_3 [i_0 + 2] [i_0 - 1] [i_0 + 3]), 0))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                arr_12 [i_2] [i_2] [i_3] = max(218, 236);
                arr_13 [i_2] = 575103490;
            }
        }
    }
    #pragma endscop
}
