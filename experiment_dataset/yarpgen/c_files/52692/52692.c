/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_13 = (min(var_13, var_0));
        arr_3 [i_0] = (((arr_2 [i_0]) <= (arr_2 [i_0 + 1])));
        var_14 = (((arr_1 [i_0 + 1] [i_0 - 3]) || (arr_1 [i_0 + 2] [i_0 - 1])));
        arr_4 [i_0] = ((-64 ? (arr_2 [i_0 - 3]) : (arr_2 [i_0 - 1])));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 16;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_10 [i_1] = (((((var_3 ? -74 : var_0))) ? var_4 : ((var_10 ? -96 : (arr_5 [i_1] [i_1])))));
            var_15 *= (((arr_9 [i_1 - 1] [i_1 + 1]) ? 9007199254740991 : (arr_6 [i_2])));
        }
        arr_11 [i_1] = (arr_2 [i_1]);
    }
    var_16 = (-var_11 / ((((var_2 / var_7) < (var_2 ^ -80)))));
    #pragma endscop
}
