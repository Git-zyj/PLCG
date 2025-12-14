/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_9;
    var_17 += ((var_13 ? var_15 : ((var_3 ? (var_1 != var_10) : var_0))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {
            var_18 -= (arr_1 [i_0]);
            arr_4 [i_0] [i_1] = 800436208;
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_19 ^= 96;
            var_20 = (((arr_5 [i_2]) - ((5349548402379170479 ? 1964377017 : 4815450224145170549))));
            var_21 = (min(var_21, (0 / var_12)));
            arr_8 [i_2] [i_2] = var_14;
            var_22 = (max(var_22, (arr_3 [i_0] [i_0])));
        }
        arr_9 [i_0] = var_0;
        var_23 = ((-(arr_0 [i_0] [i_0])));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        var_24 = var_14;
        arr_14 [i_3] [i_3] = (~var_2);
        var_25 = min(var_1, (54096 >= 0));
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
    {
        var_26 ^= 1;
        var_27 = 240;
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_20 [i_5] = (((!((max(6946677226112194568, -1221798483872105100))))));
        var_28 = var_13;
        var_29 = var_6;
    }
    #pragma endscop
}
