/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((min(var_6, var_8)) ? ((var_2 ? var_4 : var_5)) : ((var_14 >> (var_13 - 3051799705376902217)))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((min(((var_10 ? var_13 : var_5)), (~var_0))) + (((11 == 11) ? (((min(31301, 28)))) : (min(var_13, var_0))))));
        var_16 = (min(var_16, (((var_7 ? (245 == -26) : ((((!32767) < 702))))))));
    }
    var_17 = (((34 - var_12) ^ -var_6));
    #pragma endscop
}
