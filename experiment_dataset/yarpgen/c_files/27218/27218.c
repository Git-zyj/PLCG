/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(((0 ? 0 : (min((-2147483647 - 1), var_1)))), (0 & 0)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 + 3] [i_0] = (arr_1 [i_0]);
                    arr_9 [i_0] = (((((0 ? var_6 : 0)) >= 1)) ? 248 : ((max(-1, 0))));
                    arr_10 [i_2] [i_1] [i_0] = ((4746 ? 13771973914510087352 : -116589568));
                }
            }
        }
    }
    var_13 += var_8;
    #pragma endscop
}
