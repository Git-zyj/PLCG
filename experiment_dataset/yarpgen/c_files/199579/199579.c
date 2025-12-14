/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = (max(var_16, -5995362796213254253));
        arr_2 [21] = 1;
        arr_3 [i_0] = 5995362796213254248;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_17 = (max(var_17, ((min((max(215, (min(8207046662314228127, 1)))), (max(-5995362796213254267, 5995362796213254241)))))));
        var_18 = max((min(-9223372036854775793, 1)), (max(187, -8715952626115832775)));
    }
    var_19 -= (max(var_13, 1));
    var_20 = (max(var_20, ((max(1, (max(var_6, var_0)))))));
    var_21 = var_3;
    #pragma endscop
}
