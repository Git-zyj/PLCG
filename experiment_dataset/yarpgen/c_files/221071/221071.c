/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (-64 - 20);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] = 0;
        var_17 = ((((((-7675292138026103132 >= 11060543995095316660) ^ (((arr_0 [i_0]) - 1460640661167598804))))) ? (((((!0) > var_9)))) : (((var_0 | var_4) ? var_2 : (min(3570201731, 21))))));
        var_18 = (((~1) ? -var_13 : ((max(((5660 ? -64 : 55)), 10987)))));
    }
    var_19 = (192 ? -var_13 : (-41 >= -5675));
    var_20 = var_9;
    #pragma endscop
}
