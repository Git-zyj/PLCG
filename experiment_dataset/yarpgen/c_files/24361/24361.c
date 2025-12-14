/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 -= var_15;
                    var_18 = ((~(var_2 <= -1222336861)));
                    var_19 = (((min(var_12, var_6)) | var_13));
                }
            }
        }
    }
    var_20 = (min(var_20, ((max(-var_10, var_8)))));
    #pragma endscop
}
