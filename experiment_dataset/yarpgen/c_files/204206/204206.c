/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] = 127;
                arr_9 [i_0] = (((!3580445557) >= (arr_5 [i_0])));
                var_11 *= ((~(((15597 && 1) | var_3))));
                arr_10 [i_0] = (arr_0 [i_0]);
            }
        }
    }
    var_12 = (9212991545547536610 + 127);
    var_13 = var_0;
    var_14 ^= ((var_3 >= (min(-var_8, (-284972234 > 27)))));
    var_15 = 6691;
    #pragma endscop
}
