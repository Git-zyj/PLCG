/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (20 <= 17759);
        arr_4 [i_0] = (min(((min((!17785), var_6))), (((arr_0 [i_0 + 1] [i_0 + 1]) ? var_12 : (arr_2 [i_0 - 2])))));
        arr_5 [21] = ((((max(((min((arr_2 [i_0]), 17768))), (min((arr_0 [3] [3]), (arr_0 [18] [i_0 - 2])))))) ? (arr_1 [i_0 - 1]) : (!-9)));
        arr_6 [i_0] = ((var_4 ^ ((((arr_2 [i_0 + 1]) >= (arr_2 [i_0 - 1]))))));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_9 [10] [i_1] = ((((min(17777, 224))) ? (((-(arr_0 [i_1 + 1] [i_1 + 1])))) : (((max(62069, var_9)) % var_0))));

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                arr_16 [i_3] = ((((max(144115188075855871, (arr_0 [i_2] [i_2])))) * (arr_15 [i_1 + 1])));
                var_14 = ((~(arr_10 [i_1 + 1] [i_1] [i_1 + 1])));
            }
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                arr_20 [i_1] [4] [7] [4] = (max(((-var_9 ? var_11 : (((arr_13 [i_4] [i_1 + 1] [i_1 + 1]) ? 1 : var_3)))), 224));
                var_15 = (max(91, ((6 ? 0 : 6))));
                arr_21 [i_1] = (max(((((arr_11 [i_1 - 2]) ? (arr_11 [i_1 - 2]) : (arr_11 [i_1])))), var_9));
            }
            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                var_16 = (min((((!(arr_14 [i_1] [i_1] [i_1] [i_1])))), (max((arr_11 [i_5 + 3]), (((62032 % (arr_13 [17] [i_2] [i_2]))))))));

                for (int i_6 = 4; i_6 < 22;i_6 += 1) /* same iter space */
                {
                    arr_27 [i_1] [i_1] [i_1] [i_1] = ((~(((!((min(var_0, (arr_13 [i_1] [i_2] [i_1])))))))));

                    for (int i_7 = 2; i_7 < 22;i_7 += 1)
                    {
                        var_17 = (((max((536870911 * 0), var_11)) ^ ((min(-1312190171, -17769)))));
                        var_18 = (min(var_18, ((((var_2 < var_11) == (((arr_12 [i_7 - 2]) ? (arr_19 [i_1 - 2] [i_2]) : (arr_12 [i_2]))))))));
                    }
                    var_19 *= (max((65533 - 26298), (max(16, (arr_18 [14] [i_5 + 1] [10] [i_6 + 1])))));
                }
                /* vectorizable */
                for (int i_8 = 4; i_8 < 22;i_8 += 1) /* same iter space */
                {
                    arr_32 [i_1] [i_1] [i_1] [11] [i_1] = (((((4 ? var_12 : var_11))) ? -17759 : ((130 ? var_2 : var_9))));
                    var_20 = 2147483647;
                }
                var_21 = (max(var_21, ((((arr_22 [i_1] [i_2] [i_1]) >> (min((((var_12 ? var_1 : var_10))), (20 / var_3))))))));
                var_22 = (min(var_22, ((((arr_15 [i_2]) ? var_0 : 65516)))));
            }

            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {

                /* vectorizable */
                for (int i_10 = 2; i_10 < 22;i_10 += 1)
                {
                    arr_37 [i_1] [18] [i_9] = (((arr_12 [i_1 + 1]) >> (3749092649 - 3749092595)));
                    var_23 = (!127);
                }
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    var_24 = (((var_12 / 104) ^ (((~((((arr_10 [i_1] [i_2] [i_9]) < (arr_33 [i_1] [i_1])))))))));
                    arr_41 [i_1] [i_2] [i_2] [i_11] [i_2] = (((~130944) ? var_1 : (((arr_0 [i_1] [i_2]) >> var_6))));
                    var_25 = (max(var_25, var_13));
                    var_26 = (min(var_26, (((((((((arr_19 [i_2] [i_1]) ? 27 : var_11))) ? (arr_29 [i_1 + 1] [i_2] [i_2] [i_2] [i_2] [2]) : (arr_15 [i_1]))) == var_0)))));
                }
                arr_42 [i_1] = 45;
            }
            /* vectorizable */
            for (int i_12 = 1; i_12 < 21;i_12 += 1)
            {
                arr_45 [i_12] = (((((-(arr_10 [10] [i_2] [i_1])))) && var_1));
                arr_46 [i_2] = ((!(((var_9 ? 2372894019 : 65535)))));
            }
            for (int i_13 = 4; i_13 < 20;i_13 += 1)
            {
                arr_50 [i_1] [i_1 + 1] [i_2] [i_1 + 1] &= (min((max((arr_33 [i_13 - 2] [i_13 + 1]), (~var_3))), var_3));
                var_27 = (arr_12 [i_2]);
            }
            var_28 = (~var_7);
            arr_51 [22] [i_2] = (arr_2 [i_1]);
        }
        arr_52 [i_1] = (arr_11 [i_1 + 1]);
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 22;i_14 += 1)
    {
        /* LoopNest 2 */
        for (int i_15 = 2; i_15 < 19;i_15 += 1)
        {
            for (int i_16 = 2; i_16 < 20;i_16 += 1)
            {
                {
                    var_29 = ((6 ? (~var_4) : (arr_14 [15] [4] [i_15 + 3] [i_16 + 1])));
                    var_30 = (1856987299 != var_3);
                    var_31 = (min(var_31, var_10));
                }
            }
        }
        arr_61 [i_14] [9] = (arr_53 [i_14] [i_14]);
    }
    var_32 = (min(var_4, var_10));
    var_33 = var_3;
    #pragma endscop
}
