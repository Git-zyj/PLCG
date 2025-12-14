/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 29458;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = ((29434 ? 1 : 1));
                arr_5 [i_1] = (((max((((var_10 + 9223372036854775807) << (((-45 + 49) - 3)))), var_8)) ^ (-127 - 1)));
            }
        }
    }
    #pragma endscop
}
