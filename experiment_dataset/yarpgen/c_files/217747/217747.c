/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_14 = (196 ? 6642400487015315015 : 47605);
        arr_3 [i_0] [1] = var_9;
        var_15 = (max(var_15, -44169));
        var_16 = ((700397496 >= (((17897926205847290805 ? var_0 : 548817867862260810)))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_17 = ((17897926205847290805 ? (((-20279 ? 45244 : var_7))) : 14438122260016472551));

        for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
        {
            var_18 = ((max((arr_0 [i_1]), (4008621813693079053 + -3194063966908291923))));
            arr_12 [i_1] [15] [i_2] |= (arr_6 [i_2]);
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    {
                        arr_21 [2] [i_3] [1] [i_5] = (max((((arr_9 [i_1] [13] [i_5]) ? (arr_2 [i_5]) : (arr_9 [i_5] [i_3] [i_1]))), (((arr_9 [i_1] [i_3] [i_4]) ? (arr_9 [i_1] [i_1] [i_1]) : (arr_2 [i_5])))));
                        var_19 = (max(var_19, ((((((1 >= -5781381478625550641) || 3838144395)) ? var_9 : (arr_11 [i_1] [i_3]))))));
                    }
                }
            }
            var_20 = (max(var_20, (((((6233901916766906584 || (arr_4 [i_1]))) ? (548817867862260811 > 4273) : 0)))));
            var_21 = ((~(arr_18 [i_1])));
        }
    }
    var_22 += var_1;
    var_23 = (var_6 > var_4);
    var_24 = (min(var_24, ((max(9007199254738944, ((min(var_9, var_5))))))));
    #pragma endscop
}
