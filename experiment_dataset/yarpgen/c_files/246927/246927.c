/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = ((-3294360050397356642 ? (max(((-2 ? 2234207627640832 : -99494595)), (((var_11 ? var_4 : 1))))) : var_0));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_1] [i_2] [i_1] [i_4] [i_0] = (arr_9 [i_2] [3] [i_2] [i_3] [3]);
                                var_13 = (((arr_2 [i_0 - 4] [i_2 + 1]) ? (((var_5 - (arr_5 [i_0 - 2] [i_0 - 2])))) : (arr_8 [i_0] [i_0])));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_24 [i_1] = (((min((arr_20 [i_0] [i_0] [i_0] [i_0 - 2] [i_0 - 2] [i_0]), ((((arr_22 [i_0] [i_0] [i_5] [i_5] [i_0]) ? 79 : (arr_3 [i_6]))))))) ? ((((min(var_11, (arr_7 [i_0] [i_1] [i_6]))) / (((3969634028 ? (arr_21 [i_0] [9] [i_5] [9] [i_0] [i_0] [i_7]) : var_9)))))) : (min((((var_9 | (arr_10 [i_0] [i_0] [i_0] [i_0])))), (((arr_5 [i_6] [i_6]) ? 18444509866081910783 : -1340073394)))));
                                arr_25 [i_1] [i_1] [i_6] [i_1] [i_1] [i_1] = ((arr_12 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]) & (arr_12 [i_0] [i_0] [i_0 - 3] [i_0] [i_0 + 1]));
                            }
                        }
                    }
                }
                var_14 &= ((var_6 ? (((((arr_10 [i_0] [i_1] [i_0] [1]) > 2)))) : (max((((~(arr_13 [i_0 - 4] [i_1] [i_1] [i_1] [i_1])))), var_7))));
                /* LoopNest 2 */
                for (int i_8 = 4; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 16;i_9 += 1)
                    {
                        {
                            var_15 = (max(var_15, ((min((min((arr_22 [i_9 + 1] [i_0 + 2] [i_8] [i_8 - 3] [i_8]), var_10)), (~1))))));
                            var_16 = ((((var_1 | ((min((arr_2 [i_0] [i_1]), var_2))))) | ((4088 ? var_0 : (arr_17 [i_8 + 2] [i_1])))));
                        }
                    }
                }
            }
        }
    }
    var_17 = ((-(((~var_10) ? 21 : (((min(var_5, var_12))))))));
    var_18 += (min((((((var_4 ? 2044727861 : var_6))) ? ((var_10 ? var_10 : -9223372036854775791)) : (~var_5))), var_5));
    #pragma endscop
}
