/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~(max(1, (max(2147483647, -884377702))))));
    var_21 = (max((((-((var_3 ? var_14 : -2147483643))))), (max((12307117067478751139 - 795405929), (var_18 - var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_22 = (((arr_4 [8]) ? ((~(((var_18 > (arr_1 [i_1])))))) : (arr_3 [i_0] [i_1 - 1] [i_0])));
                arr_6 [i_0] [i_1] [i_1] = (max(-var_7, (arr_0 [i_0] [i_1])));
                arr_7 [6] = (min(((((arr_2 [i_0 + 1]) + (arr_1 [i_0 - 1])))), (((arr_1 [i_0 - 1]) ? -6866303223531852479 : (arr_2 [i_0 + 1])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_16 [i_0 + 2] [13] [3] [i_1] [1] [i_1] [i_3] = (((var_8 + 795405925) ? (((arr_12 [i_0 - 1] [i_0 - 1] [i_1 - 1] [8] [i_1 - 1]) ? (arr_12 [i_4] [i_1 - 1] [i_2] [i_3] [i_1 - 1]) : (arr_12 [i_0 + 1] [i_3] [9] [i_3] [i_1 - 1]))) : (arr_12 [i_2] [i_2] [i_2] [i_0] [i_1 - 1])));
                                var_23 = ((((min((max(6139627006230800478, 1598266714)), (((arr_0 [8] [i_1]) ? var_11 : 12307117067478751139))))) && (((var_2 ? (arr_10 [i_0] [i_0] [i_0] [i_2] [i_2] [i_2]) : (min(var_16, var_7)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
