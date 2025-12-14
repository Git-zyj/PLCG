/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_18 = (((((arr_1 [i_1]) / (arr_3 [i_1] [i_1]))) / ((var_1 ? (max(var_0, var_15)) : (((arr_4 [i_0] [i_1] [i_1]) * var_14))))));
            arr_5 [i_1] = 1;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_19 = 974084200;
            arr_9 [i_2] [2] = 46530;
            arr_10 [i_0] [i_0] = (((((~(arr_8 [i_2])))) ? var_17 : (arr_6 [i_0])));
        }
        var_20 = ((((((arr_1 [i_0]) > var_7))) == (((arr_7 [i_0] [i_0] [i_0]) ? var_17 : (arr_2 [i_0])))));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_21 = (max(var_21, (((19006 << (var_8 - 11296))))));
        arr_13 [10] = (arr_12 [i_3]);
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_22 = (!((!(arr_12 [i_4]))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_23 = (((arr_12 [i_4]) ? ((var_10 ? (arr_16 [i_4] [14]) : (arr_16 [i_4] [i_5]))) : (974084200 <= 46545)));
                    arr_24 [i_4] [i_4] = (var_3 % ((93 ^ (arr_23 [i_4] [i_5] [i_5] [i_5]))));
                    arr_25 [i_4] [9] [i_4] [i_4] = (arr_23 [i_4] [i_4] [i_4] [i_4]);
                    var_24 *= (((!(!var_5))));
                    arr_26 [i_4] [i_4] [17] = (arr_21 [i_4] [i_4] [i_4]);
                }
            }
        }
        var_25 = (arr_12 [1]);
    }
    var_26 = var_8;
    #pragma endscop
}
