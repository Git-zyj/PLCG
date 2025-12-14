/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max(125, -117);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_20 = ((((((-127 - 1) ? 108 : 108))) ? ((var_2 ? 125 : var_1)) : var_7));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_21 ^= ((!(arr_8 [i_1 - 1] [6])));
                    arr_11 [i_0 - 1] [12] [i_0 + 1] [i_0] |= (((((53 | -62) + 2147483647)) << (((((arr_0 [i_0] [2]) + 43)) - 30))));
                    var_22 = (-109 == 61);
                }
            }
        }
    }
    #pragma endscop
}
