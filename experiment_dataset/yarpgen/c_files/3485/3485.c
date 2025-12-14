/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= 34359738367;
    var_19 = 34359738385;
    var_20 += 34359738367;
    var_21 = 2225263682;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_22 = 2225263690;
                var_23 = 3286542337269861930;
                var_24 += 11442528493140207768;
            }
        }
    }
    #pragma endscop
}
