/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (((min(4294967295, var_5))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_18 = (min(var_18, 216));
        arr_2 [i_0] = 20199;
        arr_3 [i_0] = (arr_0 [i_0]);
        var_19 = (((arr_0 [i_0]) ? 6832558232382643664 : ((((arr_1 [i_0 - 1] [i_0 + 2]) * (arr_1 [i_0 + 1] [i_0]))))));
        var_20 += ((~(((arr_0 [3]) ? var_8 : -var_5))));
    }
    var_21 = ((var_15 ? var_8 : -var_12));
    var_22 ^= (max(var_1, 3598330234));
    var_23 = (max(var_23, (((var_14 ? ((((var_4 ? var_8 : var_0)) & var_9)) : var_6)))));
    #pragma endscop
}
