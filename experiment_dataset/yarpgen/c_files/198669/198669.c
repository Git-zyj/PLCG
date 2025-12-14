/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= var_1;
    var_14 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_2] = (arr_0 [i_1] [17]);
                    var_15 = ((arr_7 [i_2] [i_1]) << (arr_0 [i_0] [i_2 + 1]));
                    var_16 = (min(var_16, ((((((1509894216 ? 1249555883 : var_4))) - ((~(arr_6 [i_0] [i_1]))))))));
                }
            }
        }
        arr_9 [i_0] = 1509894218;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    arr_18 [i_3] [i_4] [i_3] [i_3] = (-10733 && 23444);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 19;i_7 += 1)
                        {
                            {
                                arr_23 [i_6] = (1394251392 != -25488);
                                var_17 = (((((arr_6 [i_6] [i_5]) && 1)) || (!2696226150)));
                                arr_24 [i_3] [i_4] [i_5] [i_6] [i_7 + 3] = ((~(arr_22 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 3] [i_7 - 1])));
                            }
                        }
                    }
                    var_18 = (((arr_2 [i_4]) ? (arr_5 [i_4] [i_5]) : (arr_2 [i_3])));
                    var_19 = var_12;
                }
            }
        }

        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            var_20 = (arr_2 [i_3]);
            arr_28 [i_3] [16] = -1397149050;
        }
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            var_21 = (arr_12 [i_3] [i_9]);
            var_22 = ((((7662677778062455070 & (arr_21 [2] [i_3] [i_9] [i_3] [i_3]))) & (arr_13 [i_3] [i_9] [i_3])));
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                {
                    var_23 = ((((arr_17 [i_10]) << (23444 - 23430))));
                    var_24 -= ((var_7 == (arr_7 [i_10] [i_11])));
                    var_25 *= (-1509894216 == var_11);
                }
            }
        }
        var_26 = (max(var_26, (arr_3 [i_3] [i_3])));
    }
    for (int i_12 = 0; i_12 < 14;i_12 += 1)
    {
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 14;i_15 += 1)
                {
                    {
                        var_27 = (!(arr_14 [i_15] [i_14] [i_13]));
                        arr_49 [i_15] [i_12] [i_13] [i_13] [i_12] [i_12] = (((max(var_6, (arr_3 [i_12] [i_13]))) & (max((arr_3 [i_13] [i_15]), -1397149050))));

                        /* vectorizable */
                        for (int i_16 = 0; i_16 < 14;i_16 += 1)
                        {
                            var_28 = (max(var_28, (arr_22 [i_12] [i_12] [i_13] [i_16] [19])));
                            var_29 -= (arr_5 [i_15] [i_13]);
                        }
                        arr_54 [i_15] [i_14] [i_13] = ((!((((!82) ? (65506 && var_5) : (arr_25 [i_14] [i_13]))))));
                        var_30 = -var_7;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 14;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                {
                    arr_60 [i_12] [i_17] [i_18] = (((min((arr_42 [i_18] [i_17]), var_6))) + ((~(arr_42 [i_17] [10]))));
                    var_31 = (min(var_31, (((~((((0 ? 95 : var_11)) / var_5)))))));
                    var_32 = ((!(((arr_3 [14] [i_12]) < (arr_3 [i_12] [i_17])))));
                    var_33 = (arr_0 [i_12] [i_18]);
                    var_34 = ((~(arr_41 [i_12] [i_17] [i_18])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_19 = 1; i_19 < 1;i_19 += 1)
        {
            for (int i_20 = 1; i_20 < 11;i_20 += 1)
            {
                {
                    arr_66 [i_12] [4] [i_20] [i_12] &= ((-(arr_44 [i_12] [i_19 - 1] [i_12])));
                    var_35 = (max((((arr_32 [i_19 - 1] [i_19]) || 190)), (((arr_32 [i_19 - 1] [i_19]) == (arr_32 [i_19 - 1] [i_19])))));
                    var_36 -= (min((~683575960), (3925 || var_9)));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_21 = 1; i_21 < 19;i_21 += 1)
    {
        for (int i_22 = 2; i_22 < 19;i_22 += 1)
        {
            for (int i_23 = 0; i_23 < 21;i_23 += 1)
            {
                {
                    var_37 = ((((((min(-10905, 1804476155))) ? (max(1176131142122453809, (arr_26 [i_21 + 1] [i_21 + 1] [i_23]))) : (arr_11 [i_22 + 2]))) + ((((((max(255, (arr_0 [1] [1]))))) + (arr_74 [i_22 - 2] [i_21 - 1] [i_21 - 1] [i_21 - 1]))))));
                    arr_75 [0] = (arr_34 [17] [17]);
                    arr_76 [i_21 - 1] [i_22 - 2] [i_21 - 1] = ((((max(-496216748, var_0))) > (max(6160275979722194940, 435044024))));
                }
            }
        }
    }
    #pragma endscop
}
