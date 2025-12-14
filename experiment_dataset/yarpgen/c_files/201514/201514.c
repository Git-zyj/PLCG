/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (((((-(min(var_3, var_5))))) ? -var_11 : (-20 * -25)));
    var_19 = ((~(((((var_5 ? var_1 : var_16))) ? (max(2147483647, var_17)) : -25))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 &= ((-(arr_1 [i_0])));
        var_21 &= ((var_5 + (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {

        for (int i_2 = 4; i_2 < 9;i_2 += 1)
        {
            arr_8 [i_1] [i_2] = ((~(arr_5 [i_2])));
            arr_9 [i_1] [i_1] [i_2] = (max(((min((arr_6 [i_1] [i_1] [i_2 - 2]), var_10))), 3552943040));
            arr_10 [i_1] [i_1] &= (max((((arr_4 [i_1 + 3] [i_2 + 1]) * (((arr_7 [i_1]) ? 3552943040 : 13466172331806739888)))), ((max((arr_3 [i_1 + 1]), (arr_2 [i_1 + 2] [i_2 + 1]))))));
            arr_11 [i_1] [i_1 - 1] [i_1] &= var_8;
        }
        /* vectorizable */
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            var_22 = ((3548457267483035996 > (arr_6 [i_3] [3] [i_1])));
            var_23 = (arr_3 [i_3]);
            var_24 &= ((((742024258 == (arr_13 [i_1] [i_1]))) ? -0 : ((~(arr_3 [i_3])))));
        }
        var_25 = (-(arr_2 [i_1 + 3] [i_1 - 1]));
    }
    var_26 = (min(var_26, 88));
    #pragma endscop
}
