/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((30067 % (min(((min(var_7, var_19))), (max(-30067, var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_21 = ((((min(-18122, 65535))) & (arr_3 [i_0])));
                var_22 = (min(var_22, var_1));
            }
        }
    }
    var_23 = (min(var_23, 18122));
    var_24 = ((18421 % ((var_7 ? var_5 : ((var_14 ? var_7 : 8))))));
    #pragma endscop
}
