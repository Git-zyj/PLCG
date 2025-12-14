/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0 + 1] = (((((963318195 ? 8871481419722084424 : 9223372036854775296))) ? (((-963318191 ? 1 : 1))) : ((-4180029949966311541 ? 1841664397 : 140600049401856))));
        var_10 -= ((((((55353 ? 258048 : 0)) <= 32767)) ? ((((~3039) * (3039 / 1438946412)))) : ((15010 ? (((15010 ? 1787403557 : -3042))) : ((9223372036854775807 ? 22844 : 4294709247))))));
        var_11 += -7;
    }
    var_12 = var_8;
    #pragma endscop
}
