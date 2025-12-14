/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((-(min(var_6, var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_11 = 75;

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_12 = (!var_0);
                            arr_13 [i_0] [i_0] [i_4] = (var_9 != var_2);
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_13 ^= (~var_1);
                            arr_16 [i_2] = arr_15 [1] [i_3 - 1] [i_1] [i_3 - 1] [i_2] [i_1] [i_0];
                            var_14 = (180 - 75);
                            var_15 = (max(var_15, (((!(((-(arr_0 [8] [i_2])))))))));
                        }
                        arr_17 [i_2] |= ((!(arr_9 [6] [i_2 - 2] [i_3 - 1] [i_3])));
                        var_16 = -var_3;
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        arr_21 [2] [11] [2] [i_2] [12] = (((((min(249, 16)))) != 18001202703861854652));
                        var_17 = (min((((var_0 ? ((min((arr_6 [i_2] [i_2] [i_2]), var_2))) : ((128 ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : var_7))))), (arr_18 [i_0] [i_1] [i_2 + 1] [i_2 - 2] [i_2])));
                    }
                    var_18 |= (((!78639345) != ((((min((arr_10 [10] [5] [10] [10]), var_6)) != var_8)))));
                    var_19 &= ((!(~var_0)));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_20 *= ((-(min(((max((-9223372036854775807 - 1), 65535))), 16596180564106007000))));
                                var_21 = ((-((((~4294967284) <= (min(var_6, var_1)))))));
                                var_22 = (min(var_22, ((var_0 + (((min(var_9, var_5))))))));
                                arr_26 [i_0] [i_1] [8] [i_2] [i_8] &= (210 / 156);
                            }
                        }
                    }
                }
                for (int i_9 = 1; i_9 < 11;i_9 += 1) /* same iter space */
                {

                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        arr_34 [i_0] [i_1] [i_9] [i_10] = (((var_6 <= (arr_27 [i_9 + 4]))) ? (min((arr_27 [i_10]), var_7)) : ((((((((arr_19 [i_0] [i_1]) <= var_2))) >= var_8)))));
                        arr_35 [i_1] [i_9] [i_1] [i_0] = (min((min((~var_9), var_8)), (!var_6)));
                    }
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        arr_39 [i_9 - 1] [i_1] [i_11] = (max((((var_5 ? (arr_15 [i_0] [i_1] [i_0] [i_0] [8] [i_1] [i_1]) : (arr_8 [i_11] [i_1] [i_11] [i_11])))), (((!((max(var_9, var_1))))))));
                        var_23 = (((max(var_6, (arr_0 [i_0] [i_0]))) * var_1));

                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            arr_42 [i_12] [i_0] [i_0] [i_0] [i_0] [i_0] = (((((!(~var_1)))) * var_4));
                            var_24 = ((-180 == (-38 <= -12)));
                            var_25 = var_3;
                            arr_43 [i_0] [i_1] [i_1] = (min((arr_29 [i_0] [i_0] [i_9] [i_11]), (-893500984 > -1042011174)));
                        }
                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            var_26 = (arr_36 [i_0] [i_1] [i_9] [i_11] [8] [i_13]);
                            arr_47 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= ((((max(24012, 64))) ? 2170235382 : (-550005425 / 3275786456020309935)));
                            arr_48 [i_13] [i_13] [i_11] [i_9] [i_0] [i_0] [i_0] = (max((((min(var_7, var_6)) | (~var_8))), ((min(var_6, (~var_6))))));
                            var_27 = (max(var_27, (((+(((((arr_40 [i_13] [6] [i_1] [i_1] [i_0]) ? var_7 : var_7)) ^ var_7)))))));
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 15;i_14 += 1)
                        {
                            var_28 *= (~(arr_7 [i_9 + 3] [i_1] [i_9] [i_9 + 1]));
                            var_29 = var_2;
                            arr_52 [i_0] [i_0] [0] [i_0] = (((arr_45 [i_1] [i_1] [i_9 + 2] [i_11] [i_1]) ? (arr_45 [4] [13] [i_9 + 4] [i_9 + 2] [i_9]) : var_4));
                            var_30 = (((arr_4 [i_9 + 2]) ? var_6 : (arr_33 [i_9 + 2])));
                            var_31 += ((~(var_9 + var_8)));
                        }
                        var_32 = (-2147483647 - 1);
                    }
                    arr_53 [i_0] [i_9 + 3] = var_4;
                }
                /* vectorizable */
                for (int i_15 = 1; i_15 < 11;i_15 += 1) /* same iter space */
                {
                    arr_56 [i_0] [5] [i_0] = (~var_5);
                    var_33 = (arr_7 [i_0] [i_0] [i_0] [i_0]);
                }
                var_34 = var_1;
            }
        }
    }
    var_35 |= (var_5 % (var_1 && var_4));
    var_36 |= var_7;
    #pragma endscop
}
