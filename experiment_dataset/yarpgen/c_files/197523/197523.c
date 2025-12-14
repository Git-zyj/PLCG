/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= ((var_2 ? var_15 : ((((max(128, 1))) ? (12 + var_2) : (min(4595317042122088234, var_15))))));
    var_19 = (min(var_19, (((max((45187 >> 1), (((-14822 + 2147483647) >> (52298 - 52286)))))))));
    var_20 += (min((((((1 ? 20346 : 109)) | ((var_5 ? var_4 : var_2))))), ((138 ? 243 : 3932269211))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_21 = (max(var_21, ((((((var_8 ? 45071 : var_3))) ? ((~(arr_0 [i_0]))) : var_14)))));
        var_22 -= (max(74, -1020411834));
    }
    var_23 = var_3;
    #pragma endscop
}
