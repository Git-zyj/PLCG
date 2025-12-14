/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (((((10048443079346200488 ? 77715210 : 0)) <= (~8699))));
        var_16 = (((max((max((arr_0 [i_0]), 6948442086822039169)), (var_10 != 9828))) < (((max(((var_3 || (arr_1 [i_0]))), (-110 > 65520)))))));
        arr_3 [i_0] = (min((min(24223, -1)), ((-1 ? (max(1, var_0)) : var_1))));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        arr_7 [i_1] = max((((max((arr_5 [i_1]), 3040761173)) - (min(var_4, (arr_5 [0]))))), (max(((max(1, 2015169672))), (arr_5 [i_1]))));
        arr_8 [i_1 + 2] = 0;
    }
    var_17 = ((4870678194828445912 ? (var_13 && var_0) : 55708));
    #pragma endscop
}
