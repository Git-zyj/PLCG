/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(((min(2147483647, 852928236))), (((~(~1))))));
    var_18 *= ((var_12 >> (((max((~var_11), var_6)) - 13081959270551568738))));
    var_19 = var_11;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = ((((min(var_11, 1))) >= -1));
        var_21 = (((((127 ? 2147483639 : 1))) + (-3600345810399109814 - var_15)));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_22 *= (arr_0 [i_1]);
        var_23 = ((((((arr_3 [i_1]) && (((983040 - (arr_4 [i_1]))))))) >> ((((((arr_4 [i_1]) / var_7)) != (((-852928236 ? -2147483640 : 235))))))));
        var_24 = (max(var_24, 176));
    }
    var_25 = (max(var_25, var_0));
    #pragma endscop
}
