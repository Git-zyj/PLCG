/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_18 = ((+((((arr_1 [4]) && 7710)))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, ((min((((+(max((arr_12 [i_0 + 1] [0] [i_2] [4] [i_4]), var_6))))), (min((arr_1 [i_0 + 1]), var_13)))))));
                                var_20 = ((~((min(-69, var_13)))));
                                var_21 = ((min(((max(-26991, var_15))), (arr_1 [i_0 + 1]))));
                                arr_13 [3] [1] [i_1] [3] [i_3] [i_3] [i_3] = (min((((!(arr_4 [i_0 + 1] [3] [i_2] [i_1])))), 21702));
                            }
                        }
                    }
                    var_22 = (min((max((arr_5 [i_0 - 1] [i_0 - 1] [i_1] [i_0 + 1]), var_9)), (arr_5 [2] [i_0 - 1] [i_1] [i_0 + 1])));
                    var_23 = (max(var_23, (((~(((((min((arr_9 [6]), var_14))) || (arr_0 [i_1 + 1] [i_1 - 2])))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            {
                                var_24 = (arr_7 [i_0 + 1] [10] [4]);
                                var_25 = (max(var_25, (arr_1 [0])));
                            }
                        }
                    }
                    arr_20 [i_1] [i_0] [i_0 - 1] = ((-(arr_9 [8])));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 9;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    {
                        arr_29 [i_9] [i_8] [7] [7] = (((max((arr_12 [1] [i_9] [8] [8] [i_9]), (((!(arr_8 [2] [2] [i_9])))))) < -2108660269));
                        arr_30 [i_0] [i_7] [7] [0] [10] [4] = ((var_5 & ((min(var_12, var_17)))));

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            var_26 ^= (~55);
                            var_27 = -27002;
                            arr_35 [i_0 - 1] [i_7] [7] [10] [5] [2] [i_10] = (~var_7);
                            arr_36 [5] [9] [i_8 + 2] [2] [7] = (arr_32 [9] [i_0 + 1]);
                        }
                        var_28 = (((((2147483647 ? (arr_12 [i_7] [i_9] [6] [i_9] [i_0 - 1]) : (arr_12 [i_0] [i_9] [i_0] [i_9] [i_0 + 1])))) ? ((-(arr_8 [i_0] [i_7] [i_9]))) : (min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1])))));
                    }
                }
            }
        }
    }
    var_29 = var_8;
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {
        for (int i_12 = 1; i_12 < 14;i_12 += 1)
        {
            {
                var_30 = (min(var_30, ((min((arr_42 [i_11] [i_12 - 1]), (min((max(2108660268, (arr_43 [i_11]))), ((-(arr_43 [i_12]))))))))));

                for (int i_13 = 1; i_13 < 12;i_13 += 1)
                {
                    var_31 = (~(((!(~-2108660269)))));
                    var_32 = var_15;
                    var_33 = (~(arr_42 [14] [3]));
                    var_34 = (min(2108660268, -1172066992));
                }
                for (int i_14 = 3; i_14 < 12;i_14 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 14;i_16 += 1)
                        {
                            {
                                var_35 = -var_11;
                                var_36 = 8517408647401463888;
                                var_37 = (min(((min(var_7, ((-2108660273 - (arr_44 [10])))))), 18446744073709551610));
                            }
                        }
                    }
                    arr_54 [i_14 - 3] = 16384;
                    arr_55 [8] [14] [i_12 - 1] [i_14] = var_2;
                }
                var_38 = arr_38 [7];
                arr_56 [1] = (max(((-2108660291 ? -1172066992 : (arr_42 [i_12 + 1] [i_12 + 1]))), (((arr_37 [i_11] [7]) ? (var_14 && var_10) : var_2))));
                arr_57 [1] [9] [5] = var_16;
            }
        }
    }
    #pragma endscop
}
