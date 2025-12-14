/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_3 ? (0 && var_17) : -28))) ? ((((var_14 ? var_0 : -426329596)) >> (var_7 + 1248791816))) : (~var_14)));
    var_21 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_16 [i_3] [i_3 - 1] [i_3] [i_3] [18] [i_1] [i_3] = (((((-(arr_14 [i_3] [i_1 + 1])))) ? (((arr_10 [i_1] [i_2]) >> ((((66 ? 3365026102 : 1)) - 3365026096)))) : ((((((765988529 << (((arr_13 [7] [i_3] [i_0] [i_1 + 3] [i_0]) - 16))))) ? 198 : ((min(27, -28))))))));
                                var_22 ^= var_1;
                                var_23 = (((((44656 % 66) ? (arr_6 [i_0]) : ((((arr_10 [i_1] [i_1]) ? (arr_9 [i_0] [i_3]) : (arr_15 [i_0] [i_1] [i_2] [i_3 - 1] [i_4])))))) | 1505322981));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_24 += ((0 % (arr_9 [i_1 + 3] [i_1 + 3])));
                                var_25 = (((arr_13 [i_1 - 2] [i_1] [i_1 - 2] [i_1] [i_1 + 3]) - -32766));
                            }
                        }
                    }
                    var_26 = (var_13 ? (((0 ? 44656 : 0))) : 688195283);
                    arr_23 [i_1] [i_1] [i_1] [i_1] = ((~(arr_6 [i_1 + 1])));
                }
                for (int i_7 = 3; i_7 < 24;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                var_27 = (min(var_27, (arr_17 [0] [i_1] [i_7] [i_8] [i_8] [i_9])));
                                arr_34 [i_0] [i_0] [i_0] [i_1] [i_9] = (!-1);
                                var_28 = ((arr_19 [i_7 - 3] [i_7 - 3]) ? (((((arr_14 [i_0] [i_9]) && (((-79 ? (arr_19 [i_9] [i_1 + 2]) : (arr_7 [i_8] [i_1] [i_8])))))))) : (min((arr_10 [i_1] [i_1]), (arr_10 [i_1] [i_1]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_29 = (((arr_13 [i_10] [i_7 - 1] [i_7 - 3] [i_1] [i_1 + 3]) && ((max(((((arr_25 [9] [i_7] [1] [i_1]) * (arr_26 [i_0] [1] [i_0])))), (min(-16612, (arr_35 [i_0] [1] [i_0] [i_0] [12]))))))));
                                arr_41 [i_1] [i_1] [i_1] [i_1] [i_1] = (((min((arr_25 [i_1] [i_1] [i_1 + 3] [i_1]), (arr_25 [i_1] [i_1] [i_1] [i_1]))) ? ((var_2 ? -32754 : var_11)) : (((min((arr_25 [i_1] [i_0] [9] [i_1]), (arr_25 [i_1] [i_0] [i_0] [i_1])))))));
                                var_30 = ((-(arr_37 [i_0] [9] [i_7 - 1] [i_11 - 1])));
                            }
                        }
                    }
                }
                arr_42 [3] [i_1] = 4329072718071062930;
            }
        }
    }
    #pragma endscop
}
