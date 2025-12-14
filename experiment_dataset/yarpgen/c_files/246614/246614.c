/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= (~32768);

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            arr_7 [i_1] = ((((((((var_4 + (arr_3 [i_1] [9])))) ? var_9 : (((var_8 ? (arr_6 [i_0] [i_0]) : (arr_5 [i_0] [i_1]))))))) ? (((!(((32768 ? 32768 : 32768)))))) : ((max((arr_4 [i_0]), (arr_2 [i_0] [1]))))));
            var_20 &= ((((!1) ? (arr_2 [1] [1]) : (min(32768, var_13)))));
            arr_8 [i_1] = 32771;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_11 [i_2] = ((((max(-40, var_10))) ? ((min(1, -121))) : ((~(arr_4 [i_0])))));
            var_21 = (((((~var_9) ? var_15 : ((var_14 ? var_14 : (arr_1 [i_2]))))) - (!-5881370699345120087)));
            arr_12 [i_2] [i_2] = (!((((((-26 ? 32767 : (-127 - 1)))) ? (min(var_0, (arr_10 [i_2]))) : (!1)))));
        }
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_19 [i_0] [i_0] [i_3] [i_0] = var_16;
                    var_22 = ((((max(127, 34))) ? -11 : ((((((var_13 == (arr_17 [i_4] [i_3]))))) + (arr_9 [i_3])))));
                    arr_20 [i_3] = ((((((!512) ? var_17 : var_15))) ? ((((((var_16 ? var_0 : 119))) ? (arr_18 [10] [i_3 + 3] [i_3 + 3]) : (arr_0 [i_3 + 1] [i_3 + 1])))) : (((-127 || 1) ? ((-112 ? 121 : (arr_16 [i_0] [i_3 + 1]))) : (var_11 ^ 4)))));
                    arr_21 [i_3] [i_3 + 3] [11] [i_3] = ((((((arr_14 [i_3] [i_4] [i_4]) ? 4164219120 : (arr_14 [i_3] [i_3] [i_4])))) ? var_0 : (((arr_17 [i_3 + 3] [i_3 + 1]) ? (((arr_10 [i_3]) ? var_16 : var_12)) : (3202779797221082339 > 127)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_26 [i_0] [i_3] [i_3] = (((-((max(var_18, 1))))));
                                arr_27 [i_5] [i_3] [i_3] = ((((min(-126, (arr_17 [i_3 + 2] [i_3 + 2])))) ? ((1 ? 10283844857906232084 : 18446744073709551590)) : (((min(255, 206))))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
    {
        arr_31 [i_7] [i_7] = (-105 || 59);
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                {
                    arr_39 [i_7] [i_7] [i_9] = ((((min((arr_37 [i_7] [i_8 - 2] [i_8 - 1] [i_9]), -69))) * ((((max(var_14, var_7))) * (((arr_25 [i_7] [10] [i_7] [i_7] [i_7]) | (arr_22 [i_7] [i_7] [i_8] [i_9] [i_9])))))));

                    for (int i_10 = 2; i_10 < 17;i_10 += 1) /* same iter space */
                    {
                        arr_43 [i_7] [6] [3] [i_10 + 1] = ((var_0 + (arr_22 [i_10] [i_10] [i_10 + 1] [i_8 + 1] [i_8])));
                        var_23 *= 1;
                        var_24 += (-28 | 137);
                    }
                    /* vectorizable */
                    for (int i_11 = 2; i_11 < 17;i_11 += 1) /* same iter space */
                    {
                        arr_47 [i_11 + 1] [i_8 + 1] [i_8 + 1] [1] = ((7 ? 1 : 86));
                        var_25 = (!var_1);
                    }
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        arr_50 [i_7] [i_7] [i_8] [i_9] [i_12] [i_12] = (max(3786931150, ((((arr_34 [i_8 + 3]) / (arr_34 [i_8 - 1]))))));
                        var_26 += var_10;
                    }
                    arr_51 [10] [i_9] [14] [i_7] &= (((arr_36 [i_8 + 3] [i_8] [i_9]) ? -40 : (((461 ^ -69) ? 255 : 127))));
                }
            }
        }
        var_27 = ((arr_42 [18] [i_7]) ? (min(((max(-33, -8984265557525518460))), var_12)) : (((17079192310049915425 ? 2201273609 : 1))));
        arr_52 [i_7] = (max((~-49), ((var_14 ? var_8 : (arr_16 [i_7] [i_7])))));
    }
    #pragma endscop
}
