/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((var_3 - ((((max(var_14, var_1))) ? (~var_0) : (~var_3))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = ((-var_9 ? -var_9 : (((var_11 <= (arr_1 [20] [i_0]))))));
        var_17 = (((((var_8 ? var_1 : var_11))) ? (arr_1 [i_0] [10]) : (((arr_1 [i_0] [i_0]) ? var_13 : var_9))));
        var_18 = (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_5 [i_1] = 1;
        var_19 = ((-((((max((arr_4 [i_1]), 230))) * -var_8))));
        arr_6 [i_1] = var_7;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_20 = (((((~(arr_8 [i_2])))) ? ((max((arr_8 [i_2]), ((((arr_7 [i_2] [i_2]) != var_1)))))) : ((max((max(var_14, (arr_7 [i_2] [i_2]))), (arr_8 [i_2]))))));
        arr_9 [i_2] = ((((var_12 + 2147483647) << (!var_4))));
        var_21 = ((((min(-2, (arr_8 [i_2])))) ? ((((var_7 ? var_1 : var_15)) - (((arr_7 [13] [i_2]) | var_14)))) : (((((min((arr_7 [i_2] [i_2]), var_0))) <= (arr_7 [i_2] [i_2]))))));
    }
    var_22 = ((((var_8 << (var_8 - 30666)))));
    var_23 = ((max(var_13, (~var_2))));
    var_24 = (((~var_10) ? -var_10 : ((1 ? 0 : (23 <= 1)))));
    #pragma endscop
}
