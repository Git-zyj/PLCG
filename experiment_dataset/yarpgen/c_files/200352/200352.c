/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = 1639847425;
                var_13 = var_11;
                var_14 &= 4294967295;
            }
        }
    }
    var_15 = ((var_5 >> (((((var_11 ? -8250 : 4294967295))) - 4294967265))));
    #pragma endscop
}
