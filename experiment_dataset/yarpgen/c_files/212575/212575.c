/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_1] [17] [13] [i_3] = min(12292163952339273215, (arr_1 [i_0]));
                        var_20 = (~var_18);
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_2] = (min((arr_4 [i_0] [i_0]), ((((min(var_11, 905))) - (arr_1 [i_0])))));
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        arr_16 [20] &= ((var_19 ? (((min((arr_9 [1] [i_4]), (arr_6 [i_0] [i_2] [19]))))) : ((var_1 ? 904 : (arr_7 [1] [i_4])))));
                        var_21 = (min(var_21, ((((var_0 ? var_8 : -23543))))));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_19 [i_1] [i_1] [12] [i_1] = (((arr_11 [i_0] [i_0] [i_0]) ? 12237944497315267278 : (arr_5 [i_0] [i_1] [i_2])));
                        var_22 = (((((max((arr_8 [i_0] [i_1] [6]), var_17)))) << (((min(var_13, var_7)) + 570612277))));
                    }
                    arr_20 [i_1] [i_1] [1] = (max((min((arr_5 [i_0] [i_0] [10]), 3543656668)), ((min(var_2, var_15)))));
                }
            }
        }
    }
    var_23 = (min(((var_18 ? var_19 : var_17)), var_19));
    var_24 = var_6;
    var_25 = ((var_5 ? var_5 : var_1));
    #pragma endscop
}
