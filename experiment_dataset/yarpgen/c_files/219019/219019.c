/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_13;
    var_16 = (max(var_16, var_13));
    var_17 = (min((max((min(124, var_7)), var_4)), 112));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 *= (min(((1 ? ((((arr_0 [i_0] [i_0]) * var_14))) : (min(var_10, var_7)))), ((((arr_1 [i_0]) && (((308848121 ? 17113 : 1))))))));
        var_19 = (max(((max((var_13 == var_7), var_11))), ((var_8 ? (max(var_12, 1)) : (((max(1, var_3))))))));
        var_20 = (min(var_20, (arr_0 [i_0] [i_0])));
        var_21 *= (min((arr_1 [i_0]), (((arr_1 [i_0]) ^ (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_22 ^= (var_10 >> 1);
        var_23 *= ((-(240937951 / -125)));
    }
    #pragma endscop
}
