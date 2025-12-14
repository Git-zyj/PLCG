/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((((--41) >= var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_21 = -1952533853;
                var_22 = (max(var_22, 65535));
            }
        }
    }
    #pragma endscop
}
