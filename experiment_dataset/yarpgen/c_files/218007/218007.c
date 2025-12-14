/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((~23295) % var_1))) ? var_6 : var_14));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = 24;
                    arr_9 [i_2] |= var_8;
                }
            }
        }
    }
    var_18 = var_7;
    #pragma endscop
}
