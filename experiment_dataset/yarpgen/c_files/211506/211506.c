/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_2;
    var_18 *= (max(((max(var_14, (min(var_6, var_7))))), (max(-1, (min(-118, var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_19 *= (min(106, (arr_2 [i_0])));
                var_20 = (max((arr_3 [i_0] [12] [i_1 + 3]), (arr_3 [9] [i_0] [i_1 - 3])));
            }
        }
    }
    var_21 = (max(((((((12280978371164867331 ? 1 : 6165765702544684287))) ? var_14 : (1694496132 <= 2600471179)))), (min(12280978371164867331, 110))));
    #pragma endscop
}
