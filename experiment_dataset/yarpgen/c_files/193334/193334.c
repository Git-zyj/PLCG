/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (var_7 < 32764);
        var_10 = (max((!1), (max((arr_0 [i_0 - 2]), (arr_1 [i_0 - 1])))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_11 = ((((var_5 ? (~var_6) : (max((arr_4 [i_1] [i_1]), (arr_3 [i_1] [16]))))) < (min(((var_4 * (arr_4 [i_1] [8]))), (((1 ? 1 : -1029861333)))))));
        var_12 += max(((((arr_3 [2] [2]) & (arr_3 [2] [i_1])))), ((~(((arr_4 [14] [14]) ? (arr_4 [1] [i_1]) : 4294967295)))));
    }
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        arr_7 [i_2 - 2] = var_7;
        arr_8 [i_2 - 2] = (max(((max(24752, (arr_5 [i_2 + 1] [i_2 + 1])))), -39));
        var_13 = ((var_1 ^ (((arr_3 [i_2] [i_2]) ? (arr_3 [i_2] [i_2]) : (-9223372036854775807 - 1)))));
    }
    var_14 = ((var_1 ? var_1 : (min(var_1, var_6))));
    #pragma endscop
}
