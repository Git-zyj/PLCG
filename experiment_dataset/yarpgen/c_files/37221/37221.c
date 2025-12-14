/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~var_0);

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_18 = ((!(arr_0 [i_0 - 1])));
        var_19 = (~18120);
        arr_3 [i_0] [i_0] = var_16;
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        var_20 = (max(((-(max(var_9, (arr_5 [i_1]))))), (((-(var_16 && var_16))))));
        var_21 = (max((max((arr_0 [i_1 + 1]), -var_16)), (((arr_4 [i_1]) - (arr_0 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_22 *= (((~(9223372036854775807 - 942833881497821722))));
        var_23 += (arr_5 [i_2]);
    }
    #pragma endscop
}
