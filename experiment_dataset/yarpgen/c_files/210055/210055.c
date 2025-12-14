/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((178 ? 12022701036139105171 : 651281643));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = 147;
                var_16 = ((+(((var_12 & 1) * 1))));
            }
        }
    }
    #pragma endscop
}
