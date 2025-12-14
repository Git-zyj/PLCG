/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((31508525340727185 ? (!835223272) : ((-303880053 ? 239 : ((1048572 ? 16 : var_1))))));

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_11 = 16;
        var_12 -= (!4);
    }
    var_13 = (min(var_13, (var_6 ^ var_6)));
    var_14 -= ((~(((226 && (!252))))));
    #pragma endscop
}
