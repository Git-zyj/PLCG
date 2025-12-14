/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = ((~(!9455814094002899297)));
                arr_6 [i_0] [i_1] = -268435455;
            }
        }
    }
    var_15 = var_6;
    var_16 = 18446744073441116151;
    #pragma endscop
}
