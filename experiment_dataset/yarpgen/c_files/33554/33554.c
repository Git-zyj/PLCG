/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = ((((-13023 ? 1309025455 : 0))) ? (!9223372036854775807) : (((arr_2 [i_0 + 1]) ? (arr_2 [i_0 - 3]) : 22668)));
        arr_4 [i_0] [i_0] = 15;
        arr_5 [i_0] = (min((min((arr_0 [i_0 + 1] [i_0]), var_5)), (((!(var_12 + var_6))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_11 [i_1] [i_2] [i_1] = (arr_8 [i_1]);
            var_17 *= (arr_10 [i_1] [i_2] [i_2]);
        }
        var_18 = ((+(((((arr_7 [i_1] [i_1]) >= (arr_0 [i_1] [i_1]))) ? ((var_13 << (var_15 - 1410676442))) : ((((arr_7 [i_1] [i_1]) ? var_7 : var_0)))))));
    }
    var_19 = var_1;
    var_20 = (var_16 % ((~(var_9 | var_13))));
    #pragma endscop
}
