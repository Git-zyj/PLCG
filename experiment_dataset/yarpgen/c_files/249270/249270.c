/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;
    var_17 ^= (var_9 ? (var_4 - var_1) : (max(var_1, var_6)));
    var_18 -= ((-(var_15 - 471477136327251716)));
    var_19 &= ((((((~var_4) ? (~var_9) : var_12))) ? (!-6094428299650228040) : var_1));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 ^= (((arr_1 [i_0]) ? (max((max((arr_1 [i_0]), var_2)), var_8)) : (!1)));
        var_21 -= max(((471477136327251716 ? var_2 : ((((arr_1 [6]) ? (arr_0 [i_0] [i_0]) : var_8))))), ((max((arr_1 [i_0]), (arr_1 [i_0])))));
        var_22 &= (min((arr_0 [i_0] [i_0]), (max((~var_12), ((max((arr_1 [i_0]), (arr_1 [0]))))))));
        var_23 = (arr_1 [i_0]);
    }
    #pragma endscop
}
