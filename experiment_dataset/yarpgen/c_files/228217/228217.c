/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, ((max(5619900204382556694, (((max((arr_6 [i_0]), -2115729258)))))))));
                    arr_7 [i_0] [6] [i_0] [i_0] = ((var_1 | ((max((arr_5 [i_0]), 1)))));
                    arr_8 [i_0] [i_1 - 1] [i_1] = ((max((arr_1 [i_0]), (arr_1 [i_0]))));
                }
            }
        }
    }
    var_12 = (var_8 ? 10493332578230531159 : ((var_1 ? var_6 : var_5)));
    #pragma endscop
}
