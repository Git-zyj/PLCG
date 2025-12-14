/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((min(var_8, (((((1 ? 38970 : 1158969301))) ? (var_5 + var_13) : (-1158969313 - 767743313))))))));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (~38988);
        var_15 = (((((903314650 ? 14 : 255))) ? (((arr_0 [1]) % (arr_1 [i_0 - 1]))) : ((((arr_1 [i_0]) >> (arr_1 [i_0 + 1]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_8 [17] [7] = (arr_0 [i_1]);
        var_16 = -767743313;
    }
    var_17 = (max(var_17, (((((max((max(var_2, var_1)), (162 != var_3)))) > ((max(1, var_0))))))));
    #pragma endscop
}
