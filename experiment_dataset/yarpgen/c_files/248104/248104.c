/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_2 >= ((min(var_9, (var_16 && var_7))))));
    var_20 += (max((min((max(var_13, var_0)), ((max(var_1, var_4))))), ((max(var_17, var_3)))));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_21 = (max(var_21, (arr_1 [i_0 - 2])));
        var_22 = ((((((!(arr_1 [9])))) % -var_5)));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_23 = (arr_3 [i_0]);

                    for (int i_3 = 2; i_3 < 14;i_3 += 1) /* same iter space */
                    {
                        var_24 = (822694962 && 3771215766);
                        var_25 = (max((max((arr_5 [i_3] [i_3] [i_3]), ((min(31003, 523751530))))), (((var_13 ? (arr_2 [i_1 - 3] [i_1 - 3]) : (arr_2 [i_0] [i_0]))))));
                        arr_8 [i_0] [i_2] = (min((((((arr_1 [1]) ? (arr_6 [i_1 - 3]) : (arr_5 [1] [i_1 - 3] [1]))) % (var_3 % var_16))), var_10));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_26 = (max(var_26, -5967675186147099377));
                            var_27 = ((var_14 ? var_9 : (((arr_10 [i_0 - 2] [i_1] [i_2] [i_4]) % (arr_6 [i_3])))));
                            var_28 = var_4;
                            arr_12 [i_2] [i_2] [i_2] [i_2] [i_4] = (arr_2 [i_0] [2]);
                        }

                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            arr_16 [i_2] = (max((max(var_11, var_16)), (arr_4 [i_0] [i_5] [i_2] [i_1 - 2])));
                            arr_17 [i_5] [i_2] [i_2] [i_2] [i_0] = max(var_13, (((((max(var_1, (arr_4 [i_0] [i_1] [i_3 - 2] [6])))) ? ((((arr_6 [i_0]) < (arr_3 [i_0])))) : (arr_0 [i_3 + 1] [i_5])))));
                            var_29 -= var_10;
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_30 = var_14;
                            var_31 = (((max((min((arr_5 [i_0] [i_2] [i_3]), var_0)), (arr_5 [i_0] [i_0] [i_0]))) & (arr_15 [11] [i_1] [i_1] [i_1] [11] [8] [8])));
                            var_32 = (max((((((arr_7 [i_6] [i_3 - 2] [i_2] [i_1] [i_0]) < var_15)))), ((((arr_3 [i_3]) + var_13)))));
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            arr_22 [i_0] [i_1] [i_2] [i_2] [i_2] = (arr_13 [i_0 - 1] [i_0 - 1] [i_2] [3] [3]);
                            arr_23 [i_2] [i_2] [i_2] = ((~((~(3107301841 ^ 523751517)))));
                            arr_24 [i_0] [i_2] [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 + 2] [i_0] = (-1376863210019859307 / 8461713800177305244);
                        }
                    }
                    for (int i_8 = 2; i_8 < 14;i_8 += 1) /* same iter space */
                    {
                        arr_28 [i_0] [i_2] [i_0] = (((((((max((arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]), var_12)) > var_11)))) < (max(3790691779, 1387470696))));

                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            arr_31 [i_1 - 2] [i_1 - 2] [i_2] = (((((((((arr_19 [i_1 + 1] [i_1 - 1] [i_1] [i_1] [i_1]) && var_4))) - (arr_30 [i_0 - 1] [i_0 - 1])))) | ((-(max(var_14, 523751552))))));
                            arr_32 [i_2] [i_1 - 2] [i_2] [i_2] [i_2] = arr_26 [i_0];
                        }
                        var_33 = var_5;
                    }
                    for (int i_10 = 2; i_10 < 14;i_10 += 1) /* same iter space */
                    {
                        arr_36 [i_0] [i_2] [i_0] [i_0 - 1] = var_16;
                        var_34 ^= (arr_1 [i_1]);
                        var_35 = (var_18 ^ (max((arr_27 [i_0] [i_2] [i_0] [i_2] [i_0] [9]), (max(523751552, 18446744073709551615)))));
                        var_36 = (min((max((min((arr_35 [i_0] [i_0 - 1] [i_0] [i_0]), var_14)), (max(-17701, 3107301841)))), ((max((((arr_11 [i_0 - 2] [i_0] [i_0] [i_1 - 2] [i_2] [i_2] [i_10]) + (arr_21 [i_0] [i_0] [i_10] [i_10 + 1]))), var_9)))));
                    }
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        var_37 = ((-((((((arr_35 [1] [i_1] [1] [i_11]) < var_4)) && 523751531)))));
                        var_38 = (max(var_38, (((max(3771215776, 16383))))));
                    }
                    var_39 = (min(var_15, ((((max((arr_11 [i_0] [i_0] [0] [i_0 + 1] [i_1] [i_2] [i_2]), (arr_4 [i_0] [i_0] [8] [i_0 - 2])))) * ((((arr_26 [i_2]) && var_17)))))));
                }
            }
        }
    }
    #pragma endscop
}
