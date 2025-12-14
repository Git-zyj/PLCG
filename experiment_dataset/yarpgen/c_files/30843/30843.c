/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;

    for (int i_0 = 2; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = (arr_0 [i_0]);

        /* vectorizable */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            var_12 = -6797738447808742329;
            arr_9 [i_0] = (((((arr_1 [i_0]) >= var_2)) || (arr_5 [i_1 - 3] [i_0])));
        }
        arr_10 [i_0] = ((((arr_5 [i_0 + 2] [i_0]) << (arr_2 [i_0 + 2] [i_0 + 1]))));
    }
    for (int i_2 = 2; i_2 < 13;i_2 += 1) /* same iter space */
    {
        arr_13 [i_2] [9] = ((-((-(((arr_0 [i_2]) / var_1))))));
        var_13 = var_3;
        var_14 = (((((min(var_6, (arr_2 [i_2] [i_2]))) > (var_3 && var_4)))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        arr_20 [7] [i_5] [i_4] [i_4] [i_3] [i_2] = max(var_10, (min(var_6, var_10)));
                        arr_21 [i_2] [i_3] [i_4] [i_5] = var_8;
                    }
                }
            }
        }
    }
    #pragma endscop
}
