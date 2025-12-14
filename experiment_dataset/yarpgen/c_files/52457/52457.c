/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = (((((((max(var_12, -32764))) | -var_5))) ^ ((5938747232228557032 ? (arr_2 [i_0 - 1]) : 5938747232228557032))));
                var_19 = ((-1281881886474550192 && (!5938747232228557033)));
                var_20 = ((((~(min((arr_3 [i_1]), 5938747232228557059)))) | ((var_11 ? -5938747232228557031 : (arr_1 [i_0 - 2])))));
            }
        }
    }
    var_21 *= (((max(var_13, (~-5938747232228557032))) ^ var_11));
    #pragma endscop
}
