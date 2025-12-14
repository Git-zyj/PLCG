/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((~12555) + var_10));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 |= (~var_9);
        arr_3 [i_0] = var_6;
        arr_4 [i_0] [i_0] = var_0;
        var_18 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            var_19 = 3;
            arr_10 [i_1] [i_1] [i_1] = ((var_15 ? (((((var_9 ^ (arr_9 [i_1] [i_2 + 1])))) ? (~var_14) : ((~(arr_7 [i_1] [i_1]))))) : ((((arr_7 [i_2 - 1] [i_2 - 1]) >= (~1))))));
        }
        /* vectorizable */
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            arr_14 [i_1] = (arr_1 [4]);
            arr_15 [i_1] = (((((var_11 ? (-32767 - 1) : var_1))) ? ((((arr_0 [i_3 - 1]) == var_1))) : (arr_1 [0])));
            var_20 += (12557 >= 46922);
        }
        var_21 = (~12555);
    }
    #pragma endscop
}
