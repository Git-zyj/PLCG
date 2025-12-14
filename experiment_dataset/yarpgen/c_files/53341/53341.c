/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 &= -1;

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_18 = (min(var_18, (max((max((arr_3 [i_1]), 1152912708513824768)), (((!(arr_2 [i_0] [20]))))))));
                    var_19 ^= (arr_4 [11] [i_1] [i_2]);
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    var_20 += ((!(1152912708513824790 < var_1)));
                    var_21 = (+(((arr_1 [i_0] [23]) ? (arr_1 [i_1] [i_0]) : (arr_1 [1] [i_1]))));

                    for (int i_4 = 1; i_4 < 24;i_4 += 1)
                    {
                        var_22 = ((((~(arr_3 [i_3]))) & var_13));
                        var_23 = ((~(var_0 - var_0)));
                        var_24 ^= ((var_11 < ((-4766514064914067152 ? (arr_10 [24] [5] [15] [10]) : (arr_13 [3] [9] [6] [15] [8] [14])))));
                    }
                    for (int i_5 = 3; i_5 < 24;i_5 += 1)
                    {
                        var_25 = (((arr_17 [i_0] [22] [i_0] [i_0] [i_0] [i_0]) ? (~var_9) : (min((var_10 & var_9), (arr_8 [19] [22])))));
                        var_26 = (((-(arr_10 [i_5 - 3] [15] [i_5 + 1] [2]))));
                    }
                }
                var_27 = ((((((arr_9 [i_0] [i_0] [i_1] [5]) ? var_11 : (arr_9 [i_0] [9] [1] [7])))) ? ((((var_5 % (arr_3 [i_1]))) / 17293831365195726847)) : (((((var_13 ? 200 : (arr_8 [4] [18])))) & (max(0, var_2))))));
            }
        }
    }
    var_28 = (max(((var_2 + ((((-9223372036854775807 - 1) ? (-127 - 1) : 32742))))), var_0));
    var_29 = ((((((-1333222426 ? var_12 : var_10))) && 11)));
    #pragma endscop
}
