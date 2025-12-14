/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                var_11 += (((((5168418443120484144 ? 13300665734970235690 : 1))) ? (((1 ? 1 : 0))) : (((!(arr_0 [i_0 - 1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_2] = ((max((arr_6 [i_0] [i_1 + 1] [i_0 - 1] [i_0]), (arr_6 [i_0] [i_1 + 1] [i_0 - 1] [i_0 - 1]))));
                            arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] = ((((-((var_5 ? var_9 : var_1)))) / (arr_0 [i_0])));
                        }
                    }
                }
                arr_12 [1] = (((arr_8 [i_0] [i_0] [i_1] [i_1]) ? ((((arr_8 [i_0] [i_0] [i_0] [i_0 - 1]) != ((((!(arr_4 [i_0] [i_0] [i_0] [i_1])))))))) : (arr_7 [i_0 - 1] [i_1 - 3] [i_1 + 2] [i_1] [i_1 - 3])));
                var_12 = var_6;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            {
                arr_18 [i_4] [i_5] [i_4] = (((2281134598 / 10139) ? (arr_13 [i_4]) : (min(var_0, ((max(var_6, (arr_17 [i_4]))))))));
                var_13 = ((((min((arr_16 [i_4] [i_4] [i_4]), (arr_16 [i_4] [i_5] [i_5])))) ? (arr_1 [i_4] [i_5]) : ((((arr_6 [i_5] [10] [i_5] [i_4]) % var_5)))));
            }
        }
    }
    var_14 = ((var_3 ? var_6 : (max(var_2, var_5))));
    #pragma endscop
}
