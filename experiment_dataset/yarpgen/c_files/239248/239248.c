/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (max((((((max(673321309, (arr_0 [i_0])))) ? (max(-673321305, -673321310)) : var_15))), 6411726859187050323));
        var_17 = max((((-673321310 & var_11) >> (((min(2060813706, var_16)) - 2060813705)))), -1304404250);
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        arr_5 [i_1] = (((max((arr_4 [i_1 + 1] [i_1 + 1]), -673321298)) & (~var_14)));
        var_18 = 8191;
        var_19 = ((min(var_7, ((-(arr_4 [i_1] [i_1]))))));
        var_20 = (max(((min(var_11, 579))), (min((arr_3 [i_1 - 1]), -3321275112098974396))));
    }
    var_21 = var_11;
    var_22 = var_2;
    #pragma endscop
}
