/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (max(var_7, (((1 ? 1 : 1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_11 = (max((!var_8), var_3));
                    var_12 = ((min((-9223372036854775807 - 1), var_9)));
                }
            }
        }
    }
    var_13 |= ((((((0 % var_5) <= ((var_9 ? var_0 : var_2)))))) < (((~var_0) ? 6835762950290677843 : (max(var_0, 9223372036854775806)))));
    var_14 = (min(-1079105951, -9223372036854775805));
    #pragma endscop
}
