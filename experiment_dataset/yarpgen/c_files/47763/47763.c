/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 536870911;

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_19 = (min(((!(min(1, 1)))), (((min(-536870909, var_8)) >= ((var_0 ? (arr_1 [i_0]) : var_9))))));
            arr_5 [i_1] = (arr_3 [i_0] [i_0] [6]);
            var_20 = ((-((((var_4 ? 1 : var_2))))));
        }

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        arr_13 [4] [i_2] [i_2] [4] [i_4] = (((((var_2 >= (arr_12 [i_0 - 3])))) >= (~1)));
                        var_21 = 12084;
                        var_22 = (min((((max(var_17, -1678740626827369696)) | (~var_10))), (((max(var_10, var_10))))));
                    }
                }
            }
            arr_14 [i_0] = ((((~var_17) ? var_17 : (var_16 < 9))) % 2947645210);
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            arr_18 [i_0] [i_0] [i_0] &= ((((((arr_15 [11] [i_0] [14]) != var_1)))) * ((((max(var_14, var_0))) + (14609806091963076604 & 1))));
            var_23 = (((4294967295 * 56257) / -748143663228692949));
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_7 = 3; i_7 < 16;i_7 += 1)
            {
                var_24 = ((arr_0 [i_0 - 2]) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 3]));
                var_25 = (((arr_0 [i_0 - 2]) < var_5));
                var_26 = (((arr_8 [i_0 - 3] [i_0 - 3]) ? var_7 : var_2));

                for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                {

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_27 = (max(var_27, ((((arr_3 [i_0] [i_0] [i_8]) ? 2096128 : 18446744073709551615)))));
                        arr_32 [i_0] [i_6] [i_7 - 1] [i_7] [i_9] [i_6] [i_7] = 29;
                        var_28 = var_5;
                        var_29 = ((1262251038 ? (arr_31 [i_0 - 1] [i_0 - 2] [i_0 - 2] [17] [i_0 - 1] [3]) : var_9));
                        arr_33 [i_0] [i_6] [i_7 + 1] [i_8] [i_9] = (arr_22 [i_0 - 1] [i_0 - 3]);
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_30 = (((((-(arr_31 [i_0] [1] [i_7 + 1] [i_8] [i_0] [i_10])))) ? ((var_8 ? var_12 : var_13)) : (arr_0 [10])));
                        var_31 = var_8;
                        var_32 = (((arr_27 [i_8] [i_6] [i_10] [i_0 - 1] [i_6] [i_6]) - (arr_27 [17] [i_6] [i_7 - 2] [i_0 - 2] [i_10] [i_6])));
                    }
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        var_33 = (-(arr_9 [i_7 - 3] [i_7 - 3] [i_7] [i_0 - 3]));
                        var_34 = (max(var_34, ((((arr_36 [17] [i_7 - 3] [i_7 - 2] [i_0 - 3] [i_11]) <= (arr_30 [i_0] [i_6] [i_7] [i_8] [i_11]))))));
                        arr_39 [i_0] [i_6] [i_7] [i_8] [i_11] [i_11] = ((~(((arr_12 [7]) ? var_12 : 3187484465608505621))));
                        var_35 = (arr_34 [i_0 - 2]);
                    }
                    var_36 ^= var_12;
                }
                for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
                {
                    var_37 &= (307358511071245796 * (!6));
                    var_38 = (arr_36 [12] [i_6] [i_0] [i_7 - 3] [i_7 - 1]);
                }
                var_39 = ((-76 ? 258048 : (~-868767577515520495)));
            }
            var_40 = (min((((arr_10 [i_6] [i_0 + 1] [i_6] [i_0 - 2] [i_6]) ? var_9 : var_14)), 3104118086));
            arr_42 [i_0] [i_6] [i_0] = (max((((((arr_11 [i_0] [i_6] [i_0] [i_0]) ? (arr_15 [i_0] [i_0] [i_6]) : var_14)) >= (max(var_1, 1190849210)))), (min(1, (arr_26 [i_0 - 2] [i_0] [i_0 - 2])))));

            /* vectorizable */
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                var_41 = -536870911;
                arr_45 [i_0] [i_6] [i_13] [i_13] = (((arr_22 [i_0 - 1] [i_0 - 1]) ? (arr_36 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 2]) : var_1));
            }
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
        {
            var_42 ^= (1 + 1);
            var_43 = ((arr_21 [i_0 + 1]) ^ (arr_21 [i_0 + 1]));
            var_44 = ((1975446632 ? 1151990331 : 18446744073709551599));

            for (int i_15 = 0; i_15 < 18;i_15 += 1)
            {
                arr_51 [i_15] [i_15] = (var_2 - var_8);
                arr_52 [i_15] [9] [i_0 - 2] [i_0 - 3] = var_14;
            }
        }
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 16;i_16 += 1)
    {
        arr_55 [i_16] = var_1;
        arr_56 [i_16] = (((((-(arr_41 [10] [i_16] [i_16] [i_16] [i_16] [i_16])))) ? 8 : 4294967295));
    }
    #pragma endscop
}
