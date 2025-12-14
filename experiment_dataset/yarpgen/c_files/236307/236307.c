/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max(var_4, (((!(((var_12 ? var_8 : 125)))))));
    var_17 = (min(var_17, (-var_15 <= var_13)));
    var_18 = (max(var_18, (((((-64 ? ((var_1 ? var_2 : var_3)) : var_13))) ? (375777386436617850 - 5499765690419762746) : (((-(-78 ^ var_10))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = (arr_1 [i_0 - 4]);
                arr_6 [i_0 + 3] [i_0 + 3] [i_0] = var_1;
                var_20 = max(-125, -6189099376806041957);
            }
        }
    }
    #pragma endscop
}
