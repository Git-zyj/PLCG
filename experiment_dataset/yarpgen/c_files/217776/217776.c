/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_18 ? (min(var_8, (min(var_13, var_1)))) : ((var_17 ? var_6 : 68719476735))));
    var_21 = var_13;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_22 = (min(var_22, (((~(max((~6285820813202649357), (arr_0 [i_0]))))))));
        var_23 = (max(var_23, 10586475075465127042));
        var_24 = (((((arr_1 [i_0] [i_0]) - (arr_0 [i_0]))) - (max((arr_1 [i_0] [i_0]), (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = (max((arr_1 [i_1] [i_1]), (arr_0 [i_1])));
        var_25 ^= ((((((~10586475075465127047) >> (var_19 + 119)))) ? (((arr_2 [24] [i_1]) ? 2033089352 : ((10586475075465127040 << (48778 - 48720))))) : ((max((arr_0 [i_1]), (arr_0 [i_1]))))));
    }
    var_26 = (max(var_26, (((!(-var_5 * -636))))));
    #pragma endscop
}
