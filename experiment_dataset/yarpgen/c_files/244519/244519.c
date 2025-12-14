/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] |= ((((max(0, 2347326297))) ? ((-(arr_1 [i_0 + 1]))) : -var_6));
        var_16 = (((((min((arr_1 [i_0]), var_2))) ? 0 : ((min(0, var_12))))) | (((arr_0 [i_0 - 2]) * var_1)));
    }
    var_17 = (min(((~(3856907816083657496 | 255))), 35524510300249306));
    #pragma endscop
}
