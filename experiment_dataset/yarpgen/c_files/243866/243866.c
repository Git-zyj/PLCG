/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_15 -= ((!(((((((arr_11 [i_1] [i_3 - 2] [i_1] [i_0]) ? -825091602 : var_6))) ? ((max((arr_2 [i_4]), (arr_3 [16] [i_2] [14])))) : 5138627042736065511)))));
                                arr_15 [i_0] [i_1 + 2] [i_2] [i_1] [i_4 + 3] = (((((((!(arr_9 [i_0] [i_1] [i_1 - 1] [i_2] [i_3 - 4] [17]))) ? (!-445481662310494115) : var_2))) ? (max((min(5138627042736065511, 13308117030973486113)), (((0 << (((arr_2 [i_0]) - 3910978870))))))) : (arr_11 [i_1 - 1] [i_1 + 1] [i_4 + 2] [i_4 + 2])));
                                arr_16 [i_0] [i_1] [i_2 - 1] [i_1] [i_0] = ((((((((2917 & (arr_9 [i_4] [i_1 - 1] [i_2 - 1] [i_1 - 1] [i_1 - 1] [i_0])))) ? 5138627042736065511 : (1 && var_9)))) ? (((arr_12 [i_1] [i_1 + 1] [i_2 - 1] [i_2] [i_1 + 1]) ? 30720 : (arr_12 [i_0] [i_1 + 2] [i_2 - 1] [i_3] [i_4]))) : (((max((((arr_6 [15]) == (arr_13 [10] [10] [i_2 - 1] [i_1] [i_4 + 1]))), (arr_7 [i_2 - 1])))))));
                                var_16 += (arr_12 [i_0] [i_3] [i_2 - 1] [i_0] [i_4 - 1]);
                            }
                        }
                    }
                }
                arr_17 [i_0] [i_0] [i_1] = (((min((arr_9 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [1] [i_1]), (arr_5 [i_1 - 1] [i_1 + 1])))) ? (((arr_9 [6] [6] [i_1] [i_1 - 1] [i_1 + 1] [11]) & (arr_6 [i_1 - 1]))) : ((0 ? (arr_6 [i_1 + 2]) : (arr_5 [i_1 - 1] [i_1 + 1]))));
                arr_18 [i_0] [i_1] = (min(((-((min(1, var_1))))), ((min((arr_9 [i_1] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 - 1]), (arr_9 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1]))))));
            }
        }
    }
    var_17 = (var_13 ? var_0 : ((((!((max(0, var_10))))))));
    #pragma endscop
}
