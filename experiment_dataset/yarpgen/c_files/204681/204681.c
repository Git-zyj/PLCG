/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((1 % (~var_9)))) ? var_7 : var_7));
    var_15 = ((+((-138 ? (var_12 - var_0) : ((17874347441594346169 ? -82 : 127))))));
    var_16 = var_13;

    for (int i_0 = 1; i_0 < 8;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((!((((arr_1 [i_0 - 1]) ? 138 : (arr_0 [i_0 - 1]))))));
        var_17 ^= (((((arr_1 [i_0 + 2]) ? (arr_1 [i_0 + 2]) : (arr_0 [i_0 + 1]))) % ((((((arr_0 [i_0]) - var_8))) ? (max((arr_1 [i_0]), (arr_1 [i_0]))) : (arr_0 [i_0 + 1])))));
        arr_3 [i_0] = (max((max((((arr_0 [i_0]) + (arr_0 [i_0]))), (((arr_1 [6]) - (arr_0 [i_0]))))), (((arr_1 [i_0]) - (max((arr_1 [i_0]), (arr_1 [i_0])))))));
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1) /* same iter space */
    {
        var_18 ^= (max((((arr_1 [i_1 + 1]) ? (((arr_4 [i_1 + 1]) & (arr_4 [i_1]))) : (arr_0 [i_1 + 2]))), ((((arr_1 [i_1]) ? var_13 : (arr_1 [i_1 - 1]))))));
        arr_7 [i_1] [i_1] = (arr_6 [i_1] [i_1]);
    }
    for (int i_2 = 1; i_2 < 8;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] [i_2] = (((((((((arr_1 [i_2]) > (arr_5 [i_2])))) / 117))) * ((((16953 / (arr_4 [i_2]))) << ((((max(var_0, (arr_0 [3])))) - 6268))))));
        var_19 = var_2;
        arr_11 [i_2] = (arr_4 [i_2]);
        arr_12 [i_2] = min(((((-(arr_1 [i_2]))) << (((arr_9 [i_2]) ^ (arr_9 [i_2]))))), ((min((arr_0 [i_2 + 1]), (arr_6 [i_2] [i_2 + 2])))));
        var_20 = (max(var_20, ((((((!(arr_8 [7])))) - (((arr_5 [i_2 + 1]) ? ((118 * (arr_0 [i_2]))) : (((arr_6 [i_2] [2]) >> (((arr_5 [i_2]) - 236)))))))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_21 = (((arr_14 [i_3]) == (arr_14 [i_3])));
        arr_15 [i_3] = (arr_14 [i_3]);
    }
    #pragma endscop
}
