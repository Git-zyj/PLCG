/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;
    var_16 = var_11;
    var_17 = (max(var_17, var_8));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 = (~3497972381706161464);
                    var_19 = var_14;
                }
            }
        }
    }
    var_20 &= 6243417410100907853;
    #pragma endscop
}
