/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 = (((max((arr_1 [i_0]), (arr_1 [i_0]))) % ((min((var_10 ^ var_18), ((max((arr_0 [i_0]), var_10))))))));
        var_21 = ((!((max(var_1, (arr_1 [i_0]))))));
        var_22 += ((!(((-(arr_1 [i_0]))))));
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] = ((~((-((-(arr_1 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_7 [i_1] = ((-12357189600134142469 % (((((var_1 ? 167 : var_14)) % (240 * 77))))));
        var_23 = (min(var_16, (min((max(var_10, var_4)), (~3140727835860296048)))));
    }
    var_24 &= ((var_5 ? var_11 : var_4));
    var_25 |= ((var_12 | ((max(var_9, (max(31136, var_10)))))));
    #pragma endscop
}
