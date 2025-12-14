/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = (((min((arr_2 [i_0]), (arr_2 [i_0]))) <= (((arr_2 [i_0]) ? (arr_1 [i_0]) : (arr_2 [i_0])))));
        var_20 = (min(((~(arr_2 [i_0]))), (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
    }
    var_21 = ((((((63276 || (4294967292 < 19))))) | (max(var_1, (max(var_0, 1))))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            {
                arr_7 [i_1] [i_1] = (max((~679012520), ((min(var_0, (arr_2 [i_2 - 1]))))));

                /* vectorizable */
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    var_22 = ((!(arr_9 [i_1] [11] [i_3])));
                    var_23 = arr_5 [i_1] [i_2] [i_2];
                    arr_10 [i_1] [i_1] [i_1] = (((-2147483647 - 1) - (arr_4 [i_1])));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_16 [i_5] [i_5] [i_5] [i_5] [i_1] [i_5] [i_5] = ((arr_8 [i_2 - 2] [i_2 - 2] [i_1]) ? (arr_8 [i_2 - 1] [i_2 - 1] [i_1]) : (arr_8 [i_2 - 1] [i_3] [i_1]));
                                arr_17 [14] [i_1] [i_3] [i_4] [i_5] = ((!(((var_7 ? (arr_1 [i_5]) : 19)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
