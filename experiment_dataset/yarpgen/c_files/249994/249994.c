/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;
    var_20 = (((-2147483647 - 1) ? ((((((var_7 ? var_10 : var_2))) | ((2061982215 >> (var_17 - 4978379971197468652)))))) : var_17));
    var_21 = ((!((((2147483647 > 2147483647) >> (((min(var_3, var_5)) - 3813324327)))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_22 += (min((min((-2147483647 - -810034012), (((arr_0 [2]) ? var_17 : (arr_1 [8]))))), (arr_0 [2])));
        var_23 &= (min((((((~(arr_2 [i_0])))) ? (~var_17) : var_8)), (((((((arr_2 [i_0]) != (arr_0 [0])))) ^ (var_14 != -25698))))));
        var_24 ^= (((((var_9 ? ((min((arr_1 [i_0]), -16411))) : var_9))) ? (max(((2147483636 >> (1926836129 - 1926836118))), (max((arr_0 [8]), (arr_1 [i_0]))))) : 5365425426582340158));
    }
    var_25 = var_18;
    #pragma endscop
}
