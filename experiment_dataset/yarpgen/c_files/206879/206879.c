/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((min(-var_3, -var_5)) > var_7));
    var_19 *= (var_11 / ((min((max(var_6, var_4)), var_6))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (max(-15854, ((min(var_10, 13886)))))));
                var_21 = ((86 ? (-9223372036854775807 - 1) : -399392925187018281));
                var_22 = (max(var_22, ((max((((arr_5 [12]) ? (((var_12 + 2147483647) << (((arr_1 [i_0] [13]) - 15079)))) : var_11)), -48)))));
                arr_7 [i_0] [i_1] [4] |= (-399392925187018281 & -15850);
                var_23 = (46099 ^ var_13);
            }
        }
    }
    var_24 = var_8;
    #pragma endscop
}
