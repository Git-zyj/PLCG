/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((var_2 > 1) % (min(var_9, (-32767 - 1))))));
    var_12 = -117;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 = (((-32767 - 1) * 1));
        var_14 = 13018;
        var_15 = arr_1 [i_0];
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_16 = (~1);
            arr_9 [i_1] [i_1] = ((!(arr_3 [i_1])));
            var_17 = (((arr_8 [i_2]) ? (arr_0 [i_2]) : (arr_3 [i_2])));
            var_18 &= ((~(arr_5 [i_1] [i_2])));
            var_19 = (((0 % 1) >> ((((var_5 ? 32767 : var_9)) - 32751))));
        }
        for (int i_3 = 4; i_3 < 13;i_3 += 1)
        {
            arr_14 [i_3] = ((-12720 ? 0 : (-9223372036854775807 - 1)));
            var_20 = var_6;
        }
        var_21 = ((~((14054 ? (arr_13 [0] [i_1] [i_1]) : (-32767 - 1)))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_19 [i_4] &= ((var_3 ^ ((var_9 / (arr_15 [i_4])))));
        var_22 &= var_1;
        var_23 = 1;
    }
    var_24 = ((((var_4 ? (((var_10 ? var_9 : var_1))) : var_10)) % -var_3));
    var_25 = var_9;
    #pragma endscop
}
