/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    var_16 = (min(((var_4 ? 14 : var_2)), var_6));
    var_17 = 1326522092;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((((0 ? -18 : 3076440191)) % (4294967295 * -22)))) ? (min((2851420182 * 1994558094), (min(-396780122, 0)))) : (((min(210, (3745264729 <= -268435456))))));
        arr_4 [i_0] &= (min((~145), ((min(2, 58)))));
    }
    #pragma endscop
}
