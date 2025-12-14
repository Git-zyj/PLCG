/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (((((max(((var_14 ? var_9 : var_1)), var_1)) + 2147483647)) >> (var_9 + 42)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = var_14;
        var_21 = (((((var_0 ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? ((+(max((arr_0 [1]), (arr_0 [i_0]))))) : var_0));
        arr_3 [i_0] = (-9955 ? (min((arr_1 [8]), ((-(arr_1 [11]))))) : ((var_11 - (((arr_1 [i_0]) ? 3840 : (arr_1 [0]))))));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_22 = ((((((arr_5 [i_1]) ? (arr_4 [11] [i_1]) : (max((arr_4 [i_1] [i_1]), var_5))))) ? var_11 : (min((((arr_0 [12]) ? (arr_5 [3]) : 4096)), (arr_0 [i_1 - 1])))));
        var_23 = var_6;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_24 += (arr_7 [i_3]);
            arr_10 [i_2] [0] = (var_0 ? var_10 : ((((arr_8 [i_2] [i_2]) ? (arr_6 [i_2] [14]) : (arr_8 [i_2] [i_2])))));
            var_25 = (max(var_25, (arr_9 [i_2])));
            arr_11 [i_2] [i_2] [3] = -1;
        }
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            arr_15 [1] [1] = -var_5;
            arr_16 [i_4] [17] [i_2] = (((((-1513 ? -7 : -90))) ? (((arr_7 [i_4]) ? var_10 : 64)) : var_19));
            var_26 += (arr_12 [i_2] [i_2] [i_4 + 2]);
            var_27 -= ((-28 ? 17 : (arr_9 [i_4 + 2])));
        }
        arr_17 [i_2] = -104;
        var_28 = (((arr_12 [i_2] [i_2] [i_2]) ? (arr_7 [i_2]) : (arr_6 [i_2] [i_2])));

        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            var_29 *= arr_14 [i_2];
            arr_22 [i_2] [i_2] = var_4;
        }
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            var_30 = (arr_9 [i_2]);
            var_31 -= ((((20 ? var_9 : var_10)) <= (((14988 ? var_0 : (arr_14 [i_6]))))));
            arr_25 [20] [20] [i_6] = (arr_8 [i_6 - 1] [i_2]);
            arr_26 [15] [11] [1] = -3840;
        }
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            arr_29 [i_7] [10] = (((((var_16 ? -32 : 0))) + (arr_9 [8])));
            arr_30 [0] [i_7] = var_5;
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        arr_33 [19] [i_8] = (((arr_31 [i_8] [8]) ? (arr_31 [i_8] [1]) : (3904845798 && -4)));
        arr_34 [i_8] [i_8] = ((var_14 ? (arr_31 [i_8] [i_8]) : (arr_32 [i_8] [i_8])));
        arr_35 [23] = (arr_31 [i_8] [i_8]);
    }
    #pragma endscop
}
