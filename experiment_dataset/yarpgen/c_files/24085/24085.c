/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((min(((var_3 ? 13 : var_11)), (var_2 > var_13))) != ((var_11 ? (!-21) : ((var_4 ? 441483699 : var_10))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= (arr_1 [i_0]);
        arr_3 [i_0] = var_5;
        var_16 = (max(var_16, var_4));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_17 += ((~((-1033 ? (arr_5 [i_1] [i_1]) : (arr_4 [i_1] [i_1])))));

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_18 *= (((!11) >> (((((arr_7 [i_2]) ? ((var_10 ? (arr_4 [1] [5]) : var_12)) : (arr_5 [i_2] [i_2]))) - 4878257306596460338))));
            arr_8 [i_1] [i_1] &= -6;
            var_19 = (!-18353);
            arr_9 [i_2] [i_2] = (max((arr_4 [i_1] [i_2]), var_0));
        }
        var_20 = ((~((19 ? (arr_4 [i_1] [i_1]) : 111))));
        arr_10 [i_1] = (min(((max((!var_2), (arr_5 [i_1] [i_1])))), (~2535)));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_21 ^= ((-(arr_4 [i_3] [i_3])));
        var_22 = ((-((1298624261 ? 1017742119042861391 : var_2))));
        arr_15 [i_3] [15] = var_13;
    }
    var_23 = (min(var_23, 1013073839582772137));
    var_24 = (min(((~(min(var_0, var_9)))), var_5));
    var_25 = var_11;
    #pragma endscop
}
