/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = (min(var_16, 31));
                var_17 = ((~(((~var_0) << (((var_9 ^ var_0) + 47))))));
            }
        }
    }
    var_18 = (((((1 ? (min(65880009, 1493691081273920592)) : 1))) ? ((-26780 ? -92 : 16383)) : (((((1023 ? 1 : var_7))) ? (max(var_6, var_11)) : (min(-779400952, var_11))))));
    var_19 = ((!(!48212)));
    #pragma endscop
}
