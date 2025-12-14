/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((var_10 ? var_12 : ((((-429692458 <= var_15) ^ ((1943 ? var_6 : var_6)))))));
    var_18 = 63601;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = ((~(arr_2 [i_0])));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_20 = ((((arr_1 [i_0]) ? ((max(var_2, var_11))) : (((0 >= (arr_6 [i_0] [i_0])))))));
            var_21 = -8;
            var_22 = ((!(((+(((arr_2 [i_0]) ? 1960 : (arr_0 [i_1]))))))));
            var_23 = (((~(arr_5 [i_1] [i_0] [i_0]))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_24 ^= (((arr_5 [i_0] [i_0] [i_2]) | (arr_5 [i_0] [i_0] [i_2])));
            arr_9 [i_2] [i_2] [i_0] = (((arr_5 [i_0] [i_0] [i_0]) <= 80));
            var_25 = ((-(arr_3 [i_2])));
            var_26 = (arr_0 [i_2]);
            arr_10 [i_0] [i_2] [i_2] |= ((!(((32767 ? (arr_6 [i_0] [i_0]) : var_5)))));
        }
        var_27 = 1937;
    }
    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {
        var_28 = (arr_12 [i_3] [i_3 - 1]);
        var_29 &= ((min((arr_12 [i_3 + 2] [i_3 - 1]), (((arr_11 [16]) - 0)))));

        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_30 = ((((20014 || (arr_11 [i_3])))));
            arr_17 [i_4] [i_3] [i_4] = (arr_14 [i_3 - 2] [i_4] [i_4]);
        }
    }
    var_31 = var_13;
    #pragma endscop
}
