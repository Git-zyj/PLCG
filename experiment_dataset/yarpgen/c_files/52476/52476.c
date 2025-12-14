/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((max(1442950278, ((var_15 ? var_12 : var_12)))) + var_10));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_0 [i_0]) << (((~103) + 134))));
        var_17 = ((var_7 ? (((!(((153 ? (arr_0 [i_0]) : 2852017017)))))) : (((((var_14 ? (arr_0 [i_0]) : (arr_2 [i_0] [i_0])))) ? 2852017017 : ((max((arr_3 [i_0]), 240)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 *= var_4;
                    var_19 = (min((((((arr_7 [i_0]) ? var_13 : var_4)))), (((arr_8 [i_0] [i_0]) ? (((max((arr_2 [i_0] [i_1]), (arr_10 [i_0]))))) : (min(var_13, var_14))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_20 = (arr_11 [14] [6]);
        arr_14 [i_3] [i_3] = ((min(2852017018, ((6188159466605604190 ? var_14 : (arr_10 [i_3]))))));

        /* vectorizable */
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            arr_18 [i_4] [i_4 - 1] = (arr_2 [1] [i_4]);
            arr_19 [i_4] [i_4] = (((-(arr_12 [i_3]))));
            var_21 += (((((arr_9 [i_3] [i_4]) ? (arr_3 [i_3]) : var_10))) ? ((var_1 >> (((arr_11 [i_3] [i_3]) - 30)))) : var_12);
            arr_20 [i_4] [i_4] = arr_5 [i_4] [i_3];
        }
        for (int i_5 = 3; i_5 < 17;i_5 += 1)
        {
            arr_24 [10] [10] [i_5 - 3] = (((min(((max(255, 32767))), ((var_14 ? (arr_8 [i_5] [i_3]) : var_8)))) >> ((((~((~(arr_9 [18] [18]))))) - 2076286455))));
            arr_25 [0] = -var_0;
            var_22 = (max(var_8, (arr_3 [i_3])));
            var_23 -= (((~(((arr_15 [i_3] [i_3]) ? (arr_5 [i_5] [i_5 + 1]) : 13247555563199085783)))) >> (var_2 + 7262811731964079980));
        }
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        arr_30 [i_6] = ((((min((((arr_10 [i_6]) ? var_11 : var_1)), (!var_15)))) ? -var_12 : ((((max((arr_29 [i_6]), 1))) ? (arr_28 [2] [i_6]) : 153))));
        arr_31 [i_6] = ((((((((arr_9 [i_6] [i_6]) ? var_10 : (arr_1 [i_6])))) & (min(8783030157754971732, var_15)))) << (3456602085 - 3456602055)));
    }
    var_24 = (max(var_24, (~var_0)));
    var_25 = (var_14 & var_12);
    var_26 ^= var_12;
    #pragma endscop
}
