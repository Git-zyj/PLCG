/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_0 ? var_9 : (((var_6 < ((min(var_7, var_7))))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = ((max(18238, -32)) + ((((min(var_15, var_9))) * -var_7)));
        arr_3 [i_0] = ((((-18215 ? -736594378 : 1)) % ((max(var_12, 1)))));
        arr_4 [i_0] = (((((((((arr_0 [13]) - var_6)) < var_7)))) <= (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 = (((((arr_8 [i_0] [i_1 + 2]) ? var_13 : (arr_6 [9] [i_0]))) >= var_10));
                    arr_11 [i_0] = var_9;
                }
            }
        }
        arr_12 [i_0] [i_0] = (((((arr_10 [i_0] [i_0] [i_0]) ? (arr_10 [i_0] [i_0] [i_0]) : (((arr_10 [0] [i_0] [i_0]) & var_2))))) ? var_0 : (((var_7 & var_8) << (((((arr_7 [i_0]) | var_15)) - 1389875651)))));
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_20 = (min(((var_11 - (arr_13 [i_3]))), var_3));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 24;i_5 += 1)
            {
                {
                    var_21 = var_13;
                    var_22 |= (min((((-(arr_20 [i_5] [i_4 - 1] [i_4 + 1] [i_5 - 1])))), (6471692994122106931 + 1)));
                    var_23 = (min((((arr_14 [i_3]) / (arr_21 [i_3] [i_4 - 1]))), (arr_18 [i_3] [i_4])));
                }
            }
        }
        arr_23 [6] &= ((-18238 < (14765276853806889801 | var_15)));
    }
    for (int i_6 = 1; i_6 < 14;i_6 += 1)
    {
        var_24 = (min(var_24, var_4));
        var_25 = (max(var_25, ((min(196, 11975051079587444660)))));
    }
    var_26 = var_14;
    #pragma endscop
}
