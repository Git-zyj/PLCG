/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = var_13;
        var_17 = (max((arr_2 [i_0]), (((arr_2 [i_0]) / (arr_2 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_18 = ((((((min((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1])))) >= (arr_5 [i_1]))) ? var_15 : ((((min((arr_5 [i_1]), (arr_4 [i_1] [i_1])))) << (var_14 - 192)))));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    {
                        var_19 = ((-27 / ((max(var_10, (arr_4 [i_1] [i_1]))))));

                        for (int i_5 = 4; i_5 < 21;i_5 += 1)
                        {
                            var_20 &= (((((arr_14 [i_4 + 2] [i_4 + 3] [i_3 - 1] [i_2 + 2] [i_2 - 1]) && (arr_8 [i_2] [i_2]))) ? (((!(arr_8 [i_2 + 1] [i_5])))) : (max(((((arr_13 [i_2 - 2] [i_5] [i_4 + 3] [8]) > (arr_14 [14] [19] [7] [14] [i_5])))), ((9 ? (arr_4 [i_1] [i_2]) : (arr_5 [i_2])))))));
                            arr_17 [i_1] [i_1] [5] [i_1] [i_1] = (((((arr_8 [i_1] [i_1]) ^ (arr_8 [i_4 + 4] [i_1]))) * (min(((max((arr_14 [2] [i_4 + 1] [i_3] [i_2] [i_1]), (arr_11 [i_5] [17] [i_1])))), (((arr_16 [i_5 - 2] [i_4 - 1] [i_1] [i_2] [i_1]) ? var_11 : 1898747614777129317))))));
                        }
                        var_21 = 1898747614777129317;
                        arr_18 [6] [i_1] [i_3] [i_4] [6] = (max((min((arr_5 [i_1]), (arr_5 [i_1]))), (max((arr_5 [i_1]), (arr_5 [i_1])))));
                        var_22 = ((+(((arr_15 [i_3 + 1] [16] [i_3 - 1] [16] [14]) ? (arr_15 [i_3 + 1] [i_3] [i_3 - 1] [i_3] [i_3]) : (arr_15 [i_3 - 1] [i_3] [i_3 + 1] [i_3] [i_3 - 1])))));
                    }
                }
            }
        }
    }
    for (int i_6 = 3; i_6 < 12;i_6 += 1)
    {
        var_23 += (((((-(arr_0 [i_6 - 1])))) ? ((-1898747614777129317 ? (arr_0 [i_6 - 3]) : (arr_0 [i_6 - 1]))) : (((!(arr_0 [i_6 + 1]))))));
        var_24 = (arr_19 [i_6]);
    }
    var_25 = var_5;
    var_26 ^= (min(((~(max(6960473052882622925, var_13)))), var_1));
    #pragma endscop
}
