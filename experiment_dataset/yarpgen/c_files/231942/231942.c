/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 4611686018427387903;
    var_17 = var_14;
    var_18 = (max((var_4 & var_5), 513567195));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 = ((min((arr_0 [i_0]), var_1)));
        arr_3 [i_0] [i_0] = max(((((min((arr_2 [17] [i_0]), 11639137514170457022)) < var_13))), ((13835058055282163683 ? (var_13 ^ 5813247023337341605) : (arr_2 [i_0] [i_0]))));
        arr_4 [i_0] = -7002358702142743657;
    }
    var_20 |= (-2147483647 - 1);
    #pragma endscop
}
