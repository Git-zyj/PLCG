/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_3;
    var_20 = (((((((15 ? var_4 : 2613827831)) % var_0))) ? ((((min(-5637971436382610780, 166))))) : ((~(-26717 * 0)))));
    var_21 = var_5;
    var_22 -= var_6;

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_23 += (min(24101, ((-((0 ? (arr_0 [i_0] [i_0]) : -24102))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_24 = (((((-127 - 1) >= (!-769335789))) ? ((min(24, 0))) : (min(769335789, 30273))));
                        var_25 = ((12 && (((769335789 ? (arr_6 [9] [i_0] [i_2]) : 1)))));
                    }
                }
            }
        }
        arr_9 [i_0] [i_0] = (min((min((~-1685490423728912803), (arr_0 [i_0 - 1] [i_0 - 1]))), (((-(~374028745))))));
        var_26 = (min(var_26, 7077));
    }
    #pragma endscop
}
