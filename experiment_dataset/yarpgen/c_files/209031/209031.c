/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (min(var_3, (4294967295 * -32)));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_13 = ((+(((arr_2 [i_1] [i_1] [i_1]) ? (arr_2 [i_0] [i_1] [i_0]) : var_6))));
            arr_4 [i_0] [0] [i_0] = 14213;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_10 [i_0] = 126;
                        var_14 = (!57481);
                    }
                }
            }

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_15 = (min(var_15, (((((-(arr_0 [i_0] [i_0])))) || (arr_2 [i_0] [i_1] [i_4])))));
                var_16 = ((-(arr_6 [i_1 - 1] [i_4])));
                arr_13 [i_0] [i_0] [i_1] [11] = (arr_5 [i_1 + 1] [i_1 + 3] [i_1 + 2]);
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            arr_18 [i_0] [i_5] = ((+(((arr_0 [i_5] [i_5]) & var_0))));

            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                arr_22 [i_0] [i_0] = var_4;
                var_17 = ((!(((1238828090 ? -30675 : 224)))));
                var_18 = (!(arr_6 [i_0] [i_6]));

                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    var_19 *= (~var_11);
                    var_20 = ((var_9 ? 4767835879346131486 : (arr_6 [i_0] [i_6])));
                    var_21 = var_2;
                }
                for (int i_8 = 1; i_8 < 10;i_8 += 1)
                {
                    arr_29 [i_0] [i_0] [i_6] [i_8 + 1] = ((!(var_11 * var_2)));

                    for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                    {
                        arr_34 [i_9] &= ((!(521838343 != 4637443758971145588)));
                        arr_35 [i_8] [i_8] [i_5] [i_5] [i_8] = (!4294967295);
                        var_22 = (min(var_22, ((((arr_32 [i_0] [i_5] [i_6] [i_8 + 1] [i_9]) * var_4)))));
                    }
                    for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
                    {
                        arr_40 [i_0] [i_0] [4] [i_8] [i_10] = ((-(arr_38 [i_5] [i_5] [i_5] [i_0])));
                        var_23 -= (((((arr_26 [i_0] [i_5] [i_6]) ? (arr_12 [i_0] [7] [i_0]) : (arr_27 [i_0] [i_5] [i_6] [i_8] [i_10]))) / (arr_32 [i_8] [i_8] [i_8] [i_8 + 1] [i_8])));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_11 = 1; i_11 < 9;i_11 += 1)
        {
            arr_45 [i_0] [i_11] = (((((arr_5 [0] [i_11 - 1] [i_11 - 1]) + 2147483647)) << (var_11 - 1318661573273883103)));
            arr_46 [i_0] = ((((38983 | (arr_28 [i_0] [i_0] [i_0] [i_0]))) | var_7));
            var_24 = (1 & -9166);

            for (int i_12 = 1; i_12 < 10;i_12 += 1)
            {
                var_25 = (arr_11 [i_0] [i_0] [i_0]);
                var_26 = (max(var_26, var_4));
            }
        }
        var_27 = ((var_2 / (var_7 ^ var_6)));
        arr_50 [i_0] [i_0] |= ((((min((arr_5 [i_0] [i_0] [i_0]), ((min((arr_20 [i_0] [8] [i_0]), (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) | (var_3 ^ var_9)));
        arr_51 [i_0] [i_0] = (arr_16 [i_0] [i_0] [i_0]);
        var_28 = (arr_32 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 22;i_13 += 1)
    {
        arr_54 [i_13] [i_13] = (((arr_52 [i_13] [i_13]) != (var_7 | var_2)));
        var_29 = (arr_53 [i_13] [i_13]);
        arr_55 [i_13] = (!(4697448182643148402 - 7897789028540579903));
    }
    #pragma endscop
}
