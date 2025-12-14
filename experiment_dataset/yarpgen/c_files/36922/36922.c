/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 += ((arr_0 [11]) & (((max(var_2, -9223372036854775790)) >> 1)));
        var_20 += var_12;
    }
    var_21 -= (min((1 % 7246228786429818850), (((19904788 ? (~19904788) : (15004841933304069670 && -4543129081485206691))))));
    var_22 = var_1;
    #pragma endscop
}
