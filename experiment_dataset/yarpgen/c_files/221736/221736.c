/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    var_14 = ((((max(var_8, var_10))) ? var_8 : 50));
    var_15 = var_3;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = (-((max((arr_1 [i_0]), var_11))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 = ((((((arr_0 [i_2] [i_0]) ? (arr_0 [13] [i_1]) : var_1))) ? ((min(var_0, var_9))) : ((25879 ? var_3 : (arr_8 [i_0] [i_1])))));
                    arr_10 [i_2] [i_1] [12] = (((31337 ? (!-1) : 145)));
                    var_17 = max(((10362 ? (arr_5 [i_0] [i_1] [i_1]) : var_11)), (((arr_5 [i_2] [i_1] [i_0]) ? (arr_5 [i_0] [i_1] [i_2]) : var_6)));
                    arr_11 [i_2] [i_1] [i_0] = ((((((arr_0 [i_0] [i_1]) ? (arr_0 [i_2] [i_0]) : (arr_0 [i_0] [i_1])))) ? (((arr_0 [i_2] [i_0]) ? var_10 : (arr_2 [i_2]))) : ((var_5 ? 50 : 61461))));
                    var_18 = var_4;
                }
            }
        }
        arr_12 [i_0] = (min((((arr_9 [i_0] [i_0] [i_0]) ? 44235 : var_0)), ((max((arr_3 [i_0] [i_0]), var_1)))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_19 = ((((((arr_13 [i_3]) ? (arr_14 [i_3] [i_3]) : var_8))) ? (((((1 ? 126 : 40094623))) ? ((0 ? var_5 : var_4)) : var_2)) : ((max((((arr_14 [i_3] [i_3]) ? var_8 : 33086)), var_1)))));
        var_20 = (max(var_20, (((((max((23959 && var_10), ((var_11 ? 1 : 20))))) ? (max((max((arr_14 [i_3] [i_3]), 20893)), (arr_14 [i_3] [i_3]))) : var_5)))));
        var_21 *= ((((((arr_13 [i_3]) ? ((var_9 ? 44211 : var_11)) : (arr_14 [i_3] [i_3])))) ? (max(-var_3, var_1)) : ((((((arr_14 [i_3] [i_3]) ? var_3 : var_2))) ? (arr_14 [i_3] [i_3]) : ((max(var_6, var_6)))))));
        arr_15 [i_3] [i_3] = (((arr_13 [i_3]) ? (max((((var_11 ? var_3 : (arr_14 [3] [i_3])))), var_5)) : 61921));

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_22 *= max((arr_13 [i_3]), var_0);
            arr_18 [i_3] = (max((((~var_0) ? 1955883010 : var_6)), 0));
            var_23 = (max(var_6, var_5));
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_24 = (min(var_24, ((((max((((arr_3 [i_5] [5]) ? var_6 : 0)), ((min((arr_13 [i_5]), var_4))))) & (min((arr_14 [5] [i_5]), var_12)))))));
        var_25 = ((((min(var_6, var_2))) ? (arr_8 [i_5] [i_5]) : ((min(44230, 16137)))));
    }
    #pragma endscop
}
