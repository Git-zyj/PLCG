/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = ((var_4 / (arr_3 [i_1] [i_0])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_15 = (((((max((arr_2 [i_0 + 1] [i_0 - 1]), (arr_2 [i_0 + 1] [i_0 - 1]))))) / (((arr_2 [i_0 + 1] [i_0 - 1]) ? var_6 : (arr_2 [i_0 + 1] [i_0 - 1])))));
                                var_16 = (min(((-4 ? (arr_9 [i_3 + 2] [i_3] [i_3] [i_3 + 3] [i_3 + 2]) : (arr_13 [i_3 + 2] [i_3] [i_3] [i_3 + 3]))), (arr_13 [i_3 + 2] [i_3 + 3] [i_3] [i_3 + 3])));
                                var_17 = (arr_9 [i_3] [i_3] [i_2] [i_0 + 1] [i_4]);
                            }
                        }
                    }
                }
                var_18 = (min(var_18, (((((min((((var_5 ? (arr_4 [i_0] [i_1]) : var_4))), 2305843009209499648))) ? 0 : (arr_8 [i_1] [i_0 + 1]))))));
                var_19 = (((((var_3 ? (max((arr_1 [i_0]), (arr_11 [0] [i_1]))) : var_8))) ? (max(((max((arr_6 [i_0] [i_0] [i_1]), (arr_4 [i_0] [i_1])))), (var_1 | 99))) : (arr_2 [i_1] [i_0 - 3])));
                arr_14 [i_0] [i_1] [i_1] = (min((arr_12 [i_1] [i_1]), (arr_7 [i_0 - 4] [i_0 - 4] [i_0 - 3])));
            }
        }
    }
    var_20 = (min(var_20, 1619784763));
    var_21 = var_3;
    #pragma endscop
}
