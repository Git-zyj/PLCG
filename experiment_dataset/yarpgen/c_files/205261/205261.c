/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = var_8;
        var_18 = ((+(((arr_0 [i_0] [3]) ? var_11 : ((var_15 ? 14708467836012948076 : -105))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_4 [i_1] = (arr_3 [i_1] [i_1]);
        var_19 = (arr_2 [i_1]);
        var_20 = min(0, (arr_2 [i_1]));
        var_21 = ((((max(14061, var_15))) ? (((!(~var_15)))) : (!1)));
        var_22 = 51474;
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_23 = (-9223372036854775807 - 1);
        var_24 = (max(var_24, ((~((+(((arr_2 [i_2]) - var_1))))))));
    }
    var_25 = 14056;
    #pragma endscop
}
