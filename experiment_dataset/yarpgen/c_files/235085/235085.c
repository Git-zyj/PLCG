/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_8 ? 1193 : ((var_2 ? var_7 : 4148176825792180134))))) ? (max(var_8, var_7)) : (~48)));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min((((4879394201341617266 && ((((arr_1 [i_0 - 1]) ? (arr_1 [i_0 - 1]) : -4879394201341617252)))))), (((26058 != var_1) ? (((arr_1 [i_0]) ? -1 : var_9)) : ((54 ? 17145 : 7))))));
        var_11 = arr_0 [i_0] [i_0];
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_12 = (min(var_12, ((max((max(var_9, ((-49 / (arr_0 [7] [5]))))), -20057)))));

        /* vectorizable */
        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 11;i_3 += 1) /* same iter space */
            {
                var_13 = (((arr_8 [i_1] [i_2] [i_1]) % (arr_8 [i_3] [i_2] [i_3])));
                var_14 = (min(var_14, ((((((arr_4 [i_1] [10]) >= var_1)) ? (~-16670) : ((((arr_7 [11] [i_2]) == (arr_10 [i_3 + 1] [i_2 - 2] [i_1] [i_1])))))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_15 |= (arr_6 [i_2 - 3] [i_1]);
                            arr_16 [i_1] [i_4] [i_2] [i_2 - 2] [i_1] = (~var_8);
                            arr_17 [i_2] [i_2] = (-29 * -1);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        {
                            arr_22 [i_2] [i_6] [i_3] [i_2] [0] [i_2] = var_4;
                            var_16 = ((arr_13 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_2 - 2] [i_2 - 2] [i_2 - 2]) ? 71 : (((arr_8 [i_2] [i_2] [i_1]) << (17988 - 17988))));
                        }
                    }
                }
                var_17 = (arr_15 [i_2] [i_2 - 1] [i_2 - 1] [2] [i_2 + 1] [i_2 + 1] [i_2]);
            }
            for (int i_8 = 1; i_8 < 11;i_8 += 1) /* same iter space */
            {
                arr_26 [i_2] [i_2] = arr_3 [i_2 - 1];
                arr_27 [i_2] [i_2] [i_2] = 117;
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 10;i_10 += 1)
                    {
                        {
                            var_18 = (min(var_18, (((arr_13 [i_8] [i_10 + 2] [i_10 + 1] [i_10] [i_10] [i_10 - 1]) ? (arr_11 [i_9] [i_1] [i_9] [i_1] [i_10] [i_8 + 1]) : (arr_13 [i_9] [i_9] [5] [i_10] [5] [i_10 + 2])))));
                            var_19 = (min(var_19, ((((var_2 ? (arr_18 [i_10] [i_9] [i_8] [i_1]) : (arr_13 [i_10] [9] [8] [i_1] [i_1] [i_1])))))));
                            arr_32 [i_1] [i_1] [i_8 + 1] [4] [i_2] = -28864;
                        }
                    }
                }
            }
            for (int i_11 = 1; i_11 < 11;i_11 += 1) /* same iter space */
            {

                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    arr_39 [i_1] [i_2] = 125;
                    var_20 = (~-32746);
                    var_21 = (min(var_21, 12));
                    var_22 = -17;
                }
                for (int i_13 = 4; i_13 < 11;i_13 += 1)
                {
                    var_23 = (min(var_23, -58));
                    var_24 = (~var_4);
                    arr_42 [9] [i_2] [9] [i_11] [i_2] [9] = -7798703327388423979;
                }
                var_25 = (var_4 || 30);
            }
            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 12;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 12;i_16 += 1)
                    {
                        {
                            var_26 = (((arr_34 [i_2 - 2] [i_14] [i_14]) ? (arr_34 [i_2 - 1] [i_16] [9]) : (arr_51 [11] [11] [11] [i_2 - 1] [i_2 - 1] [i_2] [7])));
                            arr_53 [i_1] [i_2] [2] [i_2] [i_2] [9] = 19;
                        }
                    }
                }
                var_27 |= -49;
            }
            var_28 = 18228;
        }
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 12;i_17 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_18 = 2; i_18 < 11;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 12;i_19 += 1)
            {
                for (int i_20 = 2; i_20 < 9;i_20 += 1)
                {
                    {
                        var_29 = (2752106875214553648 | ((((arr_54 [i_18 - 1] [i_20]) / (arr_3 [i_19])))));
                        var_30 = (((arr_55 [i_17] [i_18 - 2]) ? (arr_55 [i_18] [i_18 - 2]) : 12705));

                        for (int i_21 = 0; i_21 < 12;i_21 += 1)
                        {
                            arr_66 [i_17] [8] [i_19] [4] [i_18] [i_21] = ((((var_7 ? -9 : -1)) > 2268));
                            var_31 = (-5381741227196892785 ^ -49);
                            var_32 = var_4;
                        }
                        for (int i_22 = 0; i_22 < 12;i_22 += 1)
                        {
                            var_33 = ((!(!255)));
                            var_34 += (~3);
                            var_35 = (arr_49 [10] [i_18] [i_18] [i_17]);
                        }
                        for (int i_23 = 0; i_23 < 12;i_23 += 1)
                        {
                            var_36 ^= (arr_4 [i_17] [i_18 - 1]);
                            var_37 = (max(var_37, (!var_7)));
                            var_38 -= -19089;
                            var_39 = (min(var_39, -65));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_24 = 1; i_24 < 11;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 12;i_25 += 1)
            {
                {
                    arr_77 [i_24] = ((!(arr_20 [i_24 - 1])));
                    arr_78 [i_25] [i_17] [i_17] [i_17] = (63 ? (((arr_43 [i_17] [i_24] [i_25]) % (arr_21 [i_25] [i_25] [i_25] [i_25] [i_25] [i_25]))) : (19451 && -32764));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_26 = 1; i_26 < 12;i_26 += 1)
    {
        for (int i_27 = 0; i_27 < 13;i_27 += 1)
        {
            for (int i_28 = 0; i_28 < 13;i_28 += 1)
            {
                {
                    var_40 *= (((arr_1 [i_26]) ? (-32046 & 18) : ((max(98, (max((arr_84 [10] [i_27] [i_26]), 198)))))));
                    var_41 -= (max(13, 12));
                }
            }
        }
    }
    #pragma endscop
}
