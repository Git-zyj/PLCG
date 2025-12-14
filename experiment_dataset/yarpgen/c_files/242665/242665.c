/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_17 &= var_5;
                    var_18 = -var_12;
                    var_19 = ((-((-((1 ? 36516903 : 0))))));
                }
            }
        }
    }
    var_20 = (!var_13);
    var_21 *= 255;
    #pragma endscop
}
