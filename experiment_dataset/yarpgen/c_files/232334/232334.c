/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!1);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = 1;
        var_16 = ((+((1 ? var_5 : (((arr_0 [i_0]) ? (arr_1 [18] [i_0]) : 1))))));
        var_17 = (((~1) ? (((((((arr_0 [i_0]) ? var_9 : (arr_1 [0] [i_0])))) ? (((~(arr_1 [i_0] [i_0])))) : (((arr_1 [i_0] [i_0]) | 9))))) : 1));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            var_18 = (((~10) / (arr_0 [11])));
            var_19 = (arr_1 [i_1 + 1] [i_1 + 1]);
            var_20 = 65535;
        }
    }
    var_21 = (min(((var_3 < (min(var_13, 1)))), (((((var_3 ? var_7 : var_0))) || (28 >= var_8)))));

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_22 &= ((~(min(((var_3 ? 4294967276 : (arr_1 [i_2] [i_2]))), 1))));
        var_23 = (((((~(arr_4 [i_2])))) ? (((((~(arr_2 [i_2] [i_2])))) ? (arr_2 [i_2] [i_2]) : (((arr_0 [i_2]) & (arr_5 [0]))))) : var_9));
    }
    for (int i_3 = 2; i_3 < 17;i_3 += 1)
    {
        var_24 = ((((((169 ? 1152921504606846976 : 17293822569102704640)) / (((var_6 ? (arr_2 [i_3] [3]) : 2823275063)))))) ? ((-(arr_10 [14] [i_3]))) : (((arr_0 [i_3 + 1]) ? (arr_0 [i_3 - 2]) : (arr_0 [i_3 + 2]))));
        var_25 = ((+((max(((min((arr_2 [i_3 - 2] [i_3]), 0))), var_5)))));
        var_26 = (arr_6 [i_3] [i_3 - 1]);
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 21;i_4 += 1)
    {
        var_27 += ((1 ? (((arr_12 [i_4]) ? 4070089637517945833 : (arr_1 [i_4] [i_4]))) : (arr_12 [i_4 - 2])));
        var_28 = (4294967281 ? 20 : 32768);
    }
    #pragma endscop
}
