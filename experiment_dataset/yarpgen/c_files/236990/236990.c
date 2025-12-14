/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1 + 2] [i_1] [i_1] [i_3] [10] = (min(((min((arr_5 [i_1 + 1] [i_1 - 1] [i_1] [i_1 + 1]), (arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 2])))), (177 - 72)));
                                var_20 = (min(14, (((var_2 < var_15) ? (arr_0 [5] [i_3]) : (~137)))));
                            }
                        }
                    }
                    arr_12 [i_0] [i_1] = ((min(3904625414, ((min(71, var_9))))) | 42);
                }
            }
        }
        var_21 = ((-((min((arr_5 [i_0] [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_0] [i_0]))))));
        var_22 = (((((((arr_1 [i_0]) ? var_9 : -67)))) ? ((min(((min((arr_0 [i_0] [i_0]), var_17))), (arr_4 [i_0] [i_0] [2] [14])))) : (~var_16)));
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        arr_17 [i_5] = ((((((((arr_14 [i_5] [13]) - var_9))) ? var_14 : -950251847)) + ((((min(7738594883903324812, 84))) ? 53 : (min((arr_13 [i_5] [15]), 4294967294))))));
        var_23 = (min(var_23, (((((min(var_1, (arr_3 [10] [i_5] [10])))) ? (((arr_9 [18] [i_5]) ? 1304876018 : (arr_4 [i_5] [i_5] [i_5] [0]))) : ((min((arr_3 [6] [i_5] [i_5]), var_11))))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        var_24 = var_6;
        var_25 = ((var_9 ? (arr_6 [i_6] [i_6] [i_6] [i_6]) : var_5));
        var_26 = (((arr_19 [i_6]) || 112));
    }
    #pragma endscop
}
