/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 ^= (!538242997);
                arr_4 [i_0] = (!(((-(arr_1 [i_1])))));
                var_13 = 2126611650;
            }
        }
    }
    var_14 = 9223372036854775807;
    var_15 = var_7;
    #pragma endscop
}
