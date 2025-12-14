/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_8 && (((((min(132, 153))) ? ((106 ? var_6 : 3915)) : var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_12 |= ((~((((((arr_11 [i_1]) ? var_0 : 37284))) ? ((var_0 ? var_2 : (arr_2 [i_0] [i_1] [i_2]))) : (((max(-32759, 3889))))))));
                                var_13 = (max(((((arr_2 [i_2 - 1] [i_1] [i_1]) <= (arr_2 [i_2 + 1] [7] [7])))), (((arr_2 [i_2 - 1] [3] [i_0]) ? 106 : 33554176))));
                                arr_12 [i_4] [i_3] [7] [i_4] = (-1 | 0);
                                arr_13 [i_1] [i_1] [i_4] [i_4] [i_1] = ((((226366895 ? (10413 > 1) : (((arr_6 [i_0] [7] [i_0] [11]) ? var_6 : (arr_9 [i_0]))))) ^ ((min(((min(var_5, 220))), (arr_0 [7] [i_1]))))));
                                var_14 = (min((((arr_9 [i_2 - 1]) | (((arr_2 [i_0] [i_0] [i_3]) ? -6368 : 16383)))), ((((arr_0 [i_4] [i_1 - 1]) && (arr_0 [i_2] [i_1 - 1]))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_15 = var_1;
                            var_16 = ((!((((max(var_0, var_8)) >> (var_7 - 57))))));
                            arr_19 [i_1] = ((((~(arr_17 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 - 1]))) & (0 + 111)));
                        }
                    }
                }
                var_17 = ((((((((arr_11 [2]) ? 5233949415400134221 : (arr_5 [i_1] [i_0] [i_0])))) ? ((max((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_5 [i_0] [11] [i_0])))) : (arr_2 [i_0] [7] [i_0]))) != ((((((var_2 ? (arr_18 [i_0] [i_1] [0] [i_1] [i_0] [i_0]) : var_8))) ? var_4 : ((~(arr_7 [i_0] [5]))))))));
                var_18 = (max(var_18, (arr_2 [i_1 - 2] [i_1 + 1] [i_1 + 1])));
            }
        }
    }
    var_19 |= var_8;
    #pragma endscop
}
