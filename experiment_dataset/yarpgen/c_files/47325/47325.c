/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_14 + (max(9, var_12))))) ? var_3 : (24770 + -2147483637)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((((((arr_0 [i_0] [i_0]) ? 15 : -7))) >= (((~8212493810863935427) >> ((((min(58, -24770))) + 24822))))));
        arr_5 [i_0] = (var_2 * 246);
    }
    #pragma endscop
}
