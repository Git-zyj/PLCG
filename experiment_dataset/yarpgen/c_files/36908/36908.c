/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_3));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = ((((((((var_5 ? var_1 : (arr_0 [i_0] [10])))) ? (arr_3 [i_0] [i_1] [i_2]) : (((arr_6 [i_2] [i_2] [8] [8]) | 8518))))) ? (((((var_9 ? (arr_6 [i_0] [i_0 - 1] [i_1 + 1] [i_0]) : var_1))) | (min((arr_2 [i_2]), var_7)))) : (min(-3776625351775989033, 4294967288))));
                    var_12 = (arr_3 [6] [i_1] [i_2]);
                    var_13 = (max(var_13, var_8));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 7;i_5 += 1)
            {
                {
                    var_14 += ((((((arr_5 [i_5 + 3] [i_5 - 2] [i_4 + 1]) && var_2))) == (((arr_5 [i_5 - 1] [i_5 + 3] [i_4 + 1]) * (arr_5 [i_5 + 2] [i_5 + 2] [i_4 + 1])))));
                    arr_16 [i_3] [i_3] [8] [i_5] = (119 <= -8531);
                }
            }
        }
    }
    var_15 = var_6;
    #pragma endscop
}
