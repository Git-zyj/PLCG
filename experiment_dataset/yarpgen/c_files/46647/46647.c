/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    var_15 = var_5;
    var_16 = var_2;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 = (max(var_17, 335272012));
        var_18 += (!17415);
        var_19 = (min(var_19, ((((arr_0 [i_0]) << ((((((-17415 == (arr_0 [0]))) ? var_12 : (max((arr_0 [i_0]), var_8)))) - 11850675512600190605)))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_20 = (max(var_20, 72));

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_21 = ((1 ? (arr_5 [i_2] [i_2] [i_2]) : 49));
            arr_6 [i_1] [i_1] [i_2] &= (arr_3 [i_2]);
            var_22 = (((((min(57660, 1)))) | (((arr_4 [i_1] [i_1] [i_2]) ? (arr_4 [4] [i_2] [i_2]) : var_5))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_23 &= (((((1 ? 0 : 165))) ? (arr_2 [i_1]) : (16384 / 57660)));
            arr_9 [i_3] [i_3] [i_1] = (arr_7 [i_1] [i_1] [i_3]);
            var_24 = (arr_5 [i_1] [i_3] [i_3]);
        }
        arr_10 [i_1] [i_1] = (((((var_9 ? ((var_2 + (arr_7 [i_1] [i_1] [i_1]))) : 1))) ? ((var_12 << (var_1 - 6709320828206225963))) : (~var_10)));
        arr_11 [i_1] [i_1] = ((var_10 ? -84 : ((var_12 ? var_11 : 9651))));
    }
    #pragma endscop
}
