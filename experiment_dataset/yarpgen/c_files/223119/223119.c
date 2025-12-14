/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((min((min(var_10, var_4)), -8109957431792431610)), var_3));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_12 *= 12;
                var_13 *= (((arr_1 [i_0]) ? ((((226 ? (arr_2 [i_1 + 3] [i_1 + 3] [6]) : 18446744073709551615)) & (129 | -423975118626533425))) : 113));
                var_14 *= ((0 > (((((max((arr_1 [5]), -7574447999573549459))) ? (arr_3 [i_0 + 2] [i_1 + 4]) : (~9223372036854775807))))));
                var_15 = 112;
            }
        }
    }
    var_16 = var_6;
    var_17 = ((var_2 < (min(var_2, var_6))));
    #pragma endscop
}
