/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_14 = (!var_6);
                        var_15 = (((arr_1 [i_2] [i_2 - 3]) ? (6510 > 32379) : (arr_6 [i_0] [24] [i_2] [3])));
                    }
                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        arr_15 [i_0] [i_1] [i_4] = (arr_11 [i_2 - 3] [i_4] [i_4 - 1]);
                        var_16 = (((((max(65, -32376)))) * (((arr_1 [i_0] [i_1]) ? (var_4 / var_11) : (((arr_2 [i_4]) / (arr_6 [i_0] [i_1] [i_2] [i_4 - 2])))))));
                        var_17 = (((((109 ? -53 : 32767))) ? (((~(arr_5 [i_2])))) : (((((38 % (arr_10 [i_0] [i_2] [i_1] [i_0])))) - var_9))));
                    }

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_18 = (((max(var_13, ((min(var_8, var_2)))))) ? var_3 : ((((((var_8 % (arr_14 [i_5] [i_1] [i_5] [i_0] [15] [i_1]))) >= (arr_17 [i_0] [i_0] [i_0] [i_0]))))));

                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_6] [4] = (arr_10 [i_0] [i_1] [16] [16]);
                            var_19 = (max(var_19, (((32386 ? (((((!(arr_11 [i_0] [i_1] [i_1]))) || (((var_4 ? (arr_10 [18] [i_1] [18] [i_5]) : var_11)))))) : (((!(arr_17 [i_5] [i_5] [i_5] [i_6 + 3])))))))));
                            arr_21 [8] [i_5] [i_6] [16] [i_0] = ((((((arr_5 [i_2 - 3]) == var_10))) & (65 * 32)));
                        }
                        arr_22 [i_0] [i_1] [i_2] [i_5] [11] = (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_20 = ((~(((arr_3 [i_2 - 1]) ? var_8 : (arr_3 [i_2 - 1])))));
                        var_21 = (var_6 * 60);
                    }
                }
            }
        }
    }
    var_22 = var_5;
    #pragma endscop
}
