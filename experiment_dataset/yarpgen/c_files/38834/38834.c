/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = (max(var_16, (((-38 ? -38 : 54)))));
        var_17 = (((-55 + 2147483647) >> (((((var_13 ? var_0 : -41))) - 5621867949239602479))));
    }
    var_18 = (min((((-(!-975529228)))), 4336756722182400186));
    var_19 &= var_11;
    #pragma endscop
}
