/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 |= (~var_7);
    var_12 = (~var_3);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 ^= 227;
        var_14 = (min(var_14, ((!(((-(arr_1 [i_0]))))))));
        var_15 = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_16 *= (arr_3 [i_1 + 3] [i_1 + 4]);
        arr_4 [i_1] = ((((((84 == (arr_2 [i_1] [i_1]))))) < (arr_3 [i_1] [i_1 + 1])));
        var_17 = (arr_2 [i_1 + 4] [i_1 + 1]);
    }

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_18 = min(((-((61 ? 89 : var_3)))), var_7);
        var_19 = (max(var_19, ((((max((arr_3 [i_2] [i_2]), ((((arr_2 [22] [1]) && (arr_0 [i_2] [i_2]))))))) && (arr_1 [i_2])))));
    }
    #pragma endscop
}
