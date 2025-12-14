/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 |= ((14905 && (((var_4 ? -14902 : var_9)))));
                    var_15 *= ((max(14905, (var_10 << var_2))));
                }
            }
        }
    }
    var_16 *= var_6;
    #pragma endscop
}
