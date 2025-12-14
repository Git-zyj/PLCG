/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= 22252;
    var_11 = 38494;
    var_12 = (((((min(-22252, -22261)))) * var_2));
    var_13 = ((-(((var_0 ? var_8 : 12789)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 = (((var_4 % -110) ? (((-26 ? 1 : (arr_2 [i_0] [i_0])))) : (~var_3)));
        arr_3 [i_0] = (((arr_1 [i_0]) << (((arr_1 [i_0]) - 1721480630))));
        var_15 = (min(var_15, ((((arr_1 [i_0]) == (arr_1 [i_0]))))));
    }
    #pragma endscop
}
