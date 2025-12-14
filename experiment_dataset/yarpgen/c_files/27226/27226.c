/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((var_10 && var_0), var_6));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        var_15 = ((min(63, 3727139560)));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_16 += (max(((((((arr_0 [3]) && var_10)) && (((var_1 ? 3745514543260856497 : (arr_4 [i_1]))))))), ((((var_8 ? (arr_4 [i_1]) : 3745514543260856497)) + (((-32755 ? (arr_4 [i_1]) : (arr_4 [i_1]))))))));
        var_17 = (arr_3 [i_1]);
    }

    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        arr_7 [i_2] = (arr_6 [i_2] [i_2 - 1]);
        arr_8 [12] = (((min((max(var_11, var_4)), (arr_5 [i_2 - 2] [i_2]))) ^ (!3727139560)));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = arr_9 [i_3] [i_3];
        var_18 = (max(var_18, 3745514543260856497));
    }
    var_19 = var_6;
    #pragma endscop
}
