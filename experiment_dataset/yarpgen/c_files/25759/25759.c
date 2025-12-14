/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, 72));
    var_17 = var_7;
    var_18 = ((513991225 ? (max(((513991225 ? 1023 : var_2)), var_2)) : var_7));
    var_19 &= ((var_11 ? 6238215886810495575 : 513991230));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = -513991213;
                var_21 = 1048575;
            }
        }
    }
    #pragma endscop
}
