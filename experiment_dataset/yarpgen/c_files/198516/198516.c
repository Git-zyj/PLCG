/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    var_19 = (~var_16);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 = 1241660624;
        var_21 = (max(var_3, ((var_6 ? -7 : (var_15 + var_9)))));
        var_22 = ((~(min((((4191157189 >= (arr_1 [i_0] [i_0])))), ((~(arr_0 [i_0])))))));
    }
    var_23 = (~27732);
    var_24 = var_13;
    #pragma endscop
}
