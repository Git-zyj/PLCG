/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = ((((((arr_3 [i_0 + 4]) ? (arr_3 [i_0 + 4]) : (arr_3 [i_0 + 4])))) == (max(var_4, (arr_4 [i_1 - 3] [i_0 + 2] [i_1])))));
                var_15 |= (var_5 ? ((((arr_1 [i_0 + 2]) || (arr_1 [i_0 + 4])))) : ((var_3 ? (arr_1 [i_0 + 4]) : (arr_1 [i_0 + 4]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_16 = ((((arr_6 [17] [i_1] [i_2] [i_0 + 4]) * (arr_5 [i_0 + 2] [i_0 + 2] [i_1 - 2]))) + (((arr_6 [i_0] [i_1] [10] [i_0 - 2]) * (arr_5 [i_0 - 3] [i_1] [i_1 + 2]))));
                            arr_11 [i_2] [i_1] [i_2] [19] [i_1] |= (arr_10 [i_1 - 1]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_17 = (arr_4 [i_5] [i_1 - 4] [i_1 - 4]);
                                var_18 = ((((((arr_18 [i_0] [i_0 - 2] [i_1 + 1] [i_6 - 1]) ? (arr_18 [i_0] [i_0 + 2] [i_1 - 3] [i_6 - 1]) : 10933))) ? (min((arr_12 [i_0 - 3] [i_1 - 2] [2] [i_5]), (((arr_13 [i_6] [0] [i_4]) ? (arr_4 [i_0 - 3] [i_1] [i_4]) : (arr_14 [i_0] [i_1]))))) : (arr_19 [i_4] [i_6] [i_4] [i_1])));
                                var_19 = (((arr_17 [i_0] [i_6 - 1] [i_6] [i_6 - 1] [6] [i_5]) < (((10933 != var_8) ? 39119 : (arr_6 [i_0] [i_6 - 1] [i_1 - 3] [i_0 - 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = 32743;
    var_21 = var_6;
    var_22 = ((((min((0 & 1), var_6))) ? 1 : (((((var_2 ? var_11 : 1))) ? (1 && var_8) : ((var_9 ? 878527246 : var_11))))));
    #pragma endscop
}
