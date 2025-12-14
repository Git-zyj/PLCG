/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= ((((((max(var_14, var_7)) - var_15))) ? ((var_7 ? 1131228329 : ((var_9 ? var_10 : var_15)))) : (((3163738966 ? ((max(var_12, 1131228329))) : (min(var_13, var_11)))))));
    var_17 = -273600481;

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = var_5;
        var_18 = (min(var_18, ((max(((-4110969277503731287 ? (arr_1 [i_0 - 1] [i_0 - 2]) : (arr_0 [i_0 + 1]))), (arr_1 [i_0] [i_0]))))));
    }
    #pragma endscop
}
