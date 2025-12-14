/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-93 ? (((33733 ? 127 : var_4))) : var_1));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [i_0 - 1] = (max((arr_1 [i_0 - 1]), (-127 - 1)));
        arr_4 [i_0] = ((((1 < (arr_2 [i_0 - 1] [i_0 - 2]))) ? (arr_1 [i_0 - 1]) : (arr_0 [i_0 - 1] [i_0 + 1])));
        var_14 = (arr_2 [1] [i_0 - 2]);
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        arr_15 [7] [4] [i_3] [i_4] &= ((-((var_3 / (arr_7 [i_2])))));
                        arr_16 [i_1] [i_2] &= -3256565164160112224;
                        var_15 = (148 ? 63042 : 536854528);

                        for (int i_5 = 1; i_5 < 15;i_5 += 1)
                        {
                            arr_21 [i_1 - 2] [i_1] [i_1] [i_1] [i_1 - 2] = (max(((3256565164160112232 ? (arr_6 [i_5 - 1]) : ((-(arr_8 [i_1]))))), (arr_10 [i_1] [i_1 + 2])));
                            var_16 = 536854528;
                            var_17 &= (~-42);
                            var_18 -= (min((((((((var_6 == (arr_9 [i_1]))))) != (var_9 % var_8)))), ((-872359825 ? var_8 : (min((arr_8 [i_2]), -35148223))))));
                        }
                        for (int i_6 = 2; i_6 < 15;i_6 += 1)
                        {
                            var_19 += ((38461 ? 3256565164160112252 : -991037071));
                            arr_25 [i_1 + 2] [i_1 + 2] = ((((((arr_24 [i_2] [i_2] [i_2] [i_6 - 2]) * var_0))) ? (((127 / (arr_10 [i_2] [i_6])))) : (min((((3256565164160112244 ? 164 : -2))), var_6))));
                            arr_26 [i_6] [i_3] [2] = (max(27074, var_12));
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_20 = (max(var_20, (((var_3 ? (((!(arr_7 [6])))) : (((!((!(arr_11 [i_7])))))))))));
                            arr_30 [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 1] = (((((((!(arr_5 [i_1 + 2] [i_1]))) < (!-10055))))));
                        }
                        var_21 = (min(var_21, (+-2515)));
                    }
                }
            }
        }
        var_22 = (max(var_22, ((max(49681, var_9)))));
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 15;i_9 += 1)
            {
                {
                    var_23 = (min(var_23, (((max((arr_17 [i_1 - 2] [i_8 + 1] [i_9]), var_2)) != var_7))));
                    arr_36 [i_1 + 1] = (arr_6 [i_1]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 10;i_10 += 1)
    {
        for (int i_11 = 3; i_11 < 11;i_11 += 1)
        {
            {
                var_24 = ((arr_18 [i_11 + 2] [i_11 + 2] [i_11 - 2] [i_11 + 1] [i_11 + 2]) ? -38476 : ((var_10 ? (arr_18 [i_11 - 1] [i_11 - 1] [i_11 - 2] [i_11 - 1] [i_11 - 2]) : (arr_18 [i_11 - 2] [i_11 - 2] [i_11 + 2] [i_11] [i_11 - 3]))));
                var_25 = (min(var_25, (((((((arr_33 [i_11 + 2]) - (arr_23 [i_10 + 3] [i_10 + 3] [i_10 + 2] [i_10 + 3] [i_10 + 1])))) ? ((var_7 ? 42511 : 3041617866)) : 12986118428354848519)))));
                arr_41 [i_10 + 2] [i_11] [i_11] = (((((arr_32 [i_10 + 1]) ? var_9 : (arr_13 [i_10 + 2]))) != -2075734561));
            }
        }
    }
    #pragma endscop
}
