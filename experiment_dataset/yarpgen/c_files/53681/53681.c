/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((-9223372036854775807 != var_4) ? ((-(var_9 == var_2))) : ((var_9 ? var_5 : var_5))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = var_5;
        arr_3 [i_0] = var_8;
    }
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {
        var_14 = (((((((((arr_6 [11]) % var_5))) ? ((((arr_6 [i_1 + 1]) ? var_8 : (arr_6 [i_1])))) : ((var_1 ? var_4 : var_6))))) ? (((arr_4 [i_1 + 1] [i_1 + 1]) ? var_7 : var_0)) : var_11));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 24;i_4 += 1)
                {
                    {
                        arr_16 [i_2] [i_2] [i_2] [i_2] = ((((min((arr_7 [i_2] [i_4 + 1] [i_1 - 1]), var_8))) != (max((min(-9223372036854775791, 98)), var_3))));
                        var_15 |= ((var_7 ? (((arr_12 [1]) ? (arr_12 [16]) : var_6)) : ((max((arr_12 [4]), (arr_12 [8]))))));
                        var_16 = ((!((((arr_11 [i_3 + 1] [i_3 - 3] [i_3]) ? (arr_11 [i_3 + 1] [i_3 - 4] [i_3]) : (arr_11 [i_3 - 1] [i_3] [i_3 - 4]))))));
                        arr_17 [8] [i_3 - 2] [8] [i_2] = (min(65514, -9223372036854775807));
                        arr_18 [i_1 + 1] [i_2] [i_2] [i_2] = (((((((((arr_7 [i_1] [i_2] [i_3 - 3]) ? (arr_5 [i_1]) : var_10))) ? (((min(91, 90)))) : var_3))) ? (((((min((arr_15 [i_1] [i_2] [i_1] [i_1] [i_1] [i_2]), var_6)) < (arr_15 [i_1] [i_1] [i_1 + 1] [i_1 - 1] [i_1] [i_2]))))) : (((((var_12 ? var_9 : var_5))) ? var_8 : (((arr_8 [i_2] [i_3] [i_4 - 2]) ? var_0 : var_4))))));
                    }
                }
            }
        }
    }
    for (int i_5 = 3; i_5 < 10;i_5 += 1)
    {
        var_17 = ((-((((arr_20 [10] [i_5]) || (var_12 + var_4))))));
        var_18 = var_3;
    }
    var_19 |= (max(((((min(var_0, var_10)) >= (min(var_4, var_3))))), var_7));
    var_20 = (max(var_20, var_9));
    var_21 |= (var_1 < var_12);
    #pragma endscop
}
