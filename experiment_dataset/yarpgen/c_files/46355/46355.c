/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_16 = min((arr_0 [i_0 + 1]), (min((arr_0 [i_0 + 1]), (arr_0 [i_0 - 3]))));
        var_17 = min(((var_3 ? (arr_0 [i_0]) : (arr_2 [2]))), (max((arr_2 [i_0 - 2]), ((928442966 ? (arr_2 [i_0 - 2]) : 929166317)))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = (((max(var_3, (min((arr_5 [i_0]), var_12)))) < -var_4));

                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        var_19 = (((((!(arr_6 [i_0] [i_3 + 1])))) > (((!(arr_2 [i_1 + 1]))))));
                        var_20 -= min((((((((arr_1 [i_2]) > var_13)))) / (max(var_10, (arr_1 [i_2]))))), (min(var_13, (((!(arr_1 [i_2])))))));
                    }
                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        var_21 = max(2822447347, 1642625091);
                        arr_14 [10] [i_0] [i_2] = (((max((arr_11 [i_0 - 2]), 2782525718))) ? (((((!3173017054) != (var_9 - 319139921))))) : var_13);
                        arr_15 [i_0 - 3] [i_2] [i_1] [4] [i_4] [i_4] |= min(((var_5 - (arr_6 [i_2] [i_2]))), (min((arr_11 [14]), (arr_6 [i_2] [i_1 - 1]))));
                        var_22 = var_14;
                    }
                    var_23 &= min((arr_12 [i_2] [i_0 + 1] [i_0 - 3] [i_2]), (arr_4 [i_2] [i_1 + 1]));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        arr_19 [i_5] = max((min(var_14, (arr_16 [i_5] [i_5]))), ((((arr_18 [i_5]) && (arr_17 [i_5] [i_5])))));
        var_24 = arr_17 [i_5] [i_5];
    }
    /* LoopNest 3 */
    for (int i_6 = 4; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                {
                    var_25 |= (((arr_10 [i_7 + 2] [i_6 - 2] [i_8] [i_8]) < var_9));
                    var_26 = ((((arr_12 [i_8] [i_7 + 1] [i_6 - 1] [i_8]) ? var_15 : var_4)) ^ ((var_4 ? var_12 : (arr_12 [i_8] [i_7 + 2] [i_6 - 2] [i_8]))));
                    var_27 = ((arr_18 [i_7 + 1]) ? (min((arr_18 [i_7 + 2]), (arr_18 [i_7 - 1]))) : (arr_18 [i_7 + 2]));
                    var_28 = ((((arr_26 [i_8] [i_8] [i_7 + 1]) ? (((arr_8 [i_6] [i_6 - 1] [i_7] [i_8] [i_8]) * var_13)) : var_7)) / ((~((var_9 & (arr_21 [0]))))));
                }
            }
        }
    }
    #pragma endscop
}
