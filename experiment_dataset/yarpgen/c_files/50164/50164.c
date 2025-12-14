/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((!(-9400 & 1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_21 = ((var_7 >= (arr_1 [1])));
                var_22 = var_8;
                var_23 = ((max((-2147483647 - 1), 94771116)) != 65535);
            }
        }
    }
    #pragma endscop
}
