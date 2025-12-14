/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-1 ? 1 : 1906373805753115630));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        var_14 = (((arr_0 [i_0] [i_0]) / (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_15 = min(6750127409370603844, (((-1 ? (((arr_3 [6]) ? -620337580050106511 : (arr_4 [i_1]))) : ((((arr_3 [i_1]) + (arr_3 [i_1]))))))));
        var_16 -= (((((arr_3 [i_1]) ^ 2147483635)) / ((~(arr_4 [i_1])))));
    }
    #pragma endscop
}
