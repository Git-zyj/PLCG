/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_1] = var_9;

                    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_1] [i_1 - 1] [i_3] [1] [i_1 - 2] [i_2] = (((((arr_0 [i_0] [i_0]) > ((min(var_9, var_10))))) ? (((arr_1 [i_1] [i_1 + 1]) ? var_6 : var_12)) : ((max((arr_8 [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_1 - 4] [i_1 - 2] [i_1 - 4]), ((var_3 ? -101 : (arr_5 [i_1]))))))));
                        arr_13 [i_1] = (arr_5 [i_1]);
                        var_15 = var_7;
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                    {
                        var_16 = (arr_14 [i_1 - 4] [i_1 - 4] [i_1] [i_1]);
                        arr_17 [i_0] [i_1] [i_1] = ((~((max(var_8, var_8)))));
                    }
                    arr_18 [i_2] [i_1] [i_1] [i_0] = (max(((max(var_3, (arr_2 [i_1 - 2])))), (((arr_15 [i_1] [i_1]) / (arr_15 [i_1] [i_1])))));
                    var_17 = var_13;
                }
            }
        }
    }
    var_18 = (min(var_18, var_10));

    for (int i_5 = 4; i_5 < 24;i_5 += 1)
    {
        var_19 = ((((((arr_9 [i_5 - 1] [i_5 - 2] [i_5] [i_5]) ? (arr_9 [i_5 - 3] [i_5 - 2] [i_5] [1]) : (arr_9 [i_5 - 4] [i_5 - 4] [i_5] [i_5])))) - ((var_11 % (arr_15 [i_5] [i_5 - 3])))));
        arr_22 [i_5] = (((((var_13 * (var_5 && var_3)))) / (max((max((arr_4 [i_5 - 2]), var_0)), var_6))));
        var_20 = ((var_1 >> (var_13 - 5123459340308690282)));
    }
    #pragma endscop
}
