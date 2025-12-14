/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_19 = (arr_7 [i_1 + 3] [i_1 + 3] [i_1] [i_3 - 1] [i_4] [i_1 + 3]);
                                arr_11 [7] [i_1] [i_1] [i_1] = (max((arr_2 [i_2 - 1] [i_1 + 3]), (arr_2 [i_2 + 1] [i_1 + 2])));
                                var_20 = (((17505448520438094103 + (arr_0 [i_1 + 2]))) - var_13);
                            }
                        }
                    }
                    var_21 *= (((18446744073709551611 ? (arr_9 [i_2 - 1] [i_0]) : (!var_7))) / ((var_13 ? (max(var_0, 15565877805814271986)) : ((var_11 ? var_11 : 12147238478156189844)))));
                    var_22 = 608740809901678479;
                    arr_12 [i_0] [i_1] = arr_9 [i_0] [i_1];
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_23 = max(var_2, ((((max((arr_6 [i_0] [4] [i_0]), (arr_1 [i_0])))) ? (max((arr_3 [i_0] [i_0]), var_14)) : (((arr_8 [i_0] [i_0] [10] [10]) ? (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_15 [i_0] [8] [11] [i_0] [i_5]))))));
                                var_24 = (min(var_24, (((((-(arr_2 [i_0] [12])))) / 17827932742725789202))));
                                arr_18 [i_5] = (((min(((1815884152808444794 ? (arr_1 [i_5]) : (arr_1 [i_0]))), var_9))) ? ((((!(((6573987701719064829 ? (arr_7 [i_0] [i_1] [i_0] [i_5] [i_6] [11]) : (arr_9 [i_0] [i_0])))))))) : (arr_6 [i_6] [i_6] [i_5 + 1]));
                                var_25 = (min((arr_13 [i_0] [i_0] [i_0] [15] [8] [i_0]), (arr_1 [3])));
                                arr_19 [i_5] = var_8;
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (var_14 && var_8);
    #pragma endscop
}
