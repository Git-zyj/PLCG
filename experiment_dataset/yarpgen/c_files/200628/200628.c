/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min(var_1, 3501821604) * var_5))));
    var_20 = (((max(var_14, ((min(-30, 6))))) >= var_14));
    var_21 = (((((!var_5) % var_1)) >> (var_16 - 4952900867760710919)));
    var_22 = var_16;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_23 |= arr_2 [i_0] [11];
                    var_24 ^= (arr_1 [i_0] [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
