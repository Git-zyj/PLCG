/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -923895213;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (arr_7 [i_2] [i_1] [i_0] [i_0]);
                    arr_10 [i_0] [i_0] [9] = (((arr_7 [i_1] [i_1] [i_1] [i_1 + 2]) ? ((((276135354 <= (arr_7 [i_1] [i_1] [i_1 + 3] [i_1 + 1]))))) : 4294967295));
                }
            }
        }
    }
    #pragma endscop
}
