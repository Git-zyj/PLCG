/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_11 = ((~4294967295) ? -var_0 : ((var_3 ? ((var_3 ? var_4 : 1093922058)) : var_4)));
                    var_12 *= (!-1485691994);
                    var_13 = (1485692006 >> (((min(var_7, ((var_1 ? var_1 : var_8)))) - 988824286)));
                }
            }
        }
    }
    var_14 = (max(var_14, ((-(((((var_2 ? 2069367685 : var_8))) ? (!var_9) : 2809275289))))));
    var_15 = (1485691994 - ((-2809275289 ? 310455223 : 1882557018)));
    #pragma endscop
}
