/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    var_15 = ((((((min(var_8, var_13)) * var_11))) ? (((max(var_8, var_6)) / var_13)) : var_3));
    var_16 = ((((((var_6 ? var_9 : var_10))) ? var_10 : 0)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 = var_4;

        /* vectorizable */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            var_18 = (max(var_18, (var_13 / var_1)));
            arr_6 [i_0] = (((arr_2 [i_0] [i_1 - 1]) * (arr_2 [i_0] [i_1 - 1])));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_9 [i_0] [i_0] [i_2] = ((~(arr_2 [i_0] [i_0])));
            var_19 = (((max(var_10, (((arr_4 [i_0] [i_0] [i_2]) ? var_8 : var_3)))) / ((min((arr_2 [i_0] [i_2]), -28785)))));
        }
        var_20 = (min((max((min(var_0, (arr_1 [i_0] [i_0]))), var_10)), var_7));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        var_21 = (max(var_5, (((arr_8 [i_0] [i_4 + 1] [i_5]) * (arr_15 [i_5] [i_4] [i_0] [i_0])))));
                        var_22 = (max(1, (max(38885, 4227858432))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
