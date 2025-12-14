/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0 - 1] = (((((min(60705, 41)))) | ((~(arr_8 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0 + 1])))));
                                arr_16 [i_0] [i_3] [i_0] [i_0] [i_0] = ((var_3 ? ((var_15 ? (arr_3 [i_2] [i_4]) : (var_12 + -3480806725376616201))) : var_2));
                            }
                        }
                    }
                }
                arr_17 [i_0] [i_0] = min((((~0) ? -32 : 2847091349375506192)), ((min(1, var_10))));
                var_16 = (min(((((max(47151, 0))) ? var_0 : (((arr_7 [i_0]) ? (arr_8 [i_0] [i_1] [i_0] [i_0] [i_0 - 1] [i_0]) : (arr_12 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]))))), var_1));
                var_17 = ((arr_9 [i_0] [i_1]) & 1);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_18 -= ((max((arr_19 [i_6]), (arr_19 [i_6]))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        {
                            var_19 = (((min((min(-2106392978, (arr_25 [i_6]))), 65530)) >= (((arr_23 [i_5] [i_6] [i_7]) & 121))));
                            var_20 = var_5;
                            var_21 -= (min((arr_21 [12]), (arr_22 [i_7])));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            {
                var_22 = var_14;
                arr_33 [i_10] = ((4294967295 << (((min(-8794440153601883852, 228)) + 8794440153601883880))));
                /* LoopNest 3 */
                for (int i_11 = 3; i_11 < 9;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 10;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 11;i_13 += 1)
                        {
                            {
                                var_23 = (min(var_23, ((((((arr_39 [i_9] [i_9] [i_10] [i_9] [i_9] [i_12] [i_13]) ? ((1 ? 122611741 : var_7)) : ((((!(arr_18 [i_9]))))))) >> (((arr_34 [i_10] [i_12] [6]) - 177)))))));
                                var_24 += ((((max(4194303, 124))) + (min((arr_36 [i_11 - 2] [i_11 - 1] [i_12 - 3]), (arr_34 [i_11 - 3] [i_11 + 1] [i_12 - 3])))));
                                var_25 = (arr_19 [i_9]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 4; i_14 < 10;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        {
                            var_26 = (max(var_5, (arr_31 [i_14] [i_14 - 3] [i_14 + 1])));
                            arr_47 [i_10] [i_10] [i_10] [i_15] = (max((min(((-5765405394179677632 ? var_8 : (arr_35 [i_15] [i_14] [i_9] [i_9]))), (arr_35 [i_14 - 2] [i_14 - 2] [i_14 - 2] [i_14 - 4]))), ((min((arr_19 [i_14 - 4]), var_2)))));
                            arr_48 [i_9] [i_9] [i_15] [i_15] [i_10] = ((((max((min((arr_21 [i_10]), 0)), var_9))) ? (((min(((((arr_24 [i_9] [i_9] [i_9]) > var_4))), 0)))) : ((~((18446744073709551609 ? (arr_22 [i_9]) : var_13))))));
                        }
                    }
                }
            }
        }
    }
    var_27 = (min(var_27, (((var_0 ? ((var_2 | (~var_2))) : var_6)))));
    var_28 = ((((((min(var_10, 123))) ? var_15 : (var_13 != var_13))) & var_2));
    #pragma endscop
}
