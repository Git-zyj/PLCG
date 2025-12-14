/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_8));
    var_12 = ((((((min(-13496, var_10))) ? var_1 : var_1))) ? (~var_6) : (((~((4294967289 << (var_2 - 9658257198945119466)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                var_13 = ((((~((2763252525948451565 >> (((arr_2 [1]) - 65)))))) % (arr_3 [i_1] [i_1 + 4] [i_1])));
                var_14 = ((-((var_6 ? var_2 : 22147))));
            }
        }
    }
    var_15 &= var_5;
    #pragma endscop
}
