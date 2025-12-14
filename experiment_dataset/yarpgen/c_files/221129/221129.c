/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -186;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [1] [i_0] = 54790;
        arr_4 [i_0] = 53;
        arr_5 [i_0] = 21900;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] = (((((-(arr_6 [i_1])))) * (((arr_7 [i_1]) ? ((((arr_7 [i_1]) << (9223372036854775807 - 9223372036854775800)))) : (arr_6 [i_1])))));
        arr_9 [i_1] = ((-(arr_6 [i_1])));
    }
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        var_11 += ((-(((!(arr_6 [i_2 + 2]))))));
        var_12 = -112;
        arr_13 [i_2] [i_2] = ((~((~(arr_12 [i_2 + 1])))));
        var_13 ^= ((~((+(((arr_7 [i_2 + 1]) ^ (arr_10 [i_2 + 1] [i_2])))))));
        var_14 = (arr_11 [i_2 - 1]);
    }
    var_15 = var_9;
    #pragma endscop
}
