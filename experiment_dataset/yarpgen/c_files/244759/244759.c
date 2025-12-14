/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 98;
    var_11 = ((var_0 ? 9223372036854775800 : (min(var_4, (max(var_1, var_8))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = ((-(arr_0 [i_0])));
        arr_3 [i_0] [i_0] = ((65521 ? (~var_7) : (((var_0 ? (~1) : (arr_1 [i_0]))))));
    }
    var_12 ^= ((((max(var_5, (~var_3)))) ? (((17 ? var_7 : var_3))) : (max(4236702730, var_8))));
    #pragma endscop
}
