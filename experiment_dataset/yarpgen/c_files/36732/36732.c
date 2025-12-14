/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_12 = ((-(~var_1)));
        var_13 = var_2;
        var_14 *= (min((max(28489, (arr_0 [i_0]))), ((max(-4271952141875690597, (32744 | 28496))))));
        arr_2 [i_0] = ((((min(((~(arr_1 [i_0]))), (1729877340 % 117440512)))) ? (arr_0 [i_0]) : ((+(max((arr_0 [i_0]), -86))))));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_15 *= (arr_1 [i_1]);
        var_16 = (min((min(264564730844976292, (arr_5 [i_1 - 2]))), (-32744 != -32761)));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_17 += ((-1760798564789619626 ? ((min(0, 16))) : 86));
        var_18 *= 1;
    }
    var_19 += var_9;
    #pragma endscop
}
