/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 |= (arr_3 [i_0] [i_0]);
        var_19 += ((((((((arr_3 [i_0] [i_0]) ? 287303047 : (arr_0 [i_0]))) - (arr_0 [i_0])))) ? 14883 : (((!(((1327813524 ? (arr_1 [i_0]) : (arr_1 [6])))))))));
        var_20 = (arr_3 [i_0] [i_0]);
    }
    var_21 = ((var_16 ? -110 : ((53771 ? 1 : (2137658454 ^ var_8)))));
    #pragma endscop
}
