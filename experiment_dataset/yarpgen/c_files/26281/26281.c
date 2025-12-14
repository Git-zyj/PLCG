/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_11 [i_1] [i_1] = ((!(((-(arr_1 [i_2] [6]))))));
                    arr_12 [i_1] [14] [i_1] [i_1] = (arr_4 [i_1 - 1] [i_0]);
                }
            }
        }
    }
    var_12 ^= (((((~var_9) && (var_6 - 8892502093893224567))) ? ((-15 ? -7035469891574865652 : -27001)) : var_9));
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 18;i_4 += 1)
        {
            {
                var_13 ^= (!127);
                var_14 = ((!(((~(((!(arr_2 [i_3])))))))));
            }
        }
    }
    #pragma endscop
}
