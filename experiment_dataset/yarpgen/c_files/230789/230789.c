/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 226;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 = 17361191199347004684;
        arr_2 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_17 = (max(var_17, ((((arr_1 [i_1]) ? (arr_1 [i_1]) : ((~(arr_1 [i_1]))))))));
        arr_5 [i_1] = (max((((~(6580466914953133742 == 101)))), (min(129, (arr_1 [i_1])))));
        var_18 = var_14;
    }
    for (int i_2 = 3; i_2 < 23;i_2 += 1)
    {
        arr_8 [i_2] = max(1085552874362546935, (((!((((arr_6 [i_2 - 1]) ? (arr_6 [i_2]) : 182)))))));
        arr_9 [i_2] = (~var_3);
        var_19 ^= min((((3745015681 | (!4294967295)))), (((arr_6 [i_2]) - (max((arr_6 [i_2 + 1]), 144115188075855871)))));
        var_20 = (max(var_20, (((-((max((((!(arr_6 [i_2])))), 155))))))));
    }
    #pragma endscop
}
