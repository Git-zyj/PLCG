/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_16 = ((((max((arr_2 [i_0 + 1]), (124 - -1109472710)))) - (min(((((arr_0 [i_0] [i_0]) - 2218268707))), -2786142657079913476))));
        var_17 = 1;

        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            arr_5 [i_0] [i_0 + 1] = ((((1881938725 ? (~var_12) : (arr_3 [i_0 + 1] [i_0 + 1]))) / (arr_3 [i_1] [i_1 - 3])));
            arr_6 [i_0] [i_0] [i_1 - 3] = ((+((-17438 ? (2786142657079913452 | 17443) : ((max((-9223372036854775807 - 1), -17438)))))));
            var_18 = (-17438 | 11832);
        }
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_19 = (((var_11 / -126) ^ 1));
        arr_9 [i_2] = (max(24, (max((~var_13), -28676754))));
        var_20 *= (((arr_1 [i_2]) ? (!1936180150382542888) : var_14));
    }
    #pragma endscop
}
