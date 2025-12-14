/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (min((((var_1 ? var_7 : (((max(var_4, var_12))))))), (32 - 1)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max(((min(var_16, ((var_9 ? var_2 : var_4))))), (~var_7)));

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_18 = (((!32) ? ((var_10 ? (arr_6 [i_0] [i_0]) : var_9)) : var_11));
                        arr_12 [i_0] [i_1] [i_2 - 1] [i_3] [i_2] [i_1] = (-127 - 1);
                        arr_13 [i_0] [i_0] = ((!(4090460353 || 204506943)));
                    }
                }
            }
            var_19 = (max(var_19, var_7));

            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                var_20 = ((~(max(var_14, (max(var_15, var_0))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_22 [i_0] [i_1] [i_0] [i_4] [i_5] [10] = ((!(((arr_0 [i_1 + 1]) != var_16))));
                            var_21 |= ((+(((-1 <= (((1 ? (arr_10 [i_0] [i_0] [i_4] [i_6] [i_6] [i_4]) : var_14))))))));
                            arr_23 [i_0] [i_1 + 1] [i_4] [i_4] [i_0] = (min(var_9, var_10));
                            arr_24 [i_0] [i_0] [i_6] [0] [i_5] [i_4] = var_3;
                            arr_25 [i_0] [i_1 - 1] [i_4] [i_5] [i_5] = (max(((min(511, (-9223372036854775807 - 1)))), (min(1728745025491010477, 0))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            arr_30 [i_0] = (min((min(var_9, 2998023321162471089)), ((max(var_0, var_2)))));
                            var_22 = (max(var_22, (((-(arr_29 [i_8] [i_7] [i_4] [i_1] [i_0]))))));
                            arr_31 [i_0] = var_2;
                        }
                    }
                }
            }
        }
        for (int i_9 = 3; i_9 < 21;i_9 += 1)
        {
            arr_35 [i_0] [i_0] = ((~((var_10 ? 1 : var_1))));
            var_23 = (min((!var_3), 923862727906386162));

            for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
            {
                arr_39 [i_10] [i_0] [i_0] [i_0] = var_12;
                /* LoopNest 2 */
                for (int i_11 = 4; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        {
                            arr_45 [i_9] [i_10] [i_11] [i_0] = (!-14);
                            var_24 = (min(var_24, ((min(var_1, var_0)))));
                        }
                    }
                }
                var_25 = ((!((max((((107 ? -31398 : 4285228630))), 11627466529663448)))));
            }
            for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
            {
                arr_50 [i_0] = max(((var_9 * (arr_32 [i_9 - 1]))), var_1);

                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    var_26 -= var_0;
                    var_27 = (max(var_9, (((~(max(4294966796, 1324)))))));
                }
                var_28 = var_13;
            }
            arr_53 [i_0] [i_0] = (arr_44 [i_0] [i_0] [i_0] [i_0] [i_0]);
        }
        /* LoopNest 3 */
        for (int i_15 = 2; i_15 < 21;i_15 += 1)
        {
            for (int i_16 = 2; i_16 < 21;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 22;i_17 += 1)
                {
                    {
                        var_29 = (min(var_29, 18435116607179888176));
                        var_30 = (((arr_60 [i_15] [i_16] [i_15] [i_0]) ? var_11 : (min(var_16, var_14))));
                        var_31 = (max(var_31, ((((-9223372036854775807 - 1) ? 1324 : 204506940)))));

                        for (int i_18 = 0; i_18 < 22;i_18 += 1) /* same iter space */
                        {
                            arr_64 [i_15] [i_0] [16] [i_15] [i_0] [i_0] = var_13;
                            arr_65 [i_0] [i_0] [i_15] [i_17] [i_15] = ((9 ? ((var_16 ? var_4 : var_5)) : var_2));
                        }
                        for (int i_19 = 0; i_19 < 22;i_19 += 1) /* same iter space */
                        {
                            arr_69 [i_0] [i_0] [i_16 - 2] [i_17] [i_19] = var_13;
                            arr_70 [i_0] [i_0] = (arr_0 [i_16 + 1]);
                            arr_71 [i_0] [i_15] [i_0] [i_17] [i_19] = (((min(4285228630, -26638))) ? -1046824176 : (min(var_8, var_0)));
                        }
                        for (int i_20 = 0; i_20 < 22;i_20 += 1) /* same iter space */
                        {
                            var_32 &= (((((~(var_15 == var_13)))) && ((max(1046824160, (arr_5 [i_20] [i_15] [i_20]))))));
                            arr_74 [i_0] [i_20] [i_15] [i_16] [i_17] [i_20] &= ((1 ? 19 : 1));
                            arr_75 [i_0] [i_15] [i_15] [i_15] [i_0] [i_0] = min((min(var_4, (arr_20 [i_15 - 1] [i_16 - 1] [i_16 - 1] [i_16 - 2] [i_17]))), (var_15 && var_8));
                            var_33 += (min(1046824173, 4090460329));
                        }
                    }
                }
            }
        }
        var_34 = (min(var_34, var_13));
    }
    #pragma endscop
}
