/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0 + 1]) != ((-(((!(arr_1 [i_0 - 1]))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0 - 1] [i_3] [8] [i_0] = (min(-var_11, var_15));
                        arr_11 [i_3] = (max(var_3, (min((arr_8 [i_3]), (arr_8 [i_3])))));
                    }
                    arr_12 [i_0 + 1] [i_1] [i_1] [3] = max(((((((arr_8 [i_0]) && var_6)) ? (arr_9 [10] [i_0 - 3] [i_0 - 1] [i_0] [i_0 - 2]) : ((109 ? 7 : 114))))), ((~(min(var_8, 2297140847205341677)))));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_19 = 255;
        var_20 -= (max((((arr_13 [i_4]) && (arr_13 [i_4]))), (((arr_14 [i_4] [i_4]) && var_12))));
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            {
                arr_23 [i_6] [i_5] = (((max((arr_19 [i_5 + 2] [i_6]), (arr_19 [i_6] [i_5 + 2]))) | ((~(arr_17 [i_5 + 1])))));
                arr_24 [i_6] &= ((((((!(arr_22 [i_5 - 1] [i_5 - 1] [i_5 + 2]))))) < (((arr_17 [i_5 + 1]) ^ (arr_13 [i_5 + 2])))));
                var_21 = -0;
                arr_25 [i_5] [i_6] [i_6] = (((((var_3 >= 379210551) > (arr_22 [i_5 + 1] [i_5 + 1] [i_5 - 1]))) ? (max((arr_19 [i_5 + 1] [i_5 + 3]), (arr_19 [i_5 + 1] [i_5 + 3]))) : (((((max(var_12, (arr_13 [i_5])))) < -34359738336)))));
                arr_26 [i_6] [i_6] [i_6] = (((((~(arr_19 [i_5 - 1] [i_5 - 1])))) ? (arr_19 [19] [i_5]) : (arr_15 [i_5])));
            }
        }
    }
    #pragma endscop
}
