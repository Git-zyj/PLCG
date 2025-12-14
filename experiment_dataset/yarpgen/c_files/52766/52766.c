/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((~0) | ((43360 ? 80 : var_9))))) ? (((var_5 + 9223372036854775807) << (var_8 - 214))) : (((var_5 ? (-1 <= 20) : -32767)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (((~(arr_1 [i_0]))));
        var_11 ^= (min((var_4 / 55891), (min(((~(arr_2 [i_0]))), 483626738))));
        arr_4 [i_0] = ((((7867885033598485431 / (((min(153, 14)))))) ^ 16376));
        arr_5 [i_0] = 483626738;
    }
    #pragma endscop
}
