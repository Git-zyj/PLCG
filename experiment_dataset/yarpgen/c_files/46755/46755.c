/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = var_7;
                var_20 = var_16;
            }
        }
    }
    var_21 *= ((max(var_15, var_10)));
    #pragma endscop
}
