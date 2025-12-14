/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_10 = (((arr_0 [i_0 + 3]) ? ((((arr_1 [i_0 + 3] [i_0 - 2]) && 18446744073709551615))) : (arr_1 [i_0 + 1] [i_0 + 1])));
        arr_4 [i_0] = (((!0) ? (!-6) : (((arr_0 [i_0]) ? ((min(var_0, var_7))) : 52802))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_11 = (max((((var_4 << (75 - 75)))), (arr_6 [i_1])));
        arr_8 [i_1] = (arr_0 [i_1]);
        var_12 = (arr_1 [7] [i_1]);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_13 = (arr_1 [i_2] [13]);
        arr_11 [i_2] = (min((arr_2 [i_2]), 0));
        var_14 = (min(var_14, (arr_2 [i_2])));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        var_15 *= ((0 < (arr_12 [i_3 - 1])));
        var_16 = (max(var_16, (var_9 - 0)));
        arr_14 [i_3 - 1] = (arr_3 [i_3 - 1]);
    }

    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {
        var_17 = ((((arr_3 [i_4]) ? (arr_3 [i_4]) : (arr_3 [i_4]))));
        var_18 = (min((max((arr_3 [i_4]), (arr_3 [i_4]))), (arr_3 [i_4])));
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {
        arr_21 [i_5] = (arr_19 [i_5]);
        var_19 = (min(var_19, (((-(arr_16 [i_5]))))));
    }
    var_20 = (min(var_20, ((min(var_0, (min((var_4 / 4294967295), var_7)))))));
    var_21 = ((2866138189 | (~var_4)));
    var_22 += (min(var_8, (var_3 ^ var_3)));
    #pragma endscop
}
