/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += -127;
    var_16 = (max(var_16, ((min((((!var_13) ? var_5 : 129)), var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_17 ^= (((((max(109, (arr_0 [4] [i_1 - 2]))))) > -18822));
                arr_4 [i_0] = ((((-(arr_2 [i_1 + 1] [i_1 - 1]))) & (arr_2 [i_1 + 1] [i_1 - 1])));
                var_18 = 27;
            }
        }
    }
    #pragma endscop
}
