/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = (max(var_20, -5848128013337415960));
                var_21 = (max(12039, (!0)));
                var_22 = (max(var_22, -var_8));
            }
        }
    }
    #pragma endscop
}
