/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0 - 1] = ((arr_2 [i_0 - 1]) <= ((var_15 * (arr_0 [i_0 - 1] [i_0 - 1]))));
        var_19 *= (!((var_4 && (arr_2 [i_0 - 1]))));
    }
    var_20 = (max(var_20, (((max(var_6, ((1311983367 ? 117 : var_4))))))));
    #pragma endscop
}
