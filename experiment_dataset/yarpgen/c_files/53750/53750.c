/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = ((((2637558244 | 97) & var_2)) & (((1 & (~var_8)))));
                var_18 = ((16 ? (((((min(var_10, var_5))) < (var_8 || 1023)))) : 52464593));
            }
        }
    }
    var_19 = ((((((var_6 ? var_5 : var_10)))) && (((var_0 ? ((var_8 ? var_2 : 1657409040)) : (~var_10))))));
    var_20 = min((((((min(1519321111097515083, 615792301))) || (!15774688083483347917)))), -8201929535127933631);
    var_21 = ((((((max(-414097029, var_8))) ? (min(var_0, 1099511627775)) : 1038648580)) * (((min(var_12, var_14))))));
    #pragma endscop
}
