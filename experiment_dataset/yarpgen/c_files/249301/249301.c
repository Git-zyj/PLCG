/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = -167;
    var_13 = (((((-1 - var_8) ? -var_3 : (((82 ? 88 : 1023))))) - (min((var_3 ^ var_4), var_2))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 6;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (((max(24476, (((arr_2 [i_0] [i_0]) ? var_8 : (arr_4 [i_1 - 3] [i_1 + 2] [i_0]))))) >> ((((~(max((arr_4 [i_0] [i_0] [i_1 + 4]), 6568254021621433052)))) - 11878490052088118548))));
                var_14 = 24476;
                var_15 = ((~((~(((arr_5 [i_0] [i_0] [i_1 + 3]) ^ (arr_0 [i_1 + 1])))))));
            }
        }
    }
    #pragma endscop
}
