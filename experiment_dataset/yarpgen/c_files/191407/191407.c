/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= ((var_12 ? ((max(((var_11 ? 4064627431 : var_1)), var_6))) : var_10));
    var_20 = (max((var_3 & var_6), (~var_6)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, ((((arr_1 [i_1]) ? -32756 : -var_2)))));
                    var_22 = ((max(1455031344, (arr_3 [i_0 + 1]))));
                }
            }
        }
    }
    var_23 += var_13;
    #pragma endscop
}
