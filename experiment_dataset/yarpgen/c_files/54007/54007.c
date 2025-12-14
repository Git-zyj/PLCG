/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    var_10 = var_0;
                    var_11 = (min(((((var_2 ? 1 : 18071)) * (251 > var_9))), ((35855 ? var_6 : ((46107 << (((-20672 + 20698) - 24))))))));
                }
            }
        }
    }
    var_12 = var_9;
    #pragma endscop
}
