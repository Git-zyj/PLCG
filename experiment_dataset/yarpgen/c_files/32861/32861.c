/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = max((((max(var_3, var_7)) * 0)), var_10);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 += (max((((((var_10 ? var_8 : var_16))) ? (max(65528, var_0)) : (~var_15))), (((-17141 > (var_1 & var_1))))));
        arr_3 [i_0] = (((((65531 & var_3) || var_11)) ? var_17 : var_10));
    }
    for (int i_1 = 4; i_1 < 18;i_1 += 1)
    {
        var_20 = (max(var_20, (((((max(var_9, 0))) * (max(var_13, 16126608781796454062)))))));
        var_21 = (max(6456509845101792051, 17140));
    }
    var_22 = (min(var_22, var_13));
    #pragma endscop
}
