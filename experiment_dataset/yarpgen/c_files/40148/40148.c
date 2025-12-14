/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    var_16 = (min(((7357894704461418071 ? 5346402744005279946 : 9)), var_8));
    var_17 = ((min(var_10, var_9)));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1 - 1] [i_1] = (max(-51, 1));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = (min((max((arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]), ((var_5 ? 11088849369248133544 : 0)))), (min((min((arr_5 [i_1]), (arr_0 [i_2]))), var_13))));
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_4] = ((((65535 << (11088849369248133549 - 11088849369248133548))) >> ((((max((arr_7 [i_0 - 1]), (arr_7 [i_0 - 1])))) - 67))));
                                arr_15 [i_1] [i_1] [i_2] = (~var_5);
                                var_19 = (min((max((arr_3 [i_0] [i_0] [i_1 - 1]), (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]))), (var_9 - var_6)));
                                var_20 = (min((arr_11 [i_0 + 2] [i_3 + 2] [i_3 - 1] [i_3 - 3] [i_3 - 1]), ((min((arr_11 [i_0 - 2] [i_1] [i_1] [i_3 - 1] [i_4]), var_13)))));
                            }
                        }
                    }
                    arr_16 [i_1] = 197;
                }
            }
        }
        var_21 = (min((max(1, 1)), (min((arr_13 [i_0] [i_0 - 2] [i_0]), (arr_13 [i_0] [i_0 + 2] [i_0])))));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_22 = (max((arr_4 [i_5]), var_9));
        var_23 = (min((((((~(arr_7 [i_5])))) ^ (1 | 7357894704461418095))), 0));
        arr_19 [i_5] = ((((min((arr_17 [i_5]), (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5])))) ? ((max((((!(arr_17 [i_5])))), var_7))) : ((min((((arr_1 [0]) && var_4)), (((arr_18 [i_5] [i_5]) || var_5)))))));
        var_24 &= (max(255, 1));
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        arr_23 [10] &= (min((max((min((arr_22 [8] [i_6]), (arr_22 [4] [i_6]))), var_8)), -702337446));
        arr_24 [i_6] [i_6] = (~9);
        var_25 = (!(((min(var_1, (arr_20 [i_6] [i_6]))))));
        arr_25 [i_6] [6] = (((((7357894704461418071 ? (arr_20 [i_6] [i_6]) : (arr_20 [i_6] [i_6])))) ? (min((arr_20 [i_6] [i_6]), (arr_20 [i_6] [i_6]))) : (min((arr_20 [i_6] [i_6]), (arr_20 [i_6] [i_6])))));
    }
    #pragma endscop
}
