/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= ((~(((((var_5 ? var_9 : var_8)) > var_0)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_11;
        var_15 = var_4;
        arr_3 [i_0] = (((~var_12) ? (((arr_0 [i_0]) % (arr_1 [i_0 + 1]))) : (arr_0 [i_0 + 2])));
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        var_16 *= ((arr_5 [i_1 - 2]) * (!31));
        var_17 = (max(var_17, ((((arr_4 [i_1 - 1]) | (arr_4 [i_1 - 2]))))));
        arr_6 [i_1] = ((-519244749 / ((~(arr_0 [i_1 - 1])))));
        arr_7 [i_1] = (((((-(min((arr_0 [i_1 - 2]), (arr_1 [i_1])))))) ? (((min((arr_5 [i_1 - 1]), ((((arr_5 [i_1 - 2]) < var_9))))))) : ((-(arr_1 [1])))));
        arr_8 [i_1] = (arr_4 [i_1 - 1]);
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = (((((519244750 >> (var_10 + 37)))) < (((((~(arr_4 [i_2])))) | (((arr_1 [1]) ^ 3262508430))))));
        var_18 ^= 1129477564;
    }
    #pragma endscop
}
