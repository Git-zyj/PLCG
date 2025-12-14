/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((!var_13), -1148460579));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_19 ^= (min(((((arr_1 [i_0 - 1] [i_0 - 1]) ? (arr_1 [i_0 + 1] [i_0 + 1]) : (arr_1 [i_0 + 1] [i_0 - 1])))), (min(var_7, (arr_3 [i_0 - 1])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 6;i_2 += 1)
            {
                {
                    var_20 = ((!(~-26)));
                    arr_10 [i_0] [i_0] [i_0] = (((!25579) ? (min(var_13, var_17)) : ((-52 ? (arr_2 [i_0]) : -1652806045))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        var_21 = 104;
        var_22 |= (!var_11);
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        var_23 = (((arr_21 [i_3 - 1]) ? 25 : (arr_12 [i_3] [i_3])));
                        arr_23 [i_3] [i_3] [i_3] [i_6] [i_4] = (arr_19 [i_3] [i_3]);
                        var_24 = (((arr_21 [i_4 - 1]) ? var_8 : -626083844));
                        arr_24 [i_3] [i_6] = ((-29 ? (arr_20 [i_3 + 2] [9] [i_3] [i_4 - 1] [i_3] [i_4 + 3]) : 3378524924));
                    }
                }
            }
        }
        arr_25 [i_3] [i_3] = (arr_14 [i_3]);
        arr_26 [6] &= arr_21 [i_3];
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        var_25 ^= (arr_13 [i_7] [i_7]);

        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            var_26 = (max(var_26, (max(((25 ? 103 : 8151937707788772814)), ((max((arr_29 [i_8]), (arr_29 [i_7]))))))));
            var_27 *= 158;
            arr_33 [12] |= (max((min((arr_13 [i_7] [i_8]), (arr_32 [i_8]))), (arr_14 [i_8])));
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            var_28 = (min((((arr_14 [i_9]) ? var_9 : (arr_14 [i_9]))), (arr_14 [i_7])));
            var_29 = max((max(3236632287, (arr_19 [i_9] [i_9]))), var_10);
        }

        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            var_30 = (max((((arr_19 [i_7] [i_10]) ? (arr_30 [i_7] [3] [i_10]) : (arr_32 [i_10]))), (max(123, 4294967295))));

            /* vectorizable */
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                arr_43 [i_11] [i_10] [i_11] [i_11] = (arr_41 [0] [i_10] [i_10] [i_11]);
                var_31 = (((((152 ? (arr_18 [i_11] [i_10] [i_11]) : -26))) ? (arr_22 [i_7] [i_10]) : (arr_17 [i_11] [i_10] [i_7])));
            }
            var_32 = max(((min((arr_14 [i_7]), (arr_14 [i_10])))), -51);

            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                arr_47 [i_7] [i_10] [i_12] = max(((min(-18, 97))), (((arr_42 [i_7] [i_10] [i_12] [0]) ? (arr_42 [7] [i_10] [10] [1]) : 0)));
                var_33 |= arr_20 [i_7] [i_7] [i_7] [i_10] [i_10] [i_12];
            }
            /* LoopNest 2 */
            for (int i_13 = 3; i_13 < 12;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 13;i_14 += 1)
                {
                    {
                        var_34 = (max(((min((min((arr_42 [i_14] [i_7] [i_10] [i_7]), 26)), (arr_28 [i_13 + 2] [i_14 - 2])))), (min(-690323360881328235, var_8))));
                        var_35 = (max(var_4, ((141863388262170624 ? (arr_37 [i_13 - 3] [i_14] [i_14 - 1]) : 20519))));
                    }
                }
            }
        }
        for (int i_15 = 3; i_15 < 13;i_15 += 1)
        {
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 0;i_17 += 1)
                {
                    {
                        var_36 |= (arr_50 [i_7] [0] [0] [i_17]);
                        var_37 = ((var_9 ? (max(106, var_17)) : (((min((arr_56 [i_7]), (arr_56 [1])))))));
                    }
                }
            }
            arr_63 [i_15] = (arr_32 [i_7]);
            /* LoopNest 3 */
            for (int i_18 = 0; i_18 < 14;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 14;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 14;i_20 += 1)
                    {
                        {
                            var_38 = (arr_59 [i_15 - 2] [i_18] [i_19] [i_20]);
                            var_39 *= ((((max(((((arr_31 [i_15] [i_15] [9]) ? (arr_54 [6] [6] [i_18] [i_20] [i_19] [i_18]) : var_7))), 0))) ? ((106 ? 7226384792658142820 : 3310806524)) : (min((arr_28 [i_15 - 1] [i_15 - 1]), var_2))));
                            var_40 += ((var_13 ? (arr_42 [i_15 - 2] [i_15 - 1] [i_15 - 2] [i_15 - 1]) : (max((arr_59 [i_15 - 3] [i_15 - 3] [i_15 + 1] [i_15 - 3]), (arr_59 [i_15 - 2] [i_15] [i_15 - 1] [i_15 - 2])))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_21 = 4; i_21 < 13;i_21 += 1)
            {
                for (int i_22 = 1; i_22 < 13;i_22 += 1)
                {
                    {
                        arr_77 [i_7] [i_7] [i_21] [i_22] &= min((min((arr_55 [i_15 - 3] [i_22 + 1] [i_22]), (arr_55 [i_15 - 3] [i_22 - 1] [1]))), ((~(arr_55 [i_15 - 3] [i_22 + 1] [7]))));
                        var_41 = (arr_70 [5] [5] [1] [i_22] [i_7] [i_15 + 1]);
                        var_42 += var_7;
                    }
                }
            }
        }
        for (int i_23 = 0; i_23 < 14;i_23 += 1)
        {
            var_43 *= var_12;
            var_44 = (max(((max(1, 104))), ((13653951895857043661 ? -7079341753412269282 : 87))));
            var_45 = -60;
        }
        var_46 = (min(var_46, var_0));
    }
    /* vectorizable */
    for (int i_24 = 0; i_24 < 21;i_24 += 1)
    {
        var_47 = 0;
        var_48 = (arr_80 [i_24]);
        arr_83 [i_24] = ((var_2 ? (arr_82 [i_24] [i_24]) : 4792792177852507954));
    }
    #pragma endscop
}
