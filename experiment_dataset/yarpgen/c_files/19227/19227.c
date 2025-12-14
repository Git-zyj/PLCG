/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;
    var_18 |= var_16;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 *= (!var_7);
                    var_20 = (((-32767 - 1) ? (!var_3) : (arr_4 [i_0] [i_2 + 2] [i_2 + 2])));
                }
            }
        }
    }
    #pragma endscop
}
