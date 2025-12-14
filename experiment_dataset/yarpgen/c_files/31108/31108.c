/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((!(((var_18 ? var_13 : var_6))))) ? var_14 : (((var_9 && var_1) ? ((var_2 ? var_3 : var_8)) : (var_13 / var_0))));
    var_20 = ((var_7 ? var_14 : ((var_17 ? ((var_4 ? var_0 : var_17)) : (~41128)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_21 -= ((((arr_2 [i_0] [4]) >> (var_8 + 100))));
        arr_3 [i_0] = (((((max(var_9, var_12))) ? ((max(var_7, (arr_2 [i_0] [i_0])))) : ((var_14 ? var_8 : (arr_2 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_22 *= min((((((var_11 ? (arr_2 [i_1] [i_1]) : var_8))) ? var_4 : var_7)), ((var_7 ? ((((arr_2 [i_1] [i_1]) != (arr_7 [i_1])))) : var_0)));
        arr_8 [i_1] [i_1] = (arr_4 [i_1]);
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = (((min((arr_9 [i_2]), (((var_11 <= (arr_9 [i_2])))))) >= (arr_11 [i_2])));
        var_23 = ((!(arr_10 [i_2])));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {
                    var_24 = (min(var_24, (((((((((var_2 ? (arr_14 [i_2] [i_2] [i_2]) : var_18))) ? (max(var_9, var_13)) : var_1))) ? (arr_15 [i_4] [i_3] [i_3] [i_2]) : var_16)))));
                    var_25 = (max(var_25, var_6));
                    var_26 = (((var_3 ? var_4 : (arr_15 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1]))));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            arr_23 [i_5] [i_6] = (max(var_17, (min(var_8, (arr_18 [i_6])))));
            var_27 = ((~((var_3 ? var_17 : var_16))));
        }
        var_28 -= ((~((((max(var_1, var_13))) / ((var_13 - (arr_19 [i_5] [i_5])))))));
    }
    #pragma endscop
}
