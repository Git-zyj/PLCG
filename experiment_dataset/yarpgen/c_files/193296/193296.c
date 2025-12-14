/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_7 ? (min(-var_9, var_5)) : var_17));
    var_21 = var_18;
    var_22 = var_16;

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_23 ^= ((402653184 ? ((var_5 % (11139 & 4512055140217214302))) : ((((104 < (((arr_1 [10]) % (arr_0 [i_0] [8])))))))));
        arr_3 [i_0] = (((max((arr_2 [1] [i_0]), (min(var_7, var_0)))) + -var_9));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_24 = (arr_0 [i_1] [i_1]);
        var_25 &= (arr_2 [4] [i_1]);
        var_26 = ((-(arr_4 [i_1])));
        var_27 -= -105;
    }
    #pragma endscop
}
