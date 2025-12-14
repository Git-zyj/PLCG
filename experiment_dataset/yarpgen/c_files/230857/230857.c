/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((~4036088021), ((min(4611685880988434432, 127)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 = ((127 ? (min(-8, (!7))) : (min(-18, (min(-55, -9))))));
        arr_2 [i_0] = (!106);
    }
    var_17 = ((-(min((((-117 ? -3474651 : 127))), (min(-32, -1152921504606846976))))));
    var_18 = ((~(!127)));
    #pragma endscop
}
