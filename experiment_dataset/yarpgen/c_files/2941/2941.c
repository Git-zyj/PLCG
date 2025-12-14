/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = ((((4494 < (arr_0 [i_0 + 1]))) ? (-533258435 - 4294967295) : ((((!(~-533258447)))))));
                var_20 *= var_0;
            }
        }
    }
    var_21 = ((max(var_1, (~var_3))));
    var_22 = (((-134217724 ? ((min(var_15, 54))) : var_14)));
    var_23 &= var_9;
    var_24 -= var_5;
    #pragma endscop
}
