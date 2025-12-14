/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_13 = (~0);
        var_14 = (min(((((((1 ? var_1 : 127))) ? var_5 : (arr_3 [i_0 - 1])))), (((arr_0 [i_0 + 1]) ? (arr_2 [i_0 + 2]) : (arr_0 [i_0 + 1])))));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_15 = (max(var_15, (arr_0 [i_1])));
            var_16 = (max((((arr_6 [i_1 - 2] [i_1 - 1] [i_1 - 2]) ? (arr_6 [i_1 - 3] [i_1 - 3] [i_1 + 1]) : (arr_6 [i_1 - 1] [i_1 - 2] [i_1 - 2]))), -0));
        }
        var_17 = ((+((((((arr_8 [i_1 + 1] [16] [i_1]) & var_9))) ? ((1 ? (arr_6 [i_1] [10] [i_1]) : (arr_3 [14]))) : (((arr_5 [i_1]) / var_6))))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] = (0 == 1);
        var_18 = (max(var_18, (((((((((arr_9 [i_3]) / (arr_10 [6] [6]))) * ((min(1, 15)))))) ? (min(2097088, (arr_10 [i_3] [i_3]))) : 1)))));
        var_19 ^= (max(((min(var_6, (arr_9 [i_3])))), (max(0, (arr_9 [i_3])))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
    {
        var_20 = (((var_2 / var_2) + (arr_14 [i_4])));
        var_21 = (-var_11 - 32767);
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            {
                var_22 = (((arr_12 [i_5 + 1] [i_5 + 1]) ? (max((arr_18 [i_5 - 1] [i_5 - 1] [i_5 + 1]), (var_10 - var_5))) : (((var_6 >= (arr_9 [i_6]))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        {
                            var_23 = (((arr_21 [i_6]) ? var_3 : 124));
                            arr_25 [i_6] [i_6] [i_6] [i_6] [i_6] = (((max((arr_24 [i_5 + 1]), (arr_24 [i_5 - 1])))) ? (((~((var_9 ? (arr_17 [i_7] [i_8]) : var_2))))) : (max((var_2 > var_6), -3579830126171441342)));
                        }
                    }
                }
                var_24 = (((((var_4 ? (arr_19 [i_6]) : (arr_10 [i_5] [i_6]))) - ((((!(arr_14 [i_5]))))))));
                var_25 = (((((((var_11 ^ (arr_13 [18] [i_5]))) ^ ((~(arr_23 [i_5] [i_5] [i_5 + 1] [i_5] [i_5 + 1] [1])))))) & (arr_12 [i_5 - 1] [i_5])));
            }
        }
    }
    #pragma endscop
}
