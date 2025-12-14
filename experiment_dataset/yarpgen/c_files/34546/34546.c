/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((((((max(-106138413, var_16)) & (var_17 || var_15))) | var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_21 = -18446744073709551606;
                var_22 *= ((var_8 ? (24073 || 196608) : 196608));
            }
        }
    }
    var_23 = (~var_16);
    #pragma endscop
}
