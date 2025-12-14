/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_20 = (arr_1 [i_0] [i_0]);
        var_21 = ((~((-((-606944065 ? var_2 : (arr_0 [i_0])))))));
        var_22 ^= ((-(max((arr_1 [i_0 - 3] [i_0]), -606944042))));
    }
    var_23 = ((-(max(var_10, (var_16 ^ 417282523)))));
    var_24 = 47680;
    #pragma endscop
}
