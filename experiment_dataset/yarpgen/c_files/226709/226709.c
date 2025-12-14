/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    var_14 = ((((((var_1 ? 4294967295 : 4294967295))) ? -5290429742959655633 : (min(-5290429742959655633, (-9223372036854775807 - 1))))));
    var_15 = var_11;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= ((+(min(((25391 ? (-9223372036854775807 - 1) : (-9223372036854775807 - 1))), 783378279578769788))));
        var_16 ^= var_0;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_17 = (((((4294967295 ^ var_0) ^ 5290429742959655632)) & (((((var_3 ^ (arr_1 [i_1])))) ? ((4770183965898087774 << (((((arr_4 [11]) + 25)) - 12)))) : (~11)))));
            var_18 -= (((((var_3 ? var_9 : (arr_1 [i_0])))) ? (-9223372036854775807 - 1) : ((var_3 - (max(-783378279578769789, var_12))))));
            var_19 = (min(var_19, -1));
            arr_6 [i_0] = ((~(((arr_1 [i_0]) ? (~1) : var_11))));
        }
    }
    #pragma endscop
}
