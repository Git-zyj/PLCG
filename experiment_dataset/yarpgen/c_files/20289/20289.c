/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 = (max(var_19, ((min(1, 65535)))));
        var_20 ^= (max(((min(((min(var_1, 1))), (min((arr_0 [i_0]), var_10))))), (min((min((arr_1 [i_0]), (arr_1 [i_0]))), (max((arr_0 [i_0]), var_14))))));
        var_21 = (max(((max((min((arr_1 [i_0]), var_10)), ((max(69, 21404)))))), (min(((min(-21403, var_18))), (min((arr_1 [i_0]), 14646616064713289259))))));
    }

    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_22 *= (min((min(((min(21404, 1))), (min((arr_3 [i_1]), 1630498284)))), ((min((min((arr_2 [i_1]), 0)), ((min((arr_3 [i_1]), var_18))))))));
        var_23 = (max(((min((min(2147483647, var_16)), ((min((arr_3 [i_1]), 21404)))))), (min(((min((arr_3 [i_1]), (arr_2 [i_1])))), (max(var_2, var_9))))));
    }
    var_24 |= (min((min(-21424, 2654810943808774691)), ((min((min(54237, 4195293217)), ((min(var_1, var_13))))))));
    #pragma endscop
}
