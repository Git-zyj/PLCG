/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_0] = (arr_0 [i_0 - 1]);
            var_20 = (arr_3 [2] [i_0] [i_1]);
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_21 = (max(var_21, 7));
                            var_22 |= (arr_3 [i_0 - 3] [1] [i_0]);
                        }
                    }
                }
            }
            var_23 = (arr_1 [i_2]);
            arr_18 [i_0] [i_0] = (arr_6 [i_0 - 1]);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        var_24 = 21;
                        var_25 = 1;
                        var_26 |= arr_4 [i_0] [i_2] [i_7];
                        arr_23 [i_0] [i_6] [i_6] [i_7] [i_7] [i_2] = 1333;
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            arr_26 [i_0] [i_8] [i_8] = 3948472393689399863;
            arr_27 [i_8] [i_8] = (arr_11 [i_0 - 3] [i_8] [i_0] [i_8]);
        }
        var_27 *= 869275999;
        var_28 = 958320386;

        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            var_29 = (arr_11 [i_9] [i_9] [i_0] [i_0 + 1]);
            var_30 = (arr_10 [i_9] [i_9] [i_9] [i_0]);

            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                var_31 = (arr_14 [i_0]);
                var_32 = (min(var_32, (arr_0 [i_0 + 1])));
                arr_34 [i_0] [i_0] [i_0] = 60963;
                var_33 = (arr_21 [i_0 + 1] [i_0] [i_0 - 3] [i_0]);
            }
            for (int i_11 = 3; i_11 < 21;i_11 += 1) /* same iter space */
            {
                var_34 = (arr_19 [i_9]);
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        {
                            arr_44 [21] [i_9] [i_9] [i_12] [23] = (arr_19 [i_0 + 3]);
                            var_35 = -1138142421;
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_14 = 3; i_14 < 21;i_14 += 1) /* same iter space */
            {
                var_36 = 4294967295;
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 24;i_16 += 1)
                    {
                        {
                            arr_53 [i_0] [i_15] [i_16] = (arr_11 [i_16] [i_9] [19] [i_15]);
                            arr_54 [i_0] [i_9] [i_9] [i_15] [i_16] &= (arr_39 [i_0] [i_0 + 2] [i_0 + 2] [i_0]);
                            var_37 = arr_15 [7] [i_0];
                        }
                    }
                }
                var_38 |= (arr_39 [i_0] [6] [i_14] [i_14]);
                arr_55 [i_14] [i_9] [i_14 - 3] |= (arr_36 [i_14 + 3] [i_9] [i_0 + 3]);
            }
            for (int i_17 = 0; i_17 < 24;i_17 += 1)
            {
                var_39 = (arr_40 [11] [i_9] [i_17] [i_9] [i_0 + 1] [i_17] [i_17]);
                var_40 *= (arr_57 [i_0 - 3] [16] [i_17]);
                var_41 = 8849;
            }
            var_42 = (arr_9 [i_0 + 1] [i_0 - 3] [i_0 + 1]);
        }
        /* vectorizable */
        for (int i_18 = 0; i_18 < 24;i_18 += 1)
        {
            var_43 = (arr_36 [i_0] [i_0] [i_18]);
            var_44 |= -84;
            var_45 = (max(var_45, (arr_59 [i_0])));
            var_46 = -27380;
            var_47 ^= arr_22 [i_0 + 3] [i_18] [i_18] [i_0];
        }
        /* vectorizable */
        for (int i_19 = 0; i_19 < 24;i_19 += 1)
        {
            var_48 *= 3254441707;
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 24;i_20 += 1)
            {
                for (int i_21 = 2; i_21 < 22;i_21 += 1)
                {
                    {
                        var_49 = 13535;
                        arr_69 [9] = (arr_11 [i_0] [i_21 - 2] [i_20] [i_0 + 2]);
                    }
                }
            }
            var_50 = (min(var_50, (arr_40 [i_0] [i_0] [i_19] [i_0 + 3] [i_0 - 3] [i_0 + 3] [4])));
        }
    }
    /* LoopNest 2 */
    for (int i_22 = 0; i_22 < 15;i_22 += 1)
    {
        for (int i_23 = 3; i_23 < 13;i_23 += 1)
        {
            {

                for (int i_24 = 2; i_24 < 14;i_24 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_25 = 3; i_25 < 13;i_25 += 1)
                    {
                        for (int i_26 = 3; i_26 < 12;i_26 += 1)
                        {
                            {
                                var_51 = (arr_67 [i_22] [i_22] [i_24] [3]);
                                arr_84 [i_26] [i_26] |= 16783244137359572749;
                            }
                        }
                    }
                    var_52 = (min(var_52, (arr_75 [i_22] [i_23 + 2] [i_24])));
                    arr_85 [i_22] [i_22] [i_23 - 1] [14] = (arr_51 [i_23 - 1] [i_22] [10] [i_24] [i_22]);
                }
                var_53 = (max(var_53, -100));

                /* vectorizable */
                for (int i_27 = 1; i_27 < 11;i_27 += 1)
                {
                    arr_88 [i_22] [i_27] [i_27] = (arr_33 [i_22] [i_23 - 1] [i_27]);
                    arr_89 [i_27] = -26;
                    var_54 += 3634138818;
                    var_55 = arr_22 [i_22] [7] [i_27] [i_27 + 3];
                }
            }
        }
    }
    #pragma endscop
}
