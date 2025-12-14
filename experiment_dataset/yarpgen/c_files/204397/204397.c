/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_19 += var_10;
        var_20 ^= var_5;
        var_21 += ((((13237 ? (-9009000372550882340 | var_14) : var_5)) <= (((-2371 - (arr_2 [i_0] [i_0 - 1]))))));
    }
    var_22 |= ((((!var_5) / ((-21405 ? var_0 : 2349)))));
    #pragma endscop
}
