/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_11;
    var_13 = ((((((((var_1 ? var_0 : var_9))) ? ((var_7 ? var_0 : var_6)) : var_5))) ? var_5 : ((max((!var_10), var_7)))));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_4 [16] = (!var_1);
        arr_5 [i_0] = (max(var_1, 106));
        arr_6 [i_0] = ((((((((11601440219313514555 ? (arr_2 [2]) : var_8))) && (arr_0 [i_0]))))) & (((arr_1 [i_0]) ? (arr_3 [i_0]) : ((((arr_1 [16]) ? var_6 : var_8))))));
        var_14 ^= (max(((+((var_7 ? (arr_2 [i_0 - 1]) : var_5)))), var_0));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_17 [i_0] [i_1] [i_1] [i_2] [i_3] [i_2] = (((((((((arr_7 [i_0 + 1] [i_0]) - var_1))) ? (!var_0) : var_11))) ? (arr_1 [i_0 - 1]) : ((((!((((arr_7 [11] [13]) ? (arr_16 [i_0 + 1] [i_1] [i_2] [5]) : 2119759411)))))))));
                        arr_18 [i_2] [i_2] [i_1] [i_2] = ((127 ? (arr_11 [i_0 - 2] [i_0 - 2]) : var_0));

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_15 = (max(var_15, (((~((((((arr_15 [5] [i_4] [i_4] [i_4]) | var_8))) ? var_4 : (arr_7 [6] [i_4]))))))));
                            arr_21 [i_2] = var_4;
                            var_16 = (max(var_16, (((-(max((arr_9 [i_0 + 1] [i_2 + 1]), (arr_11 [i_0] [1]))))))));
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        arr_25 [i_5] = (~var_0);
        arr_26 [i_5] [i_5] = (max((((arr_24 [i_5]) / (max(var_2, -1788077088)))), var_9));
        arr_27 [i_5] [15] = (arr_24 [i_5]);
    }
    #pragma endscop
}
