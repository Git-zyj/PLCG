/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((max(var_0, var_6))) ? var_13 : -7065)));
    var_18 = (min(var_18, (((var_2 - (((var_15 ? var_10 : 18446744073709551598))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = (((arr_1 [i_0]) << (((arr_4 [i_0 - 2]) - 18446744073709549155))));
                arr_6 [i_0] = ((-(((~-121) ? ((min((arr_2 [i_0]), 8755))) : -6120592412074684466))));
            }
        }
    }
    #pragma endscop
}
