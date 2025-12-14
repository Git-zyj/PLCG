/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_4 % -108);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_11 [i_2] [15] [i_0] [i_0] = ((!((((((arr_10 [10]) ? (arr_4 [11] [i_1]) : (arr_1 [i_0])))) || (arr_0 [i_0] [i_0])))));
                    var_13 = (1351175524 ^ 1351175524);
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_14 = (arr_13 [i_0] [i_1] [i_1] [i_3]);

                    for (int i_4 = 3; i_4 < 17;i_4 += 1)
                    {
                        var_15 = (((max(var_3, 59067))) ? ((var_8 ? (arr_1 [i_0]) : ((-(arr_15 [14] [i_1] [14] [5]))))) : ((((arr_2 [i_4]) ? (max(var_1, 628019016)) : (1351175524 | 82)))));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_16 = ((63343 ? 11659960706643523270 : 77));
                            arr_18 [i_3] = (((arr_2 [i_4 + 1]) || (arr_14 [i_4 - 2] [i_4 + 2] [i_4] [i_0])));
                            arr_19 [i_0] [i_4] [i_3] [13] [i_0] [i_0] = ((((arr_13 [i_0] [i_1] [i_1] [i_5]) && (arr_12 [i_0] [i_1] [3]))));
                            var_17 = 3913556694383057758;
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_18 |= (((((var_1 ? (arr_0 [i_4 + 2] [i_4 + 2]) : (arr_3 [i_4 - 3] [i_4 + 2])))) % 1167834623));
                            var_19 = 3666948280;
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            arr_24 [12] [4] [i_4] = ((!((((arr_1 [i_0]) ? var_7 : var_2)))));
                            var_20 = (arr_20 [i_0] [i_1] [i_0] [i_4] [i_7]);
                        }
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        arr_28 [i_8] [i_3] [14] [i_0] = ((8739473213566380227 ? (((max(var_5, 78)))) : (arr_17 [i_0] [9] [i_3] [i_8] [i_3])));
                        var_21 = (max(var_3, (arr_23 [18] [i_0] [i_0] [8] [i_0])));
                    }
                    for (int i_9 = 1; i_9 < 15;i_9 += 1)
                    {
                        var_22 = (((arr_27 [i_0] [14] [5] [i_0]) / (arr_29 [i_0] [i_9 + 1] [i_3] [i_3] [2] [i_0])));
                        arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_27 [i_9] [i_3] [18] [18]);
                        var_23 |= (77 << (!52646));
                        var_24 = ((71 << (178 - 160)));
                    }
                }
                var_25 = var_1;
            }
        }
    }
    #pragma endscop
}
