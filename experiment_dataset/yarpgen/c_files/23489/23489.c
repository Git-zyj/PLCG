/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= var_9;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (min((min((arr_0 [i_0 - 2]), 63)), 44));
                var_14 = (min(var_14, var_4));
            }
        }
    }
    var_15 = min((((((var_8 ? var_4 : 127)) - var_11))), ((((((-127 - 1) ? 2134185072 : -7210538831294577023))) ? 18259072260315552701 : ((max(var_6, var_10))))));
    #pragma endscop
}
