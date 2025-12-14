/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;
    var_21 = ((((((min(16376, 255))) ? var_13 : var_4)) ^ (min(((var_11 ? 30636 : var_13)), var_0))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_22 = (((((((arr_0 [i_0] [i_0]) ? var_1 : 4294963200)))) || 3534912140));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_23 = ((((var_18 ? var_7 : (arr_0 [i_0] [i_1 - 1]))) ^ (4294963202 > var_14)));
            var_24 = (~50963);
            var_25 = (var_15 != 61341);
        }
    }
    #pragma endscop
}
