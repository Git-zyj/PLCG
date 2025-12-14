/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((8814835695376298159 > var_3) != var_10)));
    var_14 = 243;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = ((((arr_2 [i_1]) ? (arr_2 [i_1]) : -7962749768154796323)));
                    var_16 -= (min((arr_7 [i_0] [i_0] [i_1 + 2] [i_1 - 2]), (arr_7 [i_0] [i_0] [i_1 + 1] [i_1 + 2])));
                }
            }
        }
    }
    #pragma endscop
}
