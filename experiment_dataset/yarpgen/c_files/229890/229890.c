/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (min(var_9, 3563340314663041506));
    var_15 = ((((((((49030 ? var_9 : 3563340314663041506))) ? 13744769714714003133 : (((min(var_3, var_11))))))) ? ((((min(var_2, 3563340314663041509))) ? var_4 : ((6672 ? var_12 : 3205360296)))) : var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = var_9;
                arr_5 [i_0] [i_1] [16] = ((((((((var_3 ? -121 : var_0))) ? 6672 : (((arr_1 [i_1]) | -31341))))) ? ((18446744069414584320 ? (6648 ^ 471947536) : -2261838829989091570)) : 3645107109));
            }
        }
    }
    #pragma endscop
}
