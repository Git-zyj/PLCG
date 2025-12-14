/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= ((max((max(-7792876925264280885, 8031953740976000008)), var_14)));
    var_20 = var_14;
    var_21 = ((((max(var_9, ((var_8 ? var_14 : var_6))))) ? (((((min(3474264204, var_18)) + 9223372036854775807)) << 0)) : ((((~1671068286) | (~1))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 = ((~((((var_3 ? (arr_3 [i_2] [i_1 + 1] [i_2]) : var_4))))));
                    arr_6 [i_0] [i_0] [i_1] [i_2] = -8031953740976000008;
                }
            }
        }
    }
    var_23 = -var_2;
    #pragma endscop
}
