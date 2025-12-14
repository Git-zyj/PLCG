/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (((-((max(var_0, var_1))))));
    var_20 |= (max(((((var_5 / var_17) || (!var_1)))), ((var_16 ? ((max(var_0, var_2))) : (!var_9)))));
    var_21 = (min(((((min(var_5, var_6))) ? (min(-4320941891807392676, -31043)) : (var_11 / var_15))), (((var_8 ^ var_14) ? var_14 : ((var_2 ? var_18 : var_17))))));
    var_22 = (max(var_22, (((~((min((min(var_0, var_6)), (!var_13)))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] [i_0] = (min((((-((512 ? 185 : 244))))), ((min(var_3, var_18)))));
                var_23 = (min(var_0, (max(var_1, var_18))));
                arr_9 [16] [12] = (max((((max(var_3, var_7)) | (((1544 >> (70 - 39)))))), (min(var_1, (var_18 | var_11)))));
                var_24 -= ((!(!var_15)));
            }
        }
    }
    #pragma endscop
}
