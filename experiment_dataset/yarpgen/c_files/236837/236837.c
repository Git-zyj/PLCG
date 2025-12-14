/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = min(((~(arr_3 [i_0 - 2]))), -var_11);
                var_18 *= min(5416030650247698354, (-431740807277448111 <= -5416030650247698367));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_19 = -4621183073829948742;
                    arr_6 [i_0] = (((65528 ? (arr_4 [i_0] [8] [9] [i_2]) : 23993)));
                    var_20 = (((arr_1 [i_0 - 4]) ? (arr_1 [i_0 - 3]) : (arr_1 [i_0 - 1])));
                    arr_7 [5] [i_1] [i_0] [1] = (~(arr_2 [i_0 - 2]));
                    arr_8 [i_0 - 2] [i_1] = 7888860280511658725;
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    arr_11 [i_0] [i_0] = ((!((min((((arr_2 [i_0]) ^ var_16)), (!7888860280511658724))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_21 = (min(((1 ? 23975 : 4294967295)), 5092));
                                var_22 = (min((min((arr_4 [i_4] [i_1] [6] [i_4]), ((var_6 ? 41540 : var_6)))), ((min((((arr_13 [1] [1] [i_3] [2] [i_4] [1]) ^ 0)), ((16777215 ? 0 : 23982)))))));
                                var_23 = (max(var_23, ((((~(min((arr_15 [i_0 + 1] [i_5] [i_5] [i_0] [2]), -17))))))));
                                var_24 = (((((((!(arr_3 [i_4]))))) ^ (arr_2 [i_3]))) / (((((arr_9 [i_0 - 2] [i_0 - 1] [i_0 - 1]) <= 9223372036854775800)))));
                            }
                        }
                    }

                    for (int i_6 = 2; i_6 < 8;i_6 += 1)
                    {
                        var_25 *= (((((((min((arr_16 [i_0 - 3] [i_0 + 1] [i_0 - 3] [i_6] [i_0 - 3]), 3336759867))) / ((var_13 ? (arr_14 [i_0 - 4] [i_0 - 4] [i_3] [i_6 + 4] [i_3]) : var_3))))) ? ((min((min((arr_0 [i_0]), -1)), (arr_0 [i_1])))) : (min((arr_4 [i_0] [i_0] [i_0] [i_0]), (min(0, 25631))))));
                        arr_20 [i_0] [3] [3] [i_6] = ((-(min(189, ((1 & (arr_15 [i_1] [i_6] [i_3] [i_1] [i_0])))))));
                        arr_21 [i_0] = ((min(((min((arr_9 [i_0 - 1] [6] [i_0 - 2]), var_2))), (min(-5416030650247698367, (arr_19 [i_0] [i_0] [i_0] [i_0]))))));
                    }
                    arr_22 [i_0] [i_0] = (((arr_1 [i_0 - 2]) ? (arr_15 [i_0] [i_0 - 3] [10] [i_0 + 1] [i_0 - 2]) : ((min((arr_5 [8] [i_0 - 4] [8]), (arr_5 [i_0] [i_0 - 3] [i_0]))))));
                }
                var_26 = (min((min(((var_13 ? var_6 : var_8)), (14 == 4294967283))), ((((((697849527601498859 ? 0 : (arr_0 [i_1])))) ? 67 : 49)))));
            }
        }
    }
    var_27 = var_3;
    var_28 = var_5;
    var_29 = ((-((var_0 ? var_10 : 916139964))));
    var_30 = var_4;
    #pragma endscop
}
