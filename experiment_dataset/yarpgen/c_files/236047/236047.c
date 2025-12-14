/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_13 -= ((((((!(arr_2 [i_0 + 2]))))) > -1));
        var_14 = (max((((var_12 - (((((arr_1 [i_0] [i_0]) > var_9))))))), (min(((var_3 ? (arr_1 [7] [i_0 + 2]) : var_1)), (arr_2 [i_0 + 2])))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [4] [1] [2] [14] = (((((7863813057040925497 ? 8840 : 12))) - (11 - 3079640317)));

                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        arr_14 [i_2] [i_3] = (((((var_11 - (arr_1 [i_3] [i_2 - 1])))) - ((((max(var_4, var_6))) ? (arr_13 [i_0 + 2] [14] [i_0 - 1] [i_0 + 1] [i_0 + 1]) : 1))));
                        arr_15 [i_2 - 1] = (((((arr_3 [i_0] [i_0 - 1]) ? (arr_3 [2] [i_0 - 1]) : (arr_3 [2] [i_0 - 1]))) > var_4));
                    }
                    for (int i_4 = 1; i_4 < 15;i_4 += 1)
                    {
                        var_15 = (!65535);
                        var_16 = (((((arr_1 [i_2 - 1] [i_4 - 1]) - (arr_2 [i_2 - 1]))) > ((((arr_8 [i_4] [11] [i_4 + 2]) ? var_8 : (arr_8 [i_4] [i_4 + 1] [i_4 - 1]))))));
                        arr_18 [i_1 + 1] [3] = ((((!(arr_3 [i_1 - 2] [i_4 + 2]))) ? ((((arr_1 [i_1 + 1] [i_0 + 2]) ? (arr_3 [i_1 - 1] [i_4 + 2]) : (arr_3 [i_1 + 1] [i_4 - 1])))) : (max((arr_1 [i_1 - 2] [i_0 + 2]), (arr_1 [i_1 + 1] [i_0 - 1])))));
                    }
                    var_17 ^= ((((var_10 ? (arr_17 [14] [i_0] [i_0 + 1] [13] [i_2] [i_2]) : (arr_7 [i_2 + 1] [i_2 - 1] [i_2]))) + -6622578583999470794));
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 14;i_5 += 1)
    {
        var_18 -= (min(((-(arr_5 [i_5 - 1] [i_5 - 2] [i_5 + 1]))), ((var_4 ? (arr_6 [i_5 + 1]) : ((-(arr_3 [11] [i_5 + 3])))))));
        arr_22 [i_5] = (max((max((arr_4 [i_5 + 4]), (arr_0 [i_5 + 2]))), (((!(arr_0 [i_5 + 4]))))));
        var_19 = ((-(((arr_2 [i_5 - 1]) ? (arr_2 [i_5 + 1]) : (arr_2 [i_5 + 1])))));
    }
    var_20 = (((((var_11 - ((0 ? var_7 : var_6))))) ? ((((var_3 > 6) - -var_5))) : ((((min(var_7, var_10))) ? var_2 : var_12))));
    #pragma endscop
}
