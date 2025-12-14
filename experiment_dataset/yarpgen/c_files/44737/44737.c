/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    var_15 -= var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_16 = ((min(var_12, ((var_13 ? (arr_15 [i_0] [i_3] [i_2] [i_1] [i_1] [i_0]) : 65529)))) >> ((((((max((arr_9 [i_0] [i_0] [i_0] [i_3] [i_4] [i_4]), var_1))) ? ((2 ? -121 : 4294967295)) : ((40612 ? -121 : 13)))) - 4294967173)));
                                arr_16 [i_2] [i_1] [1] = var_12;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_17 = 1752080607;
                        var_18 = var_0;
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        var_19 += var_1;
                        arr_23 [i_2] [i_1] [i_2] [i_2] [i_2] [i_2] = ((~(arr_21 [i_6 + 1] [i_6] [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 2])));

                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            var_20 *= var_8;
                            arr_26 [i_7] [i_2] [10] [i_1] [i_2] [i_0] = var_1;
                            arr_27 [i_2] [i_1] [i_2] [i_6] [i_7] = var_9;
                            var_21 ^= (arr_15 [i_7] [i_7] [i_2] [i_7] [i_6 - 2] [i_0]);
                            arr_28 [i_1] [i_1] [i_1] [i_1] [i_7] [i_6] [i_2] = (arr_20 [i_1] [i_1] [i_1] [i_1]);
                        }
                        var_22 ^= ((((var_5 < (arr_1 [i_6]))) ? var_7 : (arr_8 [i_6] [i_6 + 1] [i_1] [i_1])));
                    }
                    for (int i_8 = 2; i_8 < 11;i_8 += 1) /* same iter space */
                    {
                        var_23 = var_3;
                        var_24 = var_0;
                        arr_32 [i_0] [12] [12] [i_2] [i_0] = (min((((arr_7 [i_8 + 1] [i_8 - 1]) ? -1 : ((var_0 ? (arr_14 [i_0] [i_0] [i_2] [i_2] [i_8]) : (arr_25 [i_0] [i_1] [i_2] [i_1] [i_0]))))), (arr_1 [i_0])));
                        arr_33 [i_2] [i_0] [i_0] [i_0] = ((+(((((arr_8 [12] [i_1] [i_2] [i_8]) ? (arr_7 [i_0] [i_0]) : 1478530471)) >> (((max((arr_11 [i_0] [i_2] [i_2]), var_3)) - 63))))));
                    }
                    for (int i_9 = 2; i_9 < 11;i_9 += 1) /* same iter space */
                    {
                        arr_36 [i_2] [i_2] [i_2] = ((!((!(arr_1 [i_9 + 2])))));
                        arr_37 [i_2] [i_2] [i_9 + 2] = (min(((((arr_29 [i_9 + 1] [i_9] [i_9] [i_9 + 2]) ? (arr_29 [i_9 - 2] [i_9 - 2] [i_9] [i_9 + 2]) : (arr_29 [i_9 - 1] [i_9 - 1] [i_9] [i_9 - 1])))), 9223372036854775807));
                        arr_38 [i_2] [i_2] = var_8;
                        var_25 = ((((min((arr_35 [i_2] [i_2]), (arr_35 [i_2] [i_2])))) == (((arr_18 [i_9 - 2]) ? (arr_21 [i_9] [i_0] [4] [i_0] [i_0] [i_0]) : var_2))));
                        var_26 = (max(var_26, (arr_34 [i_1] [i_1] [i_9 + 1] [i_1])));
                    }
                }
            }
        }
    }
    var_27 = var_8;
    #pragma endscop
}
