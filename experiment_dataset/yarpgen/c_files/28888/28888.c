/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;
    var_16 = var_11;
    var_17 = (((!(var_12 && var_13))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1 + 2] [12] = ((((((arr_2 [8]) ? (arr_2 [6]) : (arr_2 [1])))) || ((min((((~(arr_4 [i_0] [i_0])))), var_8)))));
                    arr_8 [i_0] [i_0] [i_2] [i_2] = ((((arr_5 [i_0 - 1] [22]) ? (arr_6 [i_0 - 2] [i_1 - 1] [i_2]) : (arr_0 [i_0]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_0] = ((((min((((~(arr_5 [i_0] [i_4 - 2])))), (arr_10 [i_0] [i_4 - 2])))) ? (arr_0 [i_0]) : (((arr_11 [i_1 + 1] [i_2] [i_3] [1]) ? (((((arr_2 [i_0]) == (arr_2 [i_0]))))) : ((132225645 >> (1146338219 - 1146338195)))))));
                                arr_17 [i_4 + 1] [3] [i_0] [3] [i_0] [3] [3] = ((~(arr_3 [i_1 + 1] [i_2] [i_4])));
                            }
                        }
                    }
                    arr_18 [2] [2] [2] = 1;
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_24 [i_0] [i_2] [i_0] = (((((255 * 0) ? (((-27918 ? 2954825984 : 0))) : (max((arr_23 [i_6] [i_6] [i_2]), (arr_21 [i_0] [i_5] [i_1] [i_0])))))) ? ((var_11 ? -8885389100734534422 : (arr_15 [i_0] [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0 + 2]))) : (((!((max((arr_21 [i_5 - 1] [i_1] [i_2] [i_0]), 3775310461)))))));
                                arr_25 [i_0] [i_0] [14] [i_0 + 1] [i_0] = ((~(min((arr_2 [20]), var_6))));
                                arr_26 [i_0] [i_1] [i_0] = (14761 >= 270485349);
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((-((var_6 ? var_5 : (max(-27918, 270485356))))));
    #pragma endscop
}
