/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    var_15 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (min(var_16, var_1));
        var_17 &= (arr_2 [i_0] [i_0]);

        for (int i_1 = 1; i_1 < 16;i_1 += 1) /* same iter space */
        {
            var_18 ^= ((!(arr_5 [i_0] [i_1 + 1])));
            var_19 |= (!127);
        }
        for (int i_2 = 1; i_2 < 16;i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_20 = var_1;
                            var_21 = ((0 ? -17760 : -12882));
                        }
                    }
                }
            }
            arr_16 [i_0] = var_5;
            var_22 *= var_3;
        }
        for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
        {
            var_23 = (min(var_23, (~var_9)));
            var_24 *= (arr_9 [4] [i_0]);
            arr_19 [i_0] = ((!((((arr_4 [i_0] [i_0] [4]) ? var_2 : (arr_14 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_0] [i_6 + 1]))))));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 15;i_9 += 1)
                    {
                        {
                            var_25 = (~var_5);
                            arr_27 [i_0] [i_6] [i_7] [i_8] = ((~(((arr_11 [i_6] [i_6] [i_8] [i_6]) ? var_12 : (arr_6 [i_0])))));
                        }
                    }
                }
            }
        }
        for (int i_10 = 1; i_10 < 16;i_10 += 1) /* same iter space */
        {
            var_26 += ((var_0 ? var_7 : (arr_3 [i_10 - 1] [i_10 + 1])));
            var_27 ^= ((56632 ? 5 : var_1));

            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                arr_34 [i_11] = ((((var_2 ? var_10 : (arr_21 [i_0] [i_10 - 1] [i_11]))) & var_9));
                var_28 = var_7;

                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    var_29 |= (((arr_4 [i_10 + 1] [i_10 - 1] [i_10 + 1]) ? (arr_9 [i_0] [i_0]) : (arr_5 [12] [i_11])));
                    var_30 &= (((arr_26 [i_0] [i_0] [i_10 - 1] [14] [i_0] [i_12]) && var_11));
                }
            }
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                arr_40 [i_0] [i_10 + 1] [i_0] [i_0] = var_1;
                arr_41 [i_0] [i_10] [i_10] [15] = (((arr_17 [i_10 + 1]) / (arr_17 [i_10 - 1])));
            }
            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                var_31 = (max(var_31, ((((!(arr_1 [i_14])))))));
                var_32 = (min(var_32, ((((arr_14 [i_0] [i_10] [i_0] [i_0] [i_14]) > ((var_0 ? (arr_8 [i_14] [i_14]) : (arr_33 [11] [i_10] [i_10] [i_14]))))))));
                var_33 = var_0;
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 17;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 17;i_16 += 1)
                    {
                        {
                            var_34 = var_0;
                            arr_50 [14] [i_10 - 1] [i_15] |= ((~(arr_0 [i_16])));
                            var_35 = (arr_20 [i_0] [7] [i_0]);
                            var_36 = (((var_8 - (arr_23 [i_0] [i_15]))));
                            var_37 = var_4;
                        }
                    }
                }
                arr_51 [i_0] = (arr_3 [i_0] [i_10]);
            }
            var_38 = var_5;
        }
    }
    for (int i_17 = 0; i_17 < 19;i_17 += 1)
    {

        for (int i_18 = 0; i_18 < 19;i_18 += 1)
        {
            var_39 = (max(var_39, (min(16897667096491431391, 1))));
            /* LoopNest 2 */
            for (int i_19 = 1; i_19 < 18;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 19;i_20 += 1)
                {
                    {
                        arr_63 [8] [2] [i_19 + 1] [i_18] [i_17] = ((((min(var_13, var_1)))));

                        for (int i_21 = 0; i_21 < 19;i_21 += 1)
                        {
                            var_40 = var_0;
                            arr_66 [12] [i_18] [12] [i_18] [i_20] [i_21] = (((arr_62 [i_18] [0] [i_20] [i_21]) ? ((min(((max((arr_61 [i_17] [i_19] [i_21]), (arr_65 [15] [i_19 + 1] [11] [i_21])))), (arr_59 [i_21] [i_19])))) : var_5));
                        }
                        var_41 = ((min(((13168 ? var_1 : 8901), var_12))));
                        var_42 = ((8903 ? var_8 : 56633));
                    }
                }
            }
        }
        for (int i_22 = 1; i_22 < 17;i_22 += 1)
        {
            var_43 = (min(((min((((arr_62 [i_17] [1] [i_17] [i_22 + 1]) ? (arr_57 [i_17] [i_17] [17] [i_22 + 1]) : var_4)), (!var_10)))), (arr_62 [i_22] [i_22] [i_22] [i_17])));
            var_44 = (min(var_12, (~4194303)));
        }
        arr_69 [12] = (arr_53 [i_17]);
        var_45 = (max(var_45, (arr_61 [15] [i_17] [i_17])));
    }
    #pragma endscop
}
