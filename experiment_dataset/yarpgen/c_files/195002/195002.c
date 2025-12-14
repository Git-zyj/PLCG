/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_8 + (((max(var_7, -32))))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_17 = (max(var_17, (((((max(((1889254278 ? -7669406459689051410 : 44)), (((89 ? 179 : 1160970680)))))) ? (((((!(arr_0 [i_0 - 1] [i_0]))) ? ((((arr_0 [i_0 + 2] [i_0 + 3]) > 183907949297944549))) : var_1))) : (192 ^ 18262836124411607067))))));
        var_18 = ((max((arr_1 [i_0]), (0 < 103))));
    }
    for (int i_1 = 4; i_1 < 23;i_1 += 1)
    {
        var_19 ^= ((min((arr_2 [i_1 + 1]), 192)));
        var_20 = (max(var_20, (((((arr_3 [i_1 + 2]) ? (arr_3 [i_1 - 3]) : 63))))));
        arr_4 [i_1] [i_1] = (!45708);
    }
    var_21 = var_10;
    #pragma endscop
}
