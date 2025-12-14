/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_1] = max((min((min(var_9, (arr_3 [i_0]))), (arr_0 [0] [i_0]))), (((arr_2 [5] [i_1 - 2]) & (arr_2 [i_1] [i_1 - 3]))));
                arr_8 [i_0] = ((~(arr_6 [i_0 + 3] [i_1 + 1])));
            }
        }
    }
    var_13 += ((~(((min(1, 4147386547281684005))))));
    var_14 = (((var_7 < var_6) <= (2758665264 | 3162100401)));
    var_15 -= (((var_4 / 3412476228) | var_3));
    var_16 *= (!var_12);
    #pragma endscop
}
