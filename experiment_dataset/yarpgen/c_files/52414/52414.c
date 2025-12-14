/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_1] = var_3;
                var_20 = ((((((141 ? 141 : 148)))) * -var_8));
                var_21 = var_13;
            }
        }
    }
    var_22 = var_18;
    var_23 += (min((min((1023 % 4691), (var_1 % var_9))), var_14));
    var_24 = var_13;
    #pragma endscop
}
