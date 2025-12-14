/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (65535 && 65535);
    var_12 = (-3467067011911937773 / 1);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = (max(((max(45020, (var_4 % var_4)))), ((1 ? (-127 - 1) : 879206546))));
                var_14 = (((max((arr_0 [i_0 - 1]), (max(var_9, (arr_2 [i_0])))))) - (((arr_1 [i_0 - 2]) & ((5785928043206579641 ? (arr_2 [i_0]) : -3467067011911937773)))));
            }
        }
    }
    var_15 = (((((var_1 ? var_4 : var_5))) * -var_5));
    #pragma endscop
}
