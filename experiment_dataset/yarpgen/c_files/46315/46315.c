/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (((((((arr_5 [i_0]) ? (((((arr_2 [i_0] [i_1] [1]) || (arr_0 [i_1] [i_0]))))) : ((var_12 ? 1 : var_4))))) || ((max((max((arr_3 [i_0]), (arr_1 [i_1]))), ((min(var_8, (arr_4 [i_0] [i_1]))))))))))));
                arr_6 [i_1] [i_1] [6] = ((((((4778 >= (arr_4 [i_0] [i_1]))))) || (arr_0 [i_0] [i_1])));
                var_17 = var_3;

                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [3] [i_3 + 2] [i_0] [i_4] = 32767;
                                arr_16 [i_0] [8] [8] [i_2 + 2] [i_3 - 1] [i_4] = var_4;
                            }
                        }
                    }
                    var_18 = (min(var_18, ((((arr_14 [i_0] [0] [i_0] [i_0] [i_0]) ? -35150012350464 : 35150012350465)))));
                }
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_19 = ((((max((18446708923697201151 % 35150012350464), (max((arr_13 [i_5] [i_1] [i_5] [i_6] [i_7] [i_5] [i_1]), var_2))))) ? 65524 : (((((4130195143 ? 15 : var_7))) ? 39 : (!18446744073709551613)))));
                                var_20 = ((((((arr_0 [i_0] [i_5]) ? ((var_0 >> (var_14 - 6049166897972582955))) : (((4 ? 235 : (arr_5 [i_1]))))))) ? var_4 : ((((arr_11 [i_0] [i_0] [i_0] [i_0]) ? (arr_8 [i_0] [i_0]) : (arr_4 [i_0] [i_6]))))));
                                var_21 = (arr_23 [i_0] [i_0] [i_5] [i_6] [i_5] [4]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_22 -= var_14;
                                arr_33 [i_5] [8] [i_5] [3] [i_5] = (((var_7 * 18446708923697201151) * var_13));
                            }
                        }
                    }
                    arr_34 [i_0] [i_5] = -15;
                }
                var_23 &= min(((max(12844265691686102919, 12722348377049757563))), ((min((arr_22 [4] [i_0] [i_0] [i_1]), (arr_14 [i_0] [i_1] [i_1] [i_0] [i_0])))));
            }
        }
    }
    var_24 = var_13;
    #pragma endscop
}
