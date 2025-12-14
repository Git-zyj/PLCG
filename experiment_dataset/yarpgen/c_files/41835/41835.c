/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (max(((((~-25) >= ((-893055789 ? (arr_2 [i_0]) : -25))))), (arr_2 [i_0])));
        var_14 = (arr_2 [i_0]);
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_15 = (max((arr_5 [i_1] [i_1]), (((max(var_0, -26)) - ((max(var_1, -29)))))));
        var_16 = (1947074002 > -1947074003);
    }
    var_17 = var_4;
    #pragma endscop
}
