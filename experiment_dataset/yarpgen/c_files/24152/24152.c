/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (-127 - 1)));
    var_20 = (((var_7 ^ var_10) ? 18446744073709551615 : (((65535 ? var_1 : (min(var_11, var_6)))))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 = (max((((var_0 % -5822408723585369525) & (arr_4 [i_0] [i_1]))), (arr_4 [i_0] [i_0])));
                    arr_9 [i_0] [i_1] [i_1] = (!65509);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_22 = ((((((arr_5 [i_0 + 1] [i_3]) ? var_17 : var_15))) || ((((max(65520, var_11))) && 18446744073709551605))));
                    var_23 = ((((arr_13 [i_0 - 1] [i_3 + 1] [i_0 - 1]) ? (arr_13 [i_0 + 1] [i_3 + 1] [i_4]) : var_16)));
                    var_24 = ((var_10 ? (((!(arr_12 [i_0] [i_3])))) : var_13));
                }
            }
        }
        var_25 = (min(var_25, var_17));
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_26 = ((var_14 ? var_5 : var_2));
        var_27 = (max((((!(arr_17 [i_5] [i_5])))), (max((arr_18 [i_5]), 8))));

        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_28 = (max(var_28, (arr_18 [i_5])));
            var_29 = ((((max((arr_17 [i_5] [i_6]), (arr_20 [i_6] [i_6])))) ? (((arr_20 [i_5] [1]) + (arr_19 [i_5] [i_6]))) : var_5));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            var_30 = (max(var_30, (arr_18 [i_5])));
            arr_23 [i_7] = (arr_16 [i_7]);
        }
    }
    var_31 = var_16;
    #pragma endscop
}
