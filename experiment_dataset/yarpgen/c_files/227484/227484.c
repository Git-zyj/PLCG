/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_6 [i_2] = 1807432664;
                    var_11 = (min(var_11, ((((!55) != (((!2596) ? (arr_1 [i_0 + 2] [i_2]) : -21)))))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_12 = var_9;
                        arr_9 [i_2] [i_1] [i_1] [i_2] [i_2] = (((((var_4 ? var_2 : (arr_0 [i_0 + 1] [i_0 - 1])))) ? var_10 : ((~(((arr_4 [i_0 + 3] [10] [i_3]) ? var_2 : var_9))))));
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {

                        for (int i_5 = 2; i_5 < 22;i_5 += 1)
                        {
                            var_13 = (min(var_13, (((var_10 ? ((min(var_6, (max(var_6, (arr_14 [i_5] [i_4] [i_2] [i_0] [i_0])))))) : ((min((arr_13 [i_0 - 1] [i_5 + 1] [i_0 - 1] [i_4] [i_5 + 1]), (arr_13 [i_0 - 1] [i_5 + 1] [20] [i_5 + 1] [i_5 - 2])))))))));
                            var_14 = var_1;
                            arr_16 [i_0 - 1] [i_2] [i_5] = ((((min((arr_2 [i_0 + 3] [i_1]), (arr_12 [i_0] [i_1] [i_1] [i_1] [i_0 + 1] [i_2] [i_1])))) ? (max(32763, var_1)) : ((5231283037600070015 ? var_1 : (arr_12 [i_0] [i_1] [i_0] [i_4] [i_0 + 3] [i_0] [i_5 - 2])))));
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            arr_19 [i_6] [i_1] [i_2] = var_10;
                            var_15 ^= ((-((32765 ^ (arr_10 [18] [18] [i_0] [10])))));
                            arr_20 [i_6 + 1] [i_2] [i_2] [i_0] = (!(((var_9 ? (arr_10 [i_2] [i_1] [i_2] [i_2]) : var_10))));
                            var_16 = (arr_3 [i_4]);
                            var_17 = (((((var_7 ? (arr_7 [1] [i_4] [i_2] [i_0 + 1]) : 133))) ? (((24576 ? (arr_5 [i_0] [i_2] [i_2]) : var_3))) : var_6));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            arr_23 [i_0 + 1] [4] [i_0] [i_0 + 3] [i_0 + 3] [1] &= (((arr_15 [i_7] [i_4] [i_1]) | (arr_15 [i_2] [i_4] [i_4])));
                            var_18 = (((var_6 ? 13516801150567673972 : var_1)));
                            var_19 = var_8;
                        }
                        for (int i_8 = 2; i_8 < 21;i_8 += 1)
                        {
                            var_20 ^= ((var_2 ? ((((max(var_5, 60037))) ? ((var_2 ? var_1 : (arr_8 [i_8] [i_8] [i_2] [i_8] [i_0 + 1]))) : (((max((arr_22 [i_0 + 2]), var_4)))))) : ((((arr_10 [i_8] [i_1] [i_2] [i_1]) >> (((arr_10 [i_8] [i_2] [i_8] [i_2]) - 210)))))));
                            arr_27 [i_0 + 1] [i_2] = (min(((max((((!(arr_10 [i_2] [i_1] [i_2] [i_4])))), (max(64, var_7))))), (min(-27995, var_5))));
                        }
                        arr_28 [20] [12] [i_2] [i_2] [i_1] [i_0] = (min(((((max(var_3, var_6))) ? (arr_2 [i_0] [i_1]) : (0 && var_4))), ((((arr_26 [i_2] [i_1] [i_2] [i_4] [19] [i_1]) ? (!var_2) : -1)))));
                    }
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        var_21 = 134;
                        var_22 = ((-32753 ? (arr_1 [i_0 - 1] [i_0 - 1]) : var_10));
                        var_23 = (max((var_6 ^ var_6), ((max((arr_22 [i_0 + 2]), var_3)))));
                        var_24 -= (max(((((min(var_10, var_6))) ? -205 : (max(var_5, var_9)))), (arr_10 [20] [i_2] [i_1] [20])));
                    }
                }
                arr_32 [i_1] [i_1] [i_0] = (min((((arr_26 [0] [i_1] [i_0] [10] [i_0 - 1] [i_1]) ? (arr_29 [i_0 - 1] [i_1] [i_1] [i_1]) : var_5)), (arr_22 [i_0 + 1])));

                for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                {
                    var_25 = (min((((!(((arr_8 [i_0 + 2] [10] [i_1] [10] [i_0 + 2]) && 1))))), (((((861241396 ? var_1 : var_6))) ? (min(var_4, 11038891771393179215)) : var_6))));
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 20;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 22;i_12 += 1)
                        {
                            {
                                arr_39 [i_0] = var_4;
                                var_26 = ((((min((arr_1 [i_0] [i_1]), var_2))) % (((((var_1 ? var_7 : var_4))) ? 1151795604700004352 : ((((arr_3 [i_0]) ? var_0 : (arr_35 [i_12] [i_11] [i_10] [i_0 + 1]))))))));
                                var_27 = (+(max((min((arr_35 [i_0] [i_1] [i_0] [i_12 - 1]), (arr_31 [i_0] [i_0] [i_10] [i_0] [0] [i_0]))), var_6)));
                            }
                        }
                    }
                    var_28 = (((((21 / ((min(1, (arr_5 [i_0] [6] [i_10]))))))) ? var_8 : (min(((var_5 ? var_7 : var_8)), (~var_6)))));
                    arr_40 [i_0] [i_0] [i_0] = ((((min((arr_22 [i_0 - 1]), 32766))) || (((0 ? (arr_22 [i_0 - 1]) : 18446744073709551615)))));
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                {
                    var_29 ^= var_9;
                    var_30 = (min(var_30, ((((arr_3 [i_13]) ? ((148 << (var_0 - 40651))) : ((var_5 ? 65535 : var_8)))))));
                    var_31 = var_5;

                    for (int i_14 = 3; i_14 < 19;i_14 += 1)
                    {
                        var_32 = (((arr_0 [i_14 - 2] [i_0 + 1]) ? (arr_13 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_14] [i_13]) : (arr_13 [i_14 + 2] [i_14 - 2] [i_14] [i_14 + 4] [i_14 + 1])));
                        arr_45 [i_0 + 2] [i_1] [i_13] [i_14] [i_14 - 3] = (arr_17 [i_0] [16] [i_13] [i_13] [i_13]);
                    }
                }
            }
        }
    }
    var_33 ^= var_10;
    #pragma endscop
}
