/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (min(((((~58957) ? 31567 : (!41945)))), ((((max((arr_5 [i_1] [i_1 + 2] [i_0]), (arr_1 [4])))) ? ((((!(arr_1 [i_0]))))) : (((arr_0 [6]) ? 1 : 8754683571899595573))))));
                var_16 = arr_4 [i_0] [i_1 - 3];
                arr_6 [i_0] = ((((((arr_4 [1] [i_1]) || 6675192029258561040)))) ? ((((45204 < (arr_2 [3] [i_1 - 1]))))) : (max((-9223372036854775807 - 1), 9692060501809956043)));
            }
        }
    }
    var_17 = (~562949953421311);

    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        var_18 = (min(var_18, (!var_1)));
        arr_10 [i_2] [i_2] = ((~(!-364183699)));
    }
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        arr_13 [i_3] = (((((min((arr_12 [i_3 + 1] [i_3 + 2]), var_4)))) - (((arr_11 [i_3 + 2]) * (arr_12 [i_3 + 2] [i_3])))));
        var_19 = (max(((max(((45966 ? var_11 : -536870912)), (max(536870909, var_8))))), var_7));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 6;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 9;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            {
                                arr_29 [2] [i_7 - 3] [i_7] [i_7] [1] [2] = (~-116);
                                var_20 = (max(var_20, ((((arr_4 [i_6] [8]) ? ((var_4 ? (arr_7 [i_7 - 3] [i_6]) : (arr_7 [i_7 - 1] [i_5]))) : (((((((arr_7 [i_4] [i_8]) ? var_9 : 4055115450333628528))) ? (max(-536870912, 1247714148)) : (((arr_25 [0] [i_7] [0] [i_5] [4]) ? (arr_21 [6] [5] [4]) : var_7))))))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            arr_34 [1] [i_4] = ((((arr_9 [i_5 + 2] [i_5 + 3]) ? (arr_25 [i_9] [i_5 - 2] [i_5 + 4] [2] [6]) : (arr_9 [i_5 + 3] [i_5 + 1]))));
                            var_21 -= (arr_19 [i_5 - 1] [i_5]);
                        }
                    }
                }
                var_22 += (max((min((8754683571899595582 - var_6), var_1)), (((((var_3 / (arr_23 [i_4] [i_4])))) ? ((max((arr_22 [i_4] [0] [i_5]), 1573318788))) : (~var_12)))));
            }
        }
    }
    #pragma endscop
}
