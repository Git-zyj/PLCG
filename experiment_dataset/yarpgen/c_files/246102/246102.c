/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (max((min(-3731, var_0)), var_14));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] = (min((arr_2 [10] [i_0] [i_0]), (min(0, 64266))));
                    var_16 = ((~(-4680529236443514688 - 17)));
                }
            }
        }
    }
    var_17 = var_5;
    var_18 = ((((((max(var_7, var_5))) < var_12)) ? (max(4468512080782510485, ((min(8376, var_2))))) : (min(((min(var_7, var_5))), var_6))));
    #pragma endscop
}
