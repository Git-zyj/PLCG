/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = ((7311 ? 696321258 : 1));
                var_10 ^= ((((max((1 != var_9), var_6))) ? -16066006025966750442 : ((((min(2497828568246614494, 1)) != (arr_0 [i_1 + 2] [i_0]))))));
            }
        }
    }
    var_11 = ((((~9223372036854775807) ? (~9223372036854775792) : var_3)));
    #pragma endscop
}
