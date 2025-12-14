/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (((max(var_15, (min(64, (arr_4 [i_1])))))))));
                var_19 += (~14682);
                var_20 += var_7;
            }
        }
    }
    var_21 = ((-((((var_11 << (var_10 - 5442621100694507949)))))));
    var_22 = (min(var_22, (((-var_15 >> (var_9 - 131))))));
    var_23 += (min(var_13, var_4));
    #pragma endscop
}
