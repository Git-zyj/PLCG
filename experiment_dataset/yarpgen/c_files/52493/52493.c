/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_15 = (max((((((min(var_7, 1))) ? ((min((arr_2 [i_2] [i_2] [20]), 1))) : 161))), (arr_7 [i_0] [i_0] [i_0])));
                            var_16 = arr_1 [i_0];
                        }
                    }
                }
                var_17 = (min(var_17, ((min(var_0, ((1 ? (arr_11 [i_0]) : (arr_3 [i_0] [i_0] [i_0]))))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_19 [i_6] [i_4] [i_5] [i_4] [i_4] [i_4] [i_0] |= ((-(((((arr_3 [i_0] [i_5] [i_4]) ? (arr_10 [i_6] [i_0] [i_1] [i_0]) : 1)) - ((max((arr_12 [i_1] [i_5] [i_5]), 0)))))));
                                var_18 = (((((-51 ? 8390 : (arr_2 [i_0] [i_1] [i_6]))) - 1)));
                                arr_20 [i_0] = ((~((((6894326607997920624 < (arr_6 [i_4] [i_1]))) ? (((!(arr_11 [i_0])))) : 13537))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 += ((~(min(2450727579726243609, ((var_9 ? 13968381475953768776 : 1))))));
    #pragma endscop
}
