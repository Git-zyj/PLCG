/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    var_18 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = var_2;
                var_20 *= ((~(var_9 | var_1)));
                arr_5 [i_0] [i_0] = (((~(!21))));
            }
        }
    }
    #pragma endscop
}
