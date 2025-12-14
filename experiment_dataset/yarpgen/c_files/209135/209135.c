/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_1;

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_12 = (min(((~((var_6 >> (((arr_0 [13]) - 2744800039)))))), (min((min(2460055396, (arr_1 [i_0]))), (~var_3)))));
        var_13 = (arr_1 [i_0]);
        var_14 = (((((((((arr_0 [i_0]) ? var_8 : (arr_1 [i_0])))) ? (arr_1 [i_0 - 1]) : (((arr_1 [i_0 - 1]) ? (arr_2 [17]) : 2649796691))))) ? ((2460055399 * (arr_2 [i_0 + 1]))) : ((~((1731332270 ^ (arr_0 [i_0 - 2])))))));
    }
    for (int i_1 = 1; i_1 < 7;i_1 += 1)
    {
        var_15 = ((!((((((var_9 + 2147483647) >> (var_9 + 126)))) != (((arr_4 [2]) ? 13307918534217578954 : var_3))))));
        var_16 = ((min((((~(arr_0 [i_1 + 1])))), (arr_4 [i_1 - 1]))) ^ ((((((min(21234, 1))) && (2460055420 <= 113))))));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_17 = (arr_2 [i_2]);
        var_18 = var_0;
    }
    for (int i_3 = 3; i_3 < 17;i_3 += 1)
    {
        var_19 -= (arr_11 [i_3]);
        var_20 = ((~((((((arr_1 [i_3]) ? (arr_1 [i_3]) : 10703401559303139657))) ? (((((arr_1 [i_3]) > (arr_0 [i_3]))))) : var_2))));
        arr_12 [i_3] [i_3 - 3] = 39180;
    }
    var_21 = (min(var_21, (((var_1 ? ((min((~var_3), (((188 ? 112 : 0)))))) : (((((127 ? var_10 : 95))) ? -113 : var_10)))))));

    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_16 [i_4] = (((((((arr_15 [i_4]) > (arr_1 [i_4]))))) & ((0 % (arr_13 [i_4])))));
        var_22 = 55740;
        arr_17 [i_4] [i_4] = var_6;
        arr_18 [i_4] [i_4] = (((arr_14 [i_4] [i_4]) > (((arr_15 [i_4]) ? var_2 : var_1))));
    }
    #pragma endscop
}
