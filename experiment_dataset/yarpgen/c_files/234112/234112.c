/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_16 = ((0 | (((~(arr_0 [i_0 + 1] [i_0 + 1]))))));
        arr_4 [i_0 + 1] = (40669 | 48);
        var_17 = -639;
        var_18 -= ((0 ? 30358 : 1));
    }
    var_19 = var_15;
    var_20 = 3386874010;
    var_21 = (min(18446744073709551615, (((((var_4 ? var_4 : 3386874010)) << (-44 + 46))))));
    #pragma endscop
}
