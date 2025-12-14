/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((arr_0 [i_0]) ? ((49792 ? 15744 : (arr_0 [i_0]))) : var_7))) ? (((((15751 << (255 - 238)))) ? var_13 : -1320459745)) : (((arr_0 [i_0]) ? (arr_2 [i_0]) : ((-(arr_2 [i_0]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_14 &= (min((((!0) ? ((-125 ? -101 : 119)) : (49792 % -15))), (((arr_4 [12]) ? -1574570150 : 1320459744))));
                        var_15 = ((((((arr_0 [i_0]) ? var_0 : (arr_0 [i_0])))) ? (((arr_8 [i_0] [i_3]) | (arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1]))) : (((arr_2 [i_3]) ? (arr_9 [i_0] [8] [i_2] [8] [i_2]) : (arr_2 [i_0])))));
                        var_16 = (((max((arr_5 [i_0] [i_0] [i_0 + 1]), var_9))) * 0);
                    }
                }
            }
        }
        arr_10 [i_0] = (max(1160, 75));
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
    {
        arr_13 [i_4] = (min((arr_0 [i_4]), (((((-1 ? var_3 : (arr_0 [i_4])))) ? (arr_9 [i_4] [i_4] [i_4] [i_4] [i_4]) : var_8))));
        var_17 = (((((arr_12 [i_4]) ? var_1 : (((!(arr_4 [i_4])))))) * (max(((min(var_3, var_9))), ((var_5 - (arr_6 [i_4] [i_4] [i_4])))))));
        var_18 ^= -104;
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
    {
        arr_17 [i_5] [8] = (((arr_0 [24]) ? -var_7 : -237));
        var_19 = (max(var_19, 8));
        var_20 = max((arr_1 [18] [i_5]), (15 < 15738));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 1; i_7 < 13;i_7 += 1)
        {
            var_21 &= arr_7 [i_6];

            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                var_22 = (~-111);
                var_23 = var_8;

                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    var_24 = ((-(arr_5 [i_7 + 1] [i_7 + 3] [i_7 + 2])));
                    arr_28 [i_9] [i_9] [i_6] |= ((((((arr_8 [i_9] [i_9]) ? var_13 : (arr_11 [i_9])))) ? var_5 : (arr_25 [i_7 + 2] [i_7 + 3] [i_7] [i_7 + 2] [i_7 + 2])));
                    var_25 = (arr_23 [i_7 - 1] [i_7 + 2] [i_7 + 2]);
                    arr_29 [i_6] [i_6] [i_6] [i_6] = (arr_6 [1] [10] [i_6]);
                }
                for (int i_10 = 2; i_10 < 13;i_10 += 1)
                {
                    arr_33 [i_6] [i_7] [i_8] [i_8] [i_6] [12] = (((arr_31 [i_6] [i_6] [i_6] [i_6] [15] [1]) ? (arr_9 [i_6] [10] [i_6] [i_8] [i_6]) : 8));
                    var_26 = (!1160);

                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        var_27 = ((!(arr_22 [i_7 + 1] [i_7 + 3])));
                        arr_36 [i_6] [i_7 - 1] [i_6] [i_6] [i_6] [i_6] [i_6] = (arr_0 [i_6]);
                    }
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        var_28 = (min(var_28, (((~(arr_25 [i_7 + 2] [i_7 + 2] [i_10 - 2] [15] [i_10 - 1]))))));
                        var_29 *= 1;
                        var_30 = (!var_5);
                        arr_39 [4] [i_10] [i_6] [i_6] [i_6] [i_6] [i_6] = ((-126 > (arr_18 [i_6] [i_10])));
                    }
                    for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
                    {
                        var_31 = (~(((!(arr_34 [i_6] [i_10 - 2] [i_6] [i_6] [i_6])))));
                        var_32 = 0;
                    }
                    for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
                    {
                        arr_44 [i_6] = arr_20 [i_8];
                        arr_45 [10] [i_14] &= ((1320459744 ? 0 : 1320459754));
                        arr_46 [i_6] [i_7] [i_8] [i_8] [i_6] [i_10] [i_14] = ((var_7 ? ((var_11 | (arr_22 [i_7] [i_10 - 1]))) : (arr_37 [i_7 + 2] [i_7 - 1] [i_10 + 3] [i_10])));
                    }
                }
            }
            for (int i_15 = 0; i_15 < 16;i_15 += 1)
            {
                arr_49 [i_6] = (arr_9 [i_6] [i_6] [i_6] [20] [20]);
                arr_50 [i_6] [11] [i_6] = (arr_43 [i_6] [i_6]);
                var_33 = ((~(arr_5 [i_7 - 1] [i_7 + 1] [i_7 - 1])));
            }
            var_34 += (-((var_3 ? var_0 : (arr_32 [i_6]))));
        }
        var_35 = (max(var_35, (((!((((arr_26 [i_6] [1] [1] [i_6] [7] [i_6]) ? 49776 : (arr_25 [i_6] [12] [i_6] [15] [i_6])))))))));
        var_36 = (min(var_36, (((arr_18 [0] [i_6]) ? (arr_7 [i_6]) : (arr_7 [i_6])))));

        for (int i_16 = 0; i_16 < 16;i_16 += 1)
        {
            var_37 *= -1320459745;
            var_38 = (arr_32 [i_6]);
            var_39 = (((arr_2 [i_6]) <= (arr_2 [i_6])));
        }
        arr_54 [i_6] [i_6] = 24732;
    }
    var_40 = ((~var_2) ? var_0 : var_2);
    var_41 = 248;
    var_42 = (var_10 == var_4);
    var_43 = (~248);
    #pragma endscop
}
