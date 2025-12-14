/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_10 = (max((arr_0 [i_1]), -26983));
                arr_5 [i_1] [i_0] [i_1] = (((((min(var_8, (arr_3 [i_1]))))) ? (max((min(var_7, (arr_0 [i_0]))), (arr_1 [i_0 - 1]))) : (((min((max((arr_1 [i_1]), (arr_3 [i_1]))), (max(var_9, (arr_1 [i_0 - 2])))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_11 = (min(var_11, ((min((max((arr_8 [i_2] [i_2]), (arr_8 [i_2] [i_2]))), ((((arr_9 [i_2]) || (arr_9 [i_2])))))))));
        arr_10 [i_2] = ((((((max(-553613503496228744, 4294967276)))) + 2147483647)) << (((arr_6 [i_2]) - 1789508542)));
        arr_11 [i_2] [i_2] = ((max((arr_8 [i_2] [i_2]), (arr_9 [i_2]))));
        var_12 *= (min((((~((~(arr_9 [i_2])))))), 309348548));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        var_13 = (!(!19));

                        for (int i_6 = 4; i_6 < 23;i_6 += 1)
                        {
                            arr_22 [i_2] [i_3] [i_4] [i_3] [i_6] = (max(((((arr_20 [i_6] [i_6] [i_6] [i_6] [i_6 - 3]) ? (arr_20 [i_6] [i_6] [i_6 + 1] [i_6] [i_6 - 2]) : (arr_20 [i_6] [i_6] [i_6] [i_6] [i_6 + 1])))), (max((arr_15 [i_3 - 1] [i_6 - 4] [i_3 - 1]), (((arr_15 [i_2] [i_2] [i_2]) ? -2546512276764032217 : (arr_18 [i_3])))))));
                            var_14 = (min(var_14, (arr_8 [i_2] [i_2])));
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_15 = 3985618750;
                            arr_26 [i_3] = (max((arr_23 [i_2] [i_3] [i_4] [i_5] [i_7]), var_8));
                            var_16 = (((((((-298269672 ? 4140737818 : 15))) || (arr_13 [i_4] [i_5] [i_7]))) ? ((((max((arr_18 [i_3]), (arr_19 [i_2] [i_3] [i_2] [i_2] [i_2])))) ? (arr_19 [i_2] [i_3] [i_2] [i_2] [i_7]) : (arr_24 [i_2] [i_3] [i_4] [i_4] [i_5] [i_5] [i_7]))) : (arr_18 [i_3])));
                            arr_27 [i_2] [i_3] [i_2] [i_2] [i_2] = ((((((arr_18 [i_3]) & (arr_23 [i_2] [i_2] [i_2] [i_2] [i_3])))) ? (min(var_1, (arr_12 [i_2] [i_3]))) : (arr_21 [i_2] [i_3 + 1])));
                            var_17 = (((max(((max(0, 1771157125))), (arr_8 [i_7] [i_2]))) < ((((arr_13 [i_2] [i_3] [i_3]) ? (arr_20 [i_2] [i_3] [i_3] [i_3 - 1] [i_3 - 1]) : (((arr_16 [i_3] [i_3] [i_5]) ? var_2 : 61440)))))));
                        }
                    }
                }
            }
        }
    }
    for (int i_8 = 3; i_8 < 19;i_8 += 1)
    {
        var_18 = (((((max(65528, -553613503496228744)))) | ((max(var_4, (arr_7 [i_8] [i_8]))))));
        arr_31 [i_8 + 4] = (min((arr_1 [i_8 - 3]), (((arr_24 [i_8 + 1] [i_8 + 2] [i_8] [i_8] [i_8] [i_8 + 1] [i_8 + 1]) ? (arr_6 [i_8]) : (((max(-3495, 42010))))))));

        /* vectorizable */
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            var_19 = (((arr_21 [i_8] [i_9]) == (arr_6 [i_8])));

            for (int i_10 = 4; i_10 < 21;i_10 += 1)
            {
                var_20 = ((arr_28 [i_8 - 1]) > ((var_7 ? (arr_16 [22] [22] [i_10 + 2]) : var_2)));

                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_21 = 8555360721051305726;
                    var_22 = var_1;
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    var_23 = (min(var_23, ((-(arr_32 [i_8 - 1] [i_10 - 1])))));
                    var_24 = ((!(arr_19 [i_8 - 1] [i_12] [i_10] [i_10 + 1] [i_12])));
                    var_25 -= var_7;
                    var_26 = var_2;
                    arr_44 [i_8] [i_8] [i_8 + 4] [i_12] = ((1 ? (arr_40 [i_8] [i_8] [i_8] [i_8 + 2] [i_10 - 4]) : 0));
                }
            }
            var_27 = (arr_6 [i_9]);
            var_28 = (min(var_28, var_7));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 23;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 22;i_14 += 1)
                {
                    {
                        arr_53 [i_8] [i_9] [i_8] [i_14] [i_14] = (arr_25 [i_14 + 1] [i_8 + 3] [i_13]);
                        var_29 = var_0;
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_15 = 0; i_15 < 23;i_15 += 1)
        {
            var_30 = 2523810162;
            var_31 = (arr_52 [i_8] [i_15] [i_15] [i_8] [i_8 - 1]);
            var_32 = (min(var_32, (arr_15 [i_8] [i_8 - 3] [i_8])));
            var_33 = (arr_37 [i_15] [i_8] [i_8 - 2] [i_8] [i_8] [i_8 + 4]);
        }
        for (int i_16 = 0; i_16 < 23;i_16 += 1)
        {
            var_34 = var_3;
            var_35 -= ((max((arr_42 [i_8 + 3] [i_8 - 3] [0] [0] [i_8 - 2]), (arr_42 [i_8 + 4] [i_8 + 4] [2] [2] [i_8 + 3]))));
        }
        for (int i_17 = 1; i_17 < 1;i_17 += 1)
        {
            var_36 = (max(var_36, (((~(max((arr_52 [i_8] [2] [i_17 - 1] [i_17] [2]), (min(-29, 4140737818)))))))));
            var_37 ^= (max((((arr_9 [i_8 + 1]) ? (arr_16 [1] [i_8 - 2] [1]) : (((var_5 ? (arr_9 [i_8]) : var_8))))), ((max((arr_39 [i_8 + 3] [i_8] [i_17] [i_17 - 1]), (arr_39 [i_8 + 4] [i_17] [i_17] [i_17 - 1]))))));
            var_38 += ((((arr_51 [0] [i_17] [i_17 - 1] [i_17]) ^ 26)));
            var_39 = (min(4140737830, 41981));
            var_40 += max((((arr_14 [22]) - (arr_0 [i_8]))), (max((arr_14 [12]), (20 / 41971))));
        }
    }
    for (int i_18 = 2; i_18 < 8;i_18 += 1)
    {
        var_41 = (arr_19 [i_18] [i_18] [i_18 + 2] [i_18] [i_18]);
        arr_66 [i_18] &= ((var_3 <= (((max(20, var_8))))));
        var_42 = var_6;
    }
    for (int i_19 = 0; i_19 < 16;i_19 += 1)
    {
        var_43 = min((max((max(var_4, var_1)), ((~(arr_55 [i_19] [i_19]))))), ((16 ? 47419855 : (max(2470128596, 1065353216)))));
        arr_69 [i_19] = (arr_61 [i_19] [i_19]);
    }
    #pragma endscop
}
