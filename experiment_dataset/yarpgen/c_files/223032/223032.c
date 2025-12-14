/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_17 -= var_4;
                arr_5 [i_0] [i_0] [0] &= 1;
            }
        }
    }
    var_18 = var_15;
    var_19 = -28153;
    #pragma endscop
}
