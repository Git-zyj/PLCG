/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_15 -= (arr_4 [i_0]);
                var_16 = (min(var_16, var_6));
            }
        }
    }
    var_17 = ((((-var_10 ? (max(var_5, var_14)) : (var_0 % var_11)))) ? var_14 : (((253 > var_11) ? var_11 : var_0)));

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = (min((var_0 * var_13), ((((!(arr_0 [i_2]))) ? var_6 : var_12))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_18 |= (min((arr_15 [i_3] [i_3] [i_3] [i_3 + 1]), (((min(var_12, (arr_2 [i_2] [i_3] [i_4])))))));
                    arr_16 [i_2] [i_3 + 1] [i_3] = (max((!127), 18446744073709551614));
                    arr_17 [i_4] [i_3 + 1] [i_3] = -65420;
                    arr_18 [i_2] [i_3] [i_4] |= 32763;
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
    {
        arr_23 [i_5] [i_5] = (max((~-12), -7515));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    {
                        arr_30 [i_7] = (((((~((8469321268305128412 ? (arr_28 [i_5] [7] [i_5] [i_7] [7] [i_5]) : 1))))) ? (((arr_19 [i_6] [i_7]) + (arr_19 [i_5] [i_5]))) : 7518));
                        var_19 = (min(var_19, (((((var_12 + 2147483647) >> (var_12 - 7883341534584296718))) + (((arr_26 [7] [7] [7]) ? (((arr_26 [i_5] [11] [16]) % (arr_25 [i_5] [i_5] [6]))) : (arr_26 [i_8] [i_6] [i_7])))))));
                        var_20 = (((var_8 ? 1 : var_10)));
                        var_21 = min(((max(var_4, (arr_26 [i_5] [i_5] [i_5])))), 24576);
                    }
                }
            }
        }
        arr_31 [i_5] = (((((arr_29 [i_5] [i_5] [i_5] [5]) & 29215)) <= -var_8));
        var_22 = arr_29 [i_5] [i_5] [i_5] [i_5];
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
    {
        arr_35 [i_9] = ((((min((arr_19 [i_9] [i_9]), var_5))) ? (((arr_26 [i_9] [i_9] [i_9]) ? (arr_27 [i_9] [i_9] [i_9] [i_9]) : var_5)) : 8388607));

        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            var_23 ^= ((+(((!var_9) << (var_6 > var_6)))));
            arr_39 [i_9] = ((((((((arr_38 [i_9] [i_9]) ? var_3 : (arr_32 [i_9])))) / (arr_24 [i_9] [i_9] [i_10]))) << (var_7 > var_7)));
        }
        arr_40 [1] |= var_0;
    }
    #pragma endscop
}
