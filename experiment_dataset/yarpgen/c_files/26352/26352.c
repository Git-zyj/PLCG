/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= 913644187;
    var_13 = 252;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = (min(var_14, 4294967295));
                var_15 = (min(var_15, 10479));
                var_16 = (min(var_16, 55058));
                var_17 -= 123;
            }
        }
    }
    #pragma endscop
}
