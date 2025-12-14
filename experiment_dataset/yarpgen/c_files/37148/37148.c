/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((min((((var_4 ? var_15 : 16))), var_15)));
    var_17 += var_4;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [19] = (((-0 | 8324788813081986782) ? 0 : var_5));
                    var_18 = (max(var_18, ((((arr_6 [i_2] [i_2] [i_2] [i_1 - 1]) ? (((arr_6 [i_1 + 1] [i_2] [i_2] [i_1 + 1]) - (arr_6 [i_2] [i_2] [i_2] [i_1 - 2]))) : (((arr_4 [i_0 - 1] [i_0 + 2] [i_1 - 3]) ? -32750 : (arr_4 [i_0 - 1] [i_0 - 1] [i_1 - 3]))))))));
                    arr_9 [i_0] [i_1 - 3] = (max(-108, (max((min(var_14, -69)), (max(var_14, 3))))));
                    var_19 = (!-125);
                }
            }
        }
    }
    #pragma endscop
}
