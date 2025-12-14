/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_17 = (min(var_17, (((2147483640 ? -90 : 1)))));
            var_18 = (max(var_18, ((((arr_1 [i_0] [i_1]) < var_14)))));
        }
        var_19 = (((var_5 ? 65 : var_8)));
        var_20 ^= (((0 << (var_6 - 155))) + (~72));
    }
    var_21 = 14669288392304185802;
    #pragma endscop
}
