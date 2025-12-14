/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((max((((1513312599 ? var_12 : 1513312599)), var_9))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = ((~(((arr_1 [i_0]) & (arr_1 [i_0])))));
        var_17 = (((min((arr_1 [i_0]), var_7))) ? (arr_1 [i_0]) : (max(var_9, (arr_1 [i_0]))));
        arr_2 [i_0] = max(((max((arr_0 [i_0]), var_14))), ((-118 * ((-1513312600 ? -528508319 : 9054159782644256903)))));
    }
    var_18 = (min(var_18, ((max((3553106131 >= 3553106128), (155 <= 201764887))))));
    var_19 *= -var_12;
    var_20 ^= 2047;
    #pragma endscop
}
