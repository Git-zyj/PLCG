/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = ((((var_15 | (arr_7 [i_2 - 1] [i_2 + 1] [i_2 - 1]))) + (((4294967295 ^ (1058577010 | var_4))))));
                    var_20 = var_2;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                arr_17 [i_3] [i_4] [i_3] = (max((~var_9), (((arr_11 [i_3 - 4]) ^ var_4))));
                var_21 *= (min((arr_14 [i_3 - 3]), var_10));
            }
        }
    }
    var_22 = ((var_14 ? (((min(var_18, var_10)) | var_1)) : (((((-848 ? var_12 : var_0))) ? ((4294967295 ? var_18 : var_3)) : var_5))));
    #pragma endscop
}
