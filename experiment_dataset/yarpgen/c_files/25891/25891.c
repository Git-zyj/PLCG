/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_8 [i_0] = (((((var_5 ? (min(10482935141884992090, (arr_4 [5] [5]))) : var_6))) ? (arr_6 [i_1 - 1]) : (((arr_2 [1]) - (arr_2 [i_0])))));
                arr_9 [2] [1] [i_0] |= (min((376463879984260394 || var_3), (((arr_2 [i_1 + 1]) + (arr_2 [i_1 + 1])))));
                var_15 = (min(7963808931824559526, (arr_7 [i_1 - 1] [i_1 + 1])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_16 = (min(var_16, ((min(((~(arr_11 [i_4] [i_2]))), (((((arr_13 [i_2] [i_4]) + 2147483647)) >> (((arr_13 [i_2] [i_4]) + 154)))))))));

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_18 [i_5] [i_3] [i_3] [i_4] = (((-(0 & var_7))));
                        arr_19 [i_3] [i_3] [i_4] [3] [10] = (~-1493316131);
                        arr_20 [i_4] [i_4] [i_4] [i_4] = (min((((arr_7 [i_2] [i_2]) + (arr_7 [i_3] [i_2]))), (((arr_7 [i_5] [i_5]) ? var_9 : (arr_15 [i_4] [i_4] [i_2])))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            {
                arr_28 [i_7] [i_7] [i_7] = (arr_22 [i_6]);
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        {
                            var_17 = (9194249724218335316 | 54566);
                            var_18 = (((arr_21 [i_7]) == 27038));
                            var_19 |= (arr_24 [19] [i_7] [i_8]);
                        }
                    }
                }
                var_20 = ((-(((arr_26 [i_6]) ? (!var_12) : ((~(arr_21 [i_6])))))));
                var_21 = (min((((arr_34 [i_7]) ? (arr_34 [i_7]) : (arr_33 [i_6] [i_6]))), (((!(arr_34 [i_6]))))));
            }
        }
    }
    #pragma endscop
}
