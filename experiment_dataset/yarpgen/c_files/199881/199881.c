/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_10 << ((-(var_8 / var_3)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_14 = (arr_1 [i_0] [i_0]);

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_15 = (max((arr_4 [i_0] [12] [i_1 + 1]), var_1));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    {
                        var_16 = (max(var_16, (!var_0)));
                        arr_11 [i_0] [i_0] [i_0] [i_3 - 1] = var_7;
                        var_17 = ((+(max((arr_8 [i_0] [i_1] [9]), var_6))));
                    }
                }
            }
            var_18 *= (((min((arr_4 [i_0] [i_1 - 1] [i_1]), var_7))) - (arr_1 [8] [i_1 + 2]));
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                {
                    var_19 *= (arr_5 [1] [i_5] [6]);
                    var_20 = (((var_2 >> var_8) + (arr_17 [i_6 - 1] [i_6 - 1] [i_6])));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_21 = (-(arr_2 [i_6 - 1]));
                                var_22 &= (var_7 <= var_11);
                            }
                        }
                    }
                }
            }
        }
        var_23 = var_9;
        var_24 = ((~(arr_26 [i_4])));
    }
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        var_25 = (~((-(var_3 || var_12))));
        var_26 = ((((((arr_29 [i_9]) < var_0)))) & (max(-7615898249303358071, ((max(1703751717, 8386075600147493546))))));
    }
    var_27 = var_9;

    for (int i_10 = 4; i_10 < 11;i_10 += 1)
    {

        /* vectorizable */
        for (int i_11 = 1; i_11 < 11;i_11 += 1)
        {
            var_28 = (var_8 & var_12);
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        {
                            var_29 = (min(var_29, ((~(arr_3 [i_12] [i_12])))));
                            var_30 *= var_2;
                            var_31 = (((arr_40 [i_11 - 1] [i_11 - 1]) >= (arr_8 [i_10 - 3] [i_10] [i_11 + 1])));
                        }
                    }
                }
            }
            var_32 = (arr_36 [i_10] [i_10] [i_11]);
            arr_42 [i_10] [i_11] = var_0;
        }
        for (int i_15 = 2; i_15 < 11;i_15 += 1)
        {
            var_33 *= (((((1781 + 1) * var_10)) > ((var_10 * (~var_7)))));
            arr_47 [0] [i_15] [0] = (((-3449834986299229991 || 1) | ((((arr_18 [i_10 - 1] [1] [i_10 - 1]) >= (var_1 - var_10))))));
        }
        arr_48 [i_10] [i_10] = ((-(arr_23 [1] [1] [1] [i_10 - 1] [i_10] [i_10])));
    }
    for (int i_16 = 0; i_16 < 25;i_16 += 1) /* same iter space */
    {
        var_34 = var_0;
        var_35 = (min((11 % 82), (arr_49 [i_16] [i_16])));
    }
    for (int i_17 = 0; i_17 < 25;i_17 += 1) /* same iter space */
    {
        var_36 = (arr_52 [i_17]);
        var_37 *= (!var_7);
    }
    for (int i_18 = 0; i_18 < 25;i_18 += 1) /* same iter space */
    {

        for (int i_19 = 0; i_19 < 25;i_19 += 1)
        {
            var_38 = (arr_49 [i_18] [i_18]);
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 25;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 25;i_21 += 1)
                {
                    {
                        var_39 -= (3449834986299229985 || 0);
                        var_40 = (((((((arr_49 [i_19] [i_19]) && (arr_49 [i_18] [i_19]))))) == (arr_49 [i_18] [i_19])));
                    }
                }
            }
        }
        arr_62 [i_18] [i_18] = (((arr_55 [i_18] [i_18]) % ((var_12 - (arr_49 [i_18] [i_18])))));
    }
    #pragma endscop
}
