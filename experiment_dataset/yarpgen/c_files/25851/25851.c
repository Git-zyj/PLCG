/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = ((28338 ? 39504 : ((max(var_4, 29815)))));
                arr_5 [i_1] [i_1 + 2] = ((((min((arr_0 [i_0 + 1] [i_1]), var_14))) >= ((max((arr_2 [i_1] [i_1]), 115)))));
            }
        }
    }
    var_17 |= (max(-var_14, (((-29816 * var_6) + var_13))));
    var_18 = (((((((-29816 ? 20909 : 13109)) + ((max(var_6, var_13)))))) ? (~26031) : (!var_14)));
    #pragma endscop
}
