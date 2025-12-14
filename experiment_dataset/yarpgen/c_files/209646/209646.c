/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_9 [i_3] [i_2] [i_2] [10] = ((!(((1 >> (-6038360046483266685 + 6038360046483266713))))));
                            var_14 = (((((arr_1 [i_3 + 1]) * (arr_1 [i_3 + 1]))) << (((((((arr_2 [4] [1]) ? 136 : (arr_8 [i_0] [i_2] [i_0] [i_0] [i_0] [i_3]))) - (arr_0 [i_1] [i_1]))) + 6))));
                            var_15 = ((-0 | (arr_6 [i_0] [i_1] [i_2] [i_3] [i_0])));

                            for (int i_4 = 0; i_4 < 0;i_4 += 1)
                            {
                                arr_12 [i_0] [i_1] [i_2 - 1] [i_3] [i_2] = (arr_3 [i_1] [i_1] [i_4]);
                                var_16 = ((-(arr_4 [i_0] [i_0] [i_3] [i_4 + 1])));
                                var_17 = ((((((arr_6 [i_0] [i_1] [i_2] [i_3 + 1] [i_4 + 1]) - ((4098521618129720278 - (arr_7 [i_4])))))) ? (arr_4 [12] [12] [i_2] [i_3 + 1]) : ((((((arr_8 [1] [i_2] [17] [i_3] [6] [i_4 + 1]) - 0))) ? (arr_2 [1] [1]) : ((18 ? -6038360046483266669 : 0))))));
                            }
                            for (int i_5 = 3; i_5 < 19;i_5 += 1)
                            {
                                var_18 = (arr_1 [22]);
                                var_19 = (arr_10 [i_2] [i_3 - 1] [i_2] [i_1] [i_2]);
                                var_20 ^= (((18446744073709551615 && -6038360046483266678) ? (((arr_11 [i_1] [i_3 + 1] [i_1]) * (arr_11 [i_0] [i_3 - 1] [i_0]))) : (arr_8 [i_0] [i_0] [i_0] [i_2 + 2] [i_5 - 1] [i_5])));
                                var_21 = ((arr_11 [i_2] [i_2 + 2] [i_2]) && ((((arr_13 [i_5 - 2] [i_5 - 2] [i_2 - 1]) ? (arr_13 [i_5 - 3] [i_1] [i_2 + 1]) : (arr_13 [i_5 + 3] [i_1] [i_2 - 2])))));
                            }
                        }
                    }
                }
                arr_15 [11] = (max(var_4, ((0 ? -1 : 0))));
                var_22 &= (((((arr_10 [i_0] [i_1] [i_0] [i_0] [i_0]) > 0))) != (arr_10 [i_1] [i_0] [i_0] [i_0] [i_1]));
            }
        }
    }
    var_23 = var_6;
    var_24 |= ((var_13 ? -18 : var_3));
    var_25 = (var_2 || var_8);
    #pragma endscop
}
