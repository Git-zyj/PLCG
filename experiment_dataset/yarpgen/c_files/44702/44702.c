/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_5;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 -= (max(((128 | (arr_0 [i_0]))), 18446744073709551587));
        arr_3 [i_0] = (max((arr_1 [i_0] [i_0]), (arr_2 [i_0] [i_0])));
        arr_4 [i_0] [i_0] = ((arr_1 [i_0] [i_0]) - ((~(arr_1 [4] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_16 = (((9378102643775975171 ? 12717 : -1333431611)));
        var_17 = (13 | 1024);
        var_18 -= (((!243) ? (!12703) : var_13));
        var_19 -= (arr_2 [22] [i_1]);
        var_20 -= (((((~(((!(arr_7 [i_1] [3]))))))) < ((9378102643775975178 & (arr_6 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_21 = (arr_0 [i_2]);
        var_22 = (max(var_22, (((817 ? (max(var_9, (((-12737 ? -823 : 4611681620380876800))))) : ((((-814 <= ((192 ? 3154451570 : -835)))))))))));
        var_23 = (max(var_23, (12729 | -812)));
        arr_11 [i_2] = ((((((((((arr_9 [i_2] [i_2]) ? (arr_9 [i_2] [10]) : (arr_10 [i_2])))) || (arr_10 [i_2]))))) ^ (arr_10 [i_2])));
    }
    for (int i_3 = 4; i_3 < 23;i_3 += 1)
    {
        var_24 = (arr_2 [23] [i_3]);
        var_25 -= ((!(arr_12 [i_3 - 4])));
        var_26 = (((arr_2 [i_3] [i_3]) || (arr_2 [i_3] [i_3])));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 1; i_5 < 23;i_5 += 1)
            {
                var_27 = (max(var_27, (((!(((var_2 ? var_9 : (arr_0 [i_4])))))))));

                for (int i_6 = 3; i_6 < 21;i_6 += 1)
                {
                    var_28 = (max(var_28, (!-12704)));
                    arr_23 [i_4] &= (((arr_12 [i_3]) ? var_6 : (arr_17 [i_6] [i_4] [i_3])));
                }
                var_29 = (min(var_29, (arr_16 [i_3 + 1])));
                var_30 = (!809);
            }
            for (int i_7 = 3; i_7 < 21;i_7 += 1)
            {
                var_31 = ((!(arr_2 [i_3 - 2] [i_7 + 1])));
                var_32 = (((arr_21 [i_3] [i_3]) ? (arr_21 [i_3] [i_3]) : (arr_12 [i_3 - 4])));
            }
            var_33 *= var_9;
            arr_28 [i_3] [i_4] = -1688771510;
        }
        for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    {
                        var_34 = -32755;
                        var_35 -= 1415367929;
                    }
                }
            }
            var_36 = (min(var_36, (~5172357977384087754)));
            arr_35 [i_3] [i_8] [i_3] = var_4;
        }
        var_37 = var_13;
    }
    var_38 = var_8;

    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 16;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 14;i_13 += 1)
            {
                for (int i_14 = 4; i_14 < 15;i_14 += 1)
                {
                    {
                        arr_48 [i_12] [i_12] [i_13 + 3] [i_12] = ((!((max((arr_22 [i_14 - 1] [i_14 + 1] [i_14 - 1] [i_14 - 3] [i_14 - 2]), 232474801923862951)))));
                        var_39 = (arr_13 [i_12 - 1] [i_12 - 1]);
                    }
                }
            }
        }

        for (int i_15 = 0; i_15 < 17;i_15 += 1)
        {
            var_40 = ((((!(arr_24 [i_11] [i_15]))) ? (!376674281) : ((-(arr_22 [i_11] [i_11] [i_15] [i_15] [i_15])))));

            /* vectorizable */
            for (int i_16 = 0; i_16 < 17;i_16 += 1)
            {
                var_41 = ((145 == (arr_38 [i_15])));
                var_42 = (max(var_42, 245));
            }
        }
        for (int i_17 = 0; i_17 < 17;i_17 += 1)
        {
            var_43 = (min(var_43, ((((((arr_29 [i_11]) ? (arr_29 [i_11]) : (arr_29 [i_17])))) ? 243 : (((((((arr_56 [i_11] [i_17]) < 7)))) ^ (arr_26 [i_11])))))));
            var_44 = 8434;
            var_45 *= (((arr_18 [i_11] [i_11] [i_11]) > (arr_43 [i_11] [i_17] [i_11] [i_11])));
        }
        /* vectorizable */
        for (int i_18 = 0; i_18 < 17;i_18 += 1)
        {
            var_46 = (max(var_46, (arr_15 [i_11])));
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 17;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 17;i_20 += 1)
                {
                    {
                        arr_67 [i_11] [i_19] = ((var_6 <= (arr_12 [i_19])));
                        var_47 = 7900405113079255790;
                        var_48 = (arr_21 [i_18] [20]);
                    }
                }
            }
            var_49 -= (arr_17 [i_11] [i_11] [i_18]);
        }
    }
    for (int i_21 = 2; i_21 < 9;i_21 += 1)
    {
        var_50 += -32726;
        var_51 = ((((arr_57 [i_21 + 2] [i_21] [i_21]) <= (arr_51 [i_21 + 1] [i_21 - 1] [i_21]))));
        var_52 = 129;
    }
    #pragma endscop
}
