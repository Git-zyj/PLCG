/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((-(!var_6))), var_11));
    var_16 ^= (min((((((min(var_12, 246))) || var_11))), (!var_1)));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = ((-(((arr_1 [i_0]) ^ (arr_1 [i_0])))));
        arr_4 [i_0] = ((var_11 != (((min((arr_0 [i_0]), 48879)) ^ (((!(arr_1 [13]))))))));
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((((((min(var_12, (arr_0 [1]))) - var_9))) ? (max((arr_2 [i_1 + 1]), (arr_5 [i_1 + 1] [i_1 - 3]))) : (((32761 ? var_11 : (arr_2 [i_1 - 2]))))));
        arr_8 [i_1] = ((~((min(-15097, 0)))));
        arr_9 [i_1] [i_1] = var_6;
        arr_10 [i_1] = (((!-1900999068) >> (((~var_10) + 147))));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 9;i_2 += 1) /* same iter space */
    {
        var_17 = (-9223372036854775807 - 1);
        var_18 = ((((((arr_6 [i_2 - 2]) | 246))) ? ((((arr_12 [7]) ? (arr_0 [2]) : var_0))) : var_5));
    }
    for (int i_3 = 3; i_3 < 9;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] [i_3] = ((~((+(((arr_1 [i_3 - 1]) ? (arr_2 [i_3 + 1]) : (arr_6 [i_3])))))));
        var_19 &= (((((~((242 ? var_9 : (arr_11 [3] [3])))))) || (!41189)));
        var_20 = (max(var_20, (arr_12 [i_3])));
        var_21 = 15608240753407992493;
    }
    #pragma endscop
}
