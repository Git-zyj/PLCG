/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = max(var_12, 15260189496522892365);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = arr_2 [i_0] [13];
        var_19 -= ((1024 << ((((min((arr_1 [i_0]), 15762))) - 110))));
        var_20 *= ((var_10 ? ((((arr_1 [i_0]) && (arr_1 [i_0])))) : ((((arr_1 [i_0]) == (arr_2 [i_0] [i_0]))))));
    }
    var_21 = ((((max((!253), ((4294966271 >> (-24310 + 24340)))))) ? var_3 : var_8));
    var_22 -= (-3557541981074604021 ? 524288 : -73);
    #pragma endscop
}
