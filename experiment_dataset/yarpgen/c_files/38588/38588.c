/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_3 ^ ((((var_0 & var_8) ? ((36 ? 225 : 32038)) : (~var_8))))));
    var_11 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = -var_9;
        var_13 = (((arr_1 [14] [i_0]) ? var_1 : (arr_0 [i_0])));
        var_14 = ((-((var_1 << (((arr_1 [i_0] [i_0]) - 15329))))));
        var_15 = (15560 ? 6378480646192036359 : 1963161659);
    }
    var_16 = var_0;
    #pragma endscop
}
