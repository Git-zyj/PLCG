/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min((42337 && var_8), var_10))) ? (((!(-92 || var_1)))) : 123));
    var_15 *= (((2973053506 << (var_10 - 124))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = var_6;
                arr_7 [8] [i_1] [i_0] = -98;
            }
        }
    }
    #pragma endscop
}
