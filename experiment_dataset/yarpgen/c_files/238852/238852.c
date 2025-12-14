/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_10 = ((((((var_5 ? var_4 : var_1)) + 9223372036854775807)) >> (-771933652 || 9020715067056139349)));
        var_11 = arr_1 [i_0] [i_0];
        arr_2 [i_0] [i_0] = var_3;
        arr_3 [i_0] [i_0] = var_0;
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_12 = (((arr_0 [i_1 - 1]) - (((((12006976931642578489 ? var_6 : (arr_6 [i_1])))) ? (((arr_4 [i_1 - 1]) ? 0 : (arr_6 [i_1]))) : (((arr_5 [i_1] [i_1]) ? (arr_5 [i_1 + 1] [i_1]) : var_6))))));
        var_13 = (min(var_13, ((min(((var_3 ? (min(5876687875177402315, var_5)) : (((max((arr_4 [i_1]), -84)))))), (arr_6 [12]))))));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_14 = (max(var_14, (((var_8 | (~var_4))))));
        var_15 = 59321;
        var_16 = (min(var_16, (arr_7 [i_2] [i_2])));
    }
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        arr_12 [i_3] = (arr_0 [i_3 + 1]);
        var_17 = (max(var_17, (arr_10 [i_3 - 1])));
        arr_13 [i_3] [i_3] = ((10 ? ((-(arr_7 [i_3 - 1] [i_3 - 1]))) : ((~((max(29286, var_2)))))));
        arr_14 [i_3] |= (arr_0 [i_3]);
    }
    var_18 = (~var_6);
    var_19 &= (var_3 ? var_4 : var_7);
    var_20 = (max(var_20, ((((((((var_6 ? var_4 : var_0))) ? (!var_7) : 109)) - var_3)))));
    var_21 &= var_6;
    #pragma endscop
}
