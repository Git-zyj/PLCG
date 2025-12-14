/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 |= max(1309107857, 3591340542);
        var_16 = ((((var_12 ? 8393082069306541676 : (((-258811271 ? (arr_1 [1] [i_0]) : 1))))) - ((max(-85573554, (min(var_6, var_10)))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_17 |= (((1 % -64) ? (arr_3 [i_1] [i_1]) : (arr_4 [i_1] [i_1])));
        var_18 = (arr_3 [i_1] [i_1]);
        arr_5 [i_1] = (max((((arr_2 [i_1]) ? var_0 : -39)), (min(var_4, (arr_4 [i_1] [i_1])))));
        arr_6 [i_1] = (((max(var_12, var_6)) <= (((min(-947, var_7))))));
        arr_7 [i_1] = ((var_2 ? ((var_2 + ((var_5 ? (arr_4 [i_1] [i_1]) : (arr_3 [i_1] [i_1]))))) : ((((var_9 & var_5) ? ((max((arr_2 [i_1]), var_7))) : ((var_3 ? 1 : var_10)))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        var_19 = (1 & 19951);
        var_20 = -20699;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_21 = (((((0 ? (arr_0 [i_3]) : var_9))) ? (!-1) : ((((arr_11 [i_3]) == var_2)))));
        var_22 = (arr_8 [i_3]);
        arr_13 [i_3] [i_3] = ((1 ? 610425159 : (arr_12 [i_3] [i_3])));
        arr_14 [i_3] [i_3] = (63 + 0);
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_23 -= (((var_6 * 2097152) ? 0 : (-2147483647 - 1)));

        for (int i_5 = 2; i_5 < 12;i_5 += 1)
        {
            arr_20 [i_4] [i_4] [i_4] = (arr_0 [i_5 + 2]);
            var_24 = (arr_2 [i_5]);
            var_25 -= (arr_1 [i_5 - 1] [i_5 - 2]);
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_26 = ((((11 ? var_2 : 56)) <= 0));
            var_27 = (min(var_27, 16936));
            var_28 = -238954232;
        }
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            arr_25 [i_4] [i_4] [i_7] = ((20 & -186655672688481314) && -1);
            var_29 = (((((2133391410 || (arr_0 [6])))) & -833538630));
        }

        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            arr_30 [i_8] [i_8] [i_8] = (((arr_10 [i_4] [i_8]) ? (arr_27 [i_4]) : (((5 ? 5609511907711227249 : -63)))));

            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_30 = ((var_12 % (arr_27 [i_8])));
                /* LoopNest 2 */
                for (int i_10 = 3; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        {
                            var_31 ^= (4294967286 ^ ((1439966664 ? (arr_16 [i_8]) : (arr_24 [7] [i_9] [i_11]))));
                            var_32 ^= (64 != 247);
                            arr_40 [i_4] [5] [i_4] [i_8] [i_4] = var_14;
                            var_33 = (1 ^ -1);
                        }
                    }
                }
            }
            for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
            {
                var_34 = (arr_0 [i_8]);
                var_35 = (((arr_28 [i_8]) ? (((var_8 ^ (-2147483647 - 1)))) : var_13));
            }
            for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 1;i_15 += 1)
                    {
                        {
                            arr_49 [i_8] [i_14] [12] [i_8] [i_8] = 0;
                            arr_50 [i_4] [i_4] [i_14] [10] [i_14] [i_14] &= (-626538989624639349 * 1);
                            var_36 = (~1);
                            var_37 = (((arr_39 [i_8] [i_15] [i_15 - 1] [i_15 - 1] [i_15 - 1]) * (arr_39 [i_8] [i_8] [i_15 - 1] [i_15] [i_15 - 1])));
                        }
                    }
                }
                var_38 |= (var_11 == 2329220467);
                arr_51 [i_8] = (arr_33 [i_4] [i_8] [i_8]);
                var_39 = 1;
            }
            var_40 = ((var_3 == (((-118 + 2147483647) >> var_10))));
        }
        var_41 = 206;
    }
    for (int i_16 = 0; i_16 < 10;i_16 += 1)
    {
        var_42 = (min(((-82 ? (arr_47 [i_16] [i_16] [i_16] [i_16]) : 4294967295)), -301145963));
        var_43 = (190 - 2);
    }
    for (int i_17 = 0; i_17 < 24;i_17 += 1)
    {
        var_44 = (arr_10 [i_17] [i_17]);
        arr_58 [i_17] = (((var_5 + 2147483647) << (((max((max((arr_8 [i_17]), (arr_3 [i_17] [i_17]))), var_7)) - 17813938980882248433))));
    }
    var_45 = var_11;
    #pragma endscop
}
