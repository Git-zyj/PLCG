/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_8, var_4));
    var_13 = (min(201795077366195374, var_8));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [1] = 17328448901502501383;
            arr_6 [i_0] [12] [i_1] = (min((arr_4 [3] [i_1]), var_5));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_14 = ((((max((arr_3 [i_0 - 2]), (arr_3 [i_0 - 2])))) ? (arr_1 [i_0 + 2] [i_0 + 1]) : (arr_3 [i_0 + 2])));

            for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
            {
                arr_13 [i_0 + 1] [i_2] = (((((1016517603 >= (-9223372036854775807 - 1)))) & ((((arr_9 [i_0 - 1]) <= (arr_0 [11] [i_3]))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        {
                            var_15 += ((((((arr_0 [i_0 + 2] [i_0 + 2]) ? (arr_0 [i_0 + 1] [i_0 - 1]) : (arr_0 [i_0 - 1] [i_0 - 1])))) ? (var_8 | var_8) : ((((!(arr_0 [i_0 - 1] [i_0 + 1])))))));
                            var_16 = var_8;
                            arr_19 [i_0] [i_5] [1] [i_5] [i_5] [i_4] = (arr_15 [i_0 + 2] [i_5 + 4] [i_5] [8]);
                        }
                    }
                }
                var_17 ^= arr_8 [i_0] [i_2] [6];
            }
            for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
            {
                var_18 = (min(var_18, (((~(arr_4 [i_0] [i_0 - 1]))))));
                arr_23 [1] [1] = var_8;
                arr_24 [i_0] [i_0] [i_6] = var_9;

                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    var_19 += 1;
                    var_20 ^= (max(((201795077366195374 & (arr_15 [i_0 + 2] [i_0] [i_6] [i_7]))), 13));
                    arr_27 [i_0] [1] [i_6] [i_7] = var_11;
                }
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    arr_30 [i_0] [i_8] [i_6] = (max((max((arr_9 [i_0 + 1]), 536854528)), ((min((arr_8 [i_0 + 1] [i_0] [i_0]), (arr_12 [i_0] [12] [i_0]))))));
                    var_21 = (!150);
                    arr_31 [8] = 163;
                }
            }
            var_22 = (((((3059136705 ? 5 : 1))) ? ((((arr_9 [i_0 + 1]) != (arr_14 [i_0] [4] [i_0 + 2] [i_2] [i_0 + 2])))) : (arr_9 [i_0 - 2])));
        }
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            var_23 = (max(((246 ? -536854536 : 1)), 390460541));
            var_24 = ((((min(22449, 255525011))) ? 536854535 : (max(var_11, ((-536854555 ? 1 : 11987135193548534693))))));
            arr_35 [7] [i_9] [11] = (arr_18 [i_0 - 1] [i_0 - 1] [0] [i_0 + 2] [i_0 + 1] [i_0] [i_0 - 1]);
            arr_36 [i_0] = var_7;
        }
        var_25 = ((93 ? (((-191897123 ? -124 : 1))) : (arr_16 [i_0] [i_0] [i_0 - 2] [i_0] [i_0])));
        arr_37 [i_0] = ((((min((arr_16 [i_0 - 2] [i_0 + 1] [i_0] [i_0 - 2] [i_0]), (arr_16 [i_0 - 1] [i_0] [i_0] [i_0] [1])))) ? (((arr_16 [i_0 + 1] [i_0 + 1] [0] [i_0 + 1] [i_0]) ? var_7 : (arr_16 [i_0 + 1] [i_0] [i_0] [i_0] [i_0]))) : (-9223372036854775807 - 1)));
    }
    for (int i_10 = 4; i_10 < 21;i_10 += 1)
    {
        arr_40 [i_10] = 8796092891136;
        arr_41 [i_10 + 2] [17] = (((((((2 ? (arr_38 [i_10] [i_10]) : var_4))) ? -var_7 : (80 <= 11))) <= (((((arr_39 [i_10] [i_10]) ? (arr_39 [i_10] [i_10]) : (arr_38 [i_10] [i_10]))) % ((var_8 ? 40 : 21))))));
    }
    #pragma endscop
}
