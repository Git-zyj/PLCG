/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = ((((max((~1119027095), (~var_0)))) ? (((((((arr_1 [4]) ? 2 : var_14))) ? (arr_2 [i_0]) : (arr_1 [i_0])))) : var_12));
        var_18 = ((!-4294967295) ? (max(((max(0, (arr_2 [4])))), (arr_0 [i_0] [1]))) : ((((max((arr_1 [i_0]), 254))) ? 1888912969996916903 : (arr_0 [i_0] [i_0]))));
    }
    var_19 -= ((!((min((var_2 / var_7), (~var_16))))));
    var_20 ^= (min((((max(var_12, var_8)) + 0)), -var_1));
    #pragma endscop
}
