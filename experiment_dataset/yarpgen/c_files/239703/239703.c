/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_4));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = (-(8387557141908726996 % -120));
                arr_6 [i_0] [i_0 + 1] [i_0] = (var_3 ? (!var_6) : (arr_4 [i_0 + 1] [i_0 + 1] [i_1]));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_12 &= -100;

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        arr_14 [0] [i_1 - 3] [i_1] [i_0] [i_1] [0] = (arr_3 [i_0 + 1]);
                        arr_15 [i_0] [i_1 - 2] [i_3] [i_3] = var_7;
                    }
                    for (int i_4 = 2; i_4 < 14;i_4 += 1)
                    {
                        var_13 += 8387557141908727006;
                        arr_20 [i_0] [i_0] [i_2] [i_4 - 2] [i_2] [11] = (~8387557141908726995);
                        arr_21 [i_0] [i_4] = min((min(4, (arr_18 [i_0] [i_0] [i_2] [i_4 + 1]))), 0);
                        var_14 = (~0);
                        arr_22 [i_0] [9] [9] = ((((((var_0 % var_4) >> ((~(arr_11 [i_0] [i_1] [i_1] [i_2] [i_4])))))) ? ((((min((arr_3 [i_4]), 85))) ? var_8 : (((arr_8 [i_0] [9] [i_0]) ? (arr_2 [i_0] [1]) : var_9)))) : ((((max(var_8, 0))) ? 8800847832506229939 : var_3))));
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_15 ^= arr_24 [i_0] [12] [i_1] [i_2] [i_5];
                        var_16 = min((((arr_4 [i_1 - 1] [i_2] [i_5]) ? (arr_4 [i_0] [i_1 - 2] [i_5]) : var_8)), ((var_1 ? var_9 : 16)));
                        arr_26 [i_2] [i_2] [i_0] = (min((!-19), -41));
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_17 = ((((((arr_2 [i_0 - 1] [i_0]) == (arr_2 [7] [i_0 - 1])))) >> ((((41 ? -6634138889552288478 : -41)) + 6634138889552288479))));
                        arr_29 [i_0] [i_0] [i_2] [i_6] = (max((((~(((arr_11 [14] [7] [i_2] [5] [i_2]) | (arr_17 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0] [i_0])))))), -8800847832506229939));
                    }
                }
                for (int i_7 = 2; i_7 < 13;i_7 += 1)
                {
                    arr_32 [i_0] [i_1] [12] = ((~(!2)));
                    arr_33 [i_0] [i_0] [i_0] [i_7] = (max(8530164081401463969, (-105 % 103)));
                }
                for (int i_8 = 1; i_8 < 14;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 12;i_10 += 1)
                        {
                            {
                                arr_41 [i_0] [i_1 + 1] [i_8] [i_0] [i_10] = ((~((((arr_10 [i_0 - 1] [i_1 - 2] [i_1 - 4] [i_8 + 1]) && (arr_10 [i_0 - 1] [i_1 - 2] [i_1 - 4] [i_8 - 1]))))));
                                arr_42 [i_0 - 1] [i_1] [i_8] [i_8] [i_0] = 2751557517693108006;
                            }
                        }
                    }
                    var_18 = (((arr_16 [i_1]) | (min(-117, (var_9 % -8800847832506229940)))));
                }
            }
        }
    }
    #pragma endscop
}
