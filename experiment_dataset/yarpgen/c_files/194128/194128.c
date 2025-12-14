/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = (min(var_12, (((!(arr_1 [i_0]))))));
        arr_3 [3] [8] = (((2976191563 + 2147483647) >> ((((var_10 ? var_4 : 3036516921796496543)) - 951594326))));
        var_13 = (min(var_13, ((((1318775732 ? 134217727 : 2976191579)) & 979))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_14 = (((((-(min((arr_5 [i_1] [0]), var_11))))) ? (((max(var_6, var_6)))) : ((+(min((arr_4 [i_1]), var_9))))));
        var_15 |= (--7344315953538256152);
        var_16 = ((((((arr_4 [21]) * ((1318775753 ? (arr_5 [i_1] [i_1]) : (arr_4 [i_1])))))) ? (((arr_5 [19] [i_1]) ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [5]))) : (((((-8393836072760116950 | (arr_4 [i_1])))) / ((2 ? 2005535344 : (arr_5 [i_1] [i_1])))))));
        arr_6 [i_1] = ((~(((arr_5 [i_1] [i_1]) % (18446744073709551615 & var_6)))));
    }
    var_17 = var_4;
    var_18 = var_10;
    #pragma endscop
}
