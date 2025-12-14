/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = 1;
        var_15 = (arr_1 [i_0]);

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            var_16 = (max(5375162944066190039, (arr_3 [i_1] [i_1 + 1])));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_17 = 1894005733;
                            var_18 = (arr_6 [i_0] [i_1] [i_4]);
                            var_19 = 18446744073709551615;
                        }
                    }
                }
            }
            var_20 = (arr_9 [i_0] [i_1 - 1]);
            arr_11 [i_1] [i_1 + 2] [i_1] = 70368744177664;
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            var_21 = (min(var_21, (~4294967287)));
            arr_14 [i_5] = 8796093022204;
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            var_22 = 0;
            arr_17 [i_6] = (arr_1 [i_0]);
            var_23 = (max(var_23, (arr_5 [i_6] [i_6] [20] [i_0])));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
        {
            arr_21 [i_7] = ((~(min((arr_10 [i_0] [i_0] [i_0] [i_7] [i_0]), (arr_18 [i_0])))));
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 0;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_24 = 0;
                            var_25 -= ((-(arr_9 [i_0] [i_9])));
                            var_26 = (max(var_26, (arr_7 [0] [i_8 - 3] [i_9 + 1])));
                            arr_29 [i_0] [i_0] [i_8] [i_9] [3] = 14556463262790817445;
                        }
                        arr_30 [i_0] [i_0] [i_8] [i_9 + 1] = (!(arr_25 [i_0] [i_8] [4] [i_9 + 1]));

                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            arr_35 [i_0] = 754493095;
                            arr_36 [i_0] = max(1, 3540474200);
                            var_27 += (--7891963779772953167);
                        }
                        arr_37 [i_0] [i_7] [i_8 - 3] [i_9] = min(1152921504606846975, (~1));
                    }
                }
            }
        }
    }

    for (int i_12 = 1; i_12 < 11;i_12 += 1)
    {
        arr_40 [1] [i_12] = (arr_33 [i_12] [i_12] [i_12] [i_12 + 1] [i_12]);

        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
        {
            var_28 = (arr_32 [1] [i_12] [i_13] [i_12] [i_13]);
            arr_45 [11] [11] [i_13] = (arr_42 [i_13] [i_12 + 2] [i_12 - 1]);
        }
        for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
        {
            var_29 *= (arr_23 [i_12 - 1] [i_12 + 2] [i_12 + 1] [i_12 + 1]);

            for (int i_15 = 0; i_15 < 13;i_15 += 1)
            {
                var_30 = (min((max((arr_23 [i_12] [i_12 - 1] [6] [i_12 + 2]), (arr_23 [9] [i_12 - 1] [i_12] [i_12 + 2]))), (arr_23 [i_12] [i_12 - 1] [i_12] [i_12 + 2])));
                arr_52 [i_15] [i_14] [i_14] [i_12] = (max(1767757558, (min((arr_43 [i_12 + 2] [i_12 + 2]), (arr_43 [i_12 - 1] [i_12 + 2])))));
                arr_53 [i_14] = 9765651959845806359;
                arr_54 [i_15] [i_14] [6] = (min((!1), 1451984065));
            }
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    {
                        arr_61 [i_12] [i_14] [i_14] [i_14] [i_16] [i_17] = 11;
                        arr_62 [3] [i_14] [i_16] [i_17] = (arr_47 [i_12 + 2] [i_12 + 2] [i_12 + 1]);
                        var_31 = (max(var_31, (min((max(103, (arr_16 [4]))), (arr_16 [8])))));
                    }
                }
            }
            arr_63 [i_12 - 1] [i_14] = ((~(max((arr_26 [i_12 + 2] [i_14] [i_14] [i_14] [i_14]), (arr_26 [i_12 + 1] [i_12] [i_12] [i_12 + 2] [i_14])))));
            var_32 = 1725885121;
        }
        /* vectorizable */
        for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 13;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 13;i_20 += 1)
                {
                    {
                        var_33 = ((-(arr_58 [i_12 + 2] [i_12 + 1] [i_12 + 1])));
                        arr_73 [i_12] [i_18] [i_19] [i_20] = (!(arr_47 [i_12 - 1] [i_12 + 1] [1]));

                        for (int i_21 = 2; i_21 < 12;i_21 += 1) /* same iter space */
                        {
                            arr_78 [i_12] [i_12 + 1] |= -4170091236883161876;
                            arr_79 [i_12 - 1] [i_21] [i_19] [1] [i_21 + 1] [1] [i_21 - 2] = ((~(arr_49 [i_12 + 1] [i_12] [i_21])));
                            var_34 = (max(var_34, 1));
                            arr_80 [1] [i_20] [i_19] [i_20] [i_21 - 1] = (arr_77 [i_12 - 1] [i_21] [i_21 - 1] [i_21 - 1] [1]);
                        }
                        for (int i_22 = 2; i_22 < 12;i_22 += 1) /* same iter space */
                        {
                            var_35 = arr_15 [i_20] [i_18] [i_12 + 1];
                            var_36 -= 3032171042;
                        }
                        arr_84 [i_12 + 1] [i_20] = arr_6 [i_12 + 2] [i_12] [i_12 + 2];
                    }
                }
            }
            arr_85 [1] [i_18] = ((!(arr_49 [i_12 + 2] [i_18] [8])));
        }
        for (int i_23 = 0; i_23 < 1;i_23 += 1) /* same iter space */
        {
            var_37 += ((-(min((arr_39 [i_12 + 2]), 1))));
            var_38 = (min(var_38, (((-(min(1, (arr_26 [i_12 + 1] [i_12] [i_12 + 2] [i_12 + 1] [i_23]))))))));
            var_39 = arr_48 [i_23] [i_23];
            arr_88 [i_12] [i_23] = (arr_47 [i_12 - 1] [i_12 - 1] [i_12 - 1]);
        }
        arr_89 [i_12] = -1;
    }
    #pragma endscop
}
