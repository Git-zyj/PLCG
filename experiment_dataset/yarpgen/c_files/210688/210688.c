/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;
    var_18 = (!var_2);

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_19 = (((-var_10 + 9223372036854775807) >> (((((11883779919187065698 ? (arr_0 [i_0] [i_0]) : var_12))) ? (!11883779919187065698) : (~var_7)))));
        var_20 = (var_0 <= 4);
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        var_21 = var_10;
        var_22 = var_4;
        var_23 = 16;
    }
    var_24 ^= (var_1 % var_3);
    #pragma endscop
}
