/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (!-3216214835);
    var_17 = (min(((((var_10 ^ 0) <= ((var_5 ? var_13 : var_7))))), -var_14));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = (min((min(((min(var_15, (arr_1 [12])))), (arr_0 [8]))), (((!((max((arr_1 [i_0]), var_9))))))));
        var_19 = ((((min(((-(arr_0 [i_0]))), (~255)))) ? ((~((min(1, 222))))) : ((~(arr_1 [i_0])))));
    }
    var_20 = (max(var_14, (~var_2)));
    #pragma endscop
}
