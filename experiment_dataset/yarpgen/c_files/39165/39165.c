/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= ((~((var_8 ? var_1 : var_0))));
    var_11 = (((((((65415 ? -15025 : var_8))) ? var_6 : var_9)) / (((((max(1, var_0))) << (((var_4 | var_7) - 239)))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0]) ? var_3 : (((arr_0 [i_0] [i_0]) ? var_9 : (arr_0 [i_0] [i_0])))));
        var_12 = (arr_0 [i_0] [i_0 - 1]);
        var_13 = (((arr_1 [i_0]) ? var_8 : (arr_1 [i_0])));
        var_14 = ((60822 << (60822 - 60807)));
    }
    var_15 = 60822;
    var_16 = var_2;
    #pragma endscop
}
