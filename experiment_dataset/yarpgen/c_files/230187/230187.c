/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (min(((((min((arr_1 [i_0]), -6164256347590926047))) ? (arr_1 [i_0]) : (arr_0 [i_0]))), (!-90)));
        var_16 = ((((((arr_2 [i_0]) ? var_1 : var_13))) && (((var_5 ? (arr_2 [i_0]) : (arr_0 [i_0]))))));
        arr_4 [7] [7] = (((((227 & (arr_0 [i_0])))) ? var_7 : (!-3455152516190414949)));
        var_17 = 84;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_18 = (((!(((var_2 ? 4159862670052796521 : 0))))));
                        arr_15 [i_1] [13] [13] [i_4] [i_4] [i_4] = ((1 ? (max(-1645435038, 1645435030)) : 0));
                        var_19 = ((((arr_8 [19] [19] [i_3]) ? (var_7 >= var_13) : (var_5 / 2053051704))));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_20 ^= 589468737625915670;
                            arr_18 [15] [i_1] [i_3] [i_4] [i_5] = ((23784 ? 22789 : -88));
                            arr_19 [i_1] [i_1] [i_3] [i_4] [i_5] = -var_9;
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_21 = ((((((arr_16 [i_3 - 1] [i_3] [i_3 - 1] [i_3]) ? (arr_5 [i_1]) : 23))) ? (((((arr_13 [5] [i_1] [i_1] [5]) & 241)) * (((!(arr_5 [i_1])))))) : ((~(arr_14 [i_3 - 2] [i_2] [i_1] [i_4])))));
                            var_22 &= ((~(((((min(65535, 168))) && (((var_6 ? 0 : var_13))))))));
                            var_23 = (min((((((1645435041 >> (arr_20 [i_1] [1] [i_3] [1] [i_6])))) ? ((108 ? (arr_7 [9] [i_2] [11]) : var_11)) : var_3)), var_12));
                            arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_10 [i_1] [i_3 - 1] [i_3 + 1] [i_1]);
                            arr_24 [i_3] [i_1] [i_6] = 40;
                        }
                        var_24 = (min(var_24, ((min(((var_9 * (!var_7))), ((((arr_10 [i_2 + 1] [i_2 - 1] [i_2 + 1] [8]) / (arr_10 [i_2 + 1] [i_2 + 1] [i_2 - 2] [6])))))))));
                    }
                }
            }
        }
        var_25 -= ((((((arr_20 [1] [i_1] [i_1] [14] [i_1]) && var_7)) && var_10)));
    }
    var_26 = var_14;
    var_27 ^= (((!1) * var_11));
    #pragma endscop
}
