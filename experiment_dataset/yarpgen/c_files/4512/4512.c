/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    var_16 = ((var_4 + ((max(438022862, (var_10 & var_1))))));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_17 = min(var_6, (arr_1 [1] [i_0 + 1]));
        arr_2 [i_0] = ((((arr_1 [i_0 - 1] [i_0 - 1]) < (arr_1 [i_0 + 1] [i_0 + 2]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_18 = (arr_4 [i_1]);
        arr_5 [i_1] = (arr_3 [i_1] [i_1]);
        var_19 = ((-(arr_3 [i_1] [5])));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                arr_12 [i_4] = (~var_1);
                arr_13 [i_4] [i_3 + 2] [i_4] [i_4] = ((~(((arr_9 [i_3 - 1]) + ((~(arr_6 [i_2] [i_4])))))));
                var_20 = (min((arr_11 [i_4]), ((var_1 ? (((!(arr_4 [i_2])))) : (arr_11 [i_4])))));
            }
            arr_14 [i_2] = var_12;

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                var_21 -= ((arr_6 [i_2] [i_3 + 3]) < ((((arr_3 [i_2] [i_3]) > 222))));
                var_22 = (max(var_10, (arr_7 [i_3 + 3])));
                var_23 = (((((max(var_14, var_4))) ? (min((arr_16 [i_2] [i_3 + 3] [i_5]), var_4)) : (((127 ? (arr_10 [i_5] [i_5] [i_3] [i_5]) : var_8))))));
            }
        }
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            var_24 ^= (arr_9 [i_6]);
            var_25 = (arr_7 [i_2]);
        }
        for (int i_7 = 1; i_7 < 18;i_7 += 1)
        {
            arr_24 [i_7] [i_2] = (((((arr_23 [i_2]) && (arr_21 [i_7]))) ? 1212201325 : (arr_23 [i_7 - 1])));
            arr_25 [i_7] [10] = (max((((var_10 / (arr_16 [i_7 - 1] [i_2] [i_7])))), ((var_7 + (var_10 ^ 13)))));
        }
        arr_26 [i_2] = ((arr_20 [i_2] [i_2] [4]) & ((((min(48, var_10))) ? ((min(var_3, var_1))) : ((var_0 ? var_3 : (arr_16 [i_2] [8] [4]))))));
    }
    #pragma endscop
}
