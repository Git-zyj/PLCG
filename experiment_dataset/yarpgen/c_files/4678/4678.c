/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = ((-126100789566373888 ? ((min(91, -51))) : (~0)));
        var_20 |= 17835;
        var_21 = (arr_0 [i_0] [i_0]);
        var_22 *= (max(95, ((-(arr_1 [i_0])))));
    }
    var_23 = ((!((max(9223372036854775808, 7685110289189591561)))));
    #pragma endscop
}
