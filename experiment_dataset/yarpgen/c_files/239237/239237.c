/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;
    var_19 = (min(var_19, (((((((var_1 ? var_17 : var_2)))) << (((var_8 ^ 1398776096) - 2896176656)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 -= (max((((238 && (((var_13 ? -88 : (arr_0 [22]))))))), (((((var_12 ? (arr_0 [10]) : (arr_0 [6])))) ? var_3 : (~var_1)))));
        arr_4 [i_0] = (((min((min(var_7, 18446744073709551615)), -20)) <= var_13));
        arr_5 [i_0] = ((((1766990030510492645 || (arr_2 [i_0])))));
    }
    var_21 *= var_16;
    var_22 = (min(var_22, -var_7));
    #pragma endscop
}
