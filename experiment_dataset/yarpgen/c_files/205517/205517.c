/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!var_6);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, (((5 ? 46 : (-9223372036854775807 - 1))))));
                    var_21 = ((((!(-9223372036854775807 - 1)))));
                    var_22 *= (((-(!1835008))));
                    var_23 &= (-10 ? 18446744073709551593 : ((((!(arr_1 [i_0]))) ? 250 : var_11)));
                }
            }
        }
    }
    var_24 = (min(var_24, var_18));
    #pragma endscop
}
