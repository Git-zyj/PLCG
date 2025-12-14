/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_10 = 15585801108021075990;
                var_11 = (max(var_11, 0));
            }
        }
    }
    var_12 = (min(var_4, (--1)));
    #pragma endscop
}
