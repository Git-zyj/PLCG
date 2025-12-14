/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_20 = (((((arr_1 [i_0 + 1]) == 3180911606059239912)) ? 4294967295 : ((((arr_1 [i_0 - 1]) ? var_12 : (arr_1 [i_0 + 1]))))));
        arr_3 [i_0 + 1] = (((((((arr_1 [1]) ? (arr_2 [i_0 + 1]) : var_11)))) ? -var_9 : ((((arr_0 [i_0 + 1] [i_0]) && var_5)))));
        var_21 = (((min((arr_2 [i_0 + 1]), (arr_0 [i_0 + 1] [i_0]))) | (((arr_0 [i_0 + 1] [i_0 + 1]) ? (arr_2 [i_0 + 1]) : 1832576735))));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_7 [i_1] = (((((arr_6 [i_1]) + (arr_6 [i_1])))) | var_10);
        arr_8 [i_1] = ((~((~(arr_4 [i_1] [i_1])))));
        arr_9 [i_1] = var_0;
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 22;i_3 += 1)
            {
                {
                    var_22 = 127;
                    var_23 = 17179868928;
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 17;i_4 += 1)
    {
        var_24 = ((((((arr_11 [i_4 + 2]) ? (arr_11 [i_4 + 2]) : (arr_11 [i_4 + 2])))) ? (max(127, 15265832467650311709)) : var_6));
        var_25 = 6555966133050551759;
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 18;i_7 += 1)
                {
                    {
                        arr_26 [i_4 - 1] [i_5] [i_4 - 1] [i_4 - 1] = ((~(((arr_17 [i_7 - 3]) / var_18))));
                        arr_27 [i_4] [i_5] [i_6] = 11890777940658999856;
                        arr_28 [i_4] [i_5] [i_6 + 2] = (arr_15 [i_4] [i_5] [20]);
                        arr_29 [i_4] [i_4] [i_4] [i_4] = (min(var_19, var_8));
                    }
                }
            }
        }
    }
    for (int i_8 = 1; i_8 < 11;i_8 += 1)
    {
        arr_32 [10] [i_8] = var_1;
        var_26 = (((((arr_30 [i_8 + 2] [i_8 - 1]) ? var_4 : (arr_30 [i_8 + 1] [i_8 + 1]))) + (((((arr_30 [i_8 + 1] [i_8 - 1]) >= (arr_30 [i_8 + 2] [i_8 + 2])))))));
    }
    var_27 &= var_8;
    var_28 = (((7826 >> (11890777940658999857 - 11890777940658999841))));
    #pragma endscop
}
