/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;
    var_21 = ((((var_7 ? 106 : (var_15 & var_19))) > 29014));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_22 = (((arr_3 [i_0] [1] [i_0 + 1]) / (arr_3 [i_0 + 3] [i_0 - 1] [i_0 + 1])));
                    var_23 = (min(var_19, ((var_6 ? (min(var_10, var_7)) : (arr_4 [i_0] [i_0] [i_2])))));
                }
            }
        }
    }
    var_24 = (max(((min((-25927 & var_5), ((var_16 ? var_18 : var_8))))), 1491062254));
    var_25 = (!var_11);
    #pragma endscop
}
