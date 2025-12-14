/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((var_3 ? 2488016937 : 47199)));
        var_18 = var_0;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_19 = 221;
        var_20 = (min(var_20, 0));
    }

    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        var_21 = (((arr_8 [19]) <= ((((arr_9 [i_2]) & ((max((arr_7 [i_2]), var_7))))))));
        var_22 = ((var_3 ? (((arr_7 [i_2]) ? var_2 : (arr_7 [i_2]))) : (((((min(-32766, var_17))) - 0)))));
        var_23 = (~65535);
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        arr_13 [15] = ((-(arr_6 [i_3 - 1])));
        arr_14 [1] = (((arr_10 [i_3 + 1]) ? (arr_10 [i_3 + 2]) : (arr_10 [i_3 + 1])));
        var_24 -= ((-(arr_10 [i_3 + 2])));

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        var_25 = ((arr_22 [i_3 + 1] [i_5 + 3]) ? (arr_9 [i_4]) : (arr_9 [i_4]));
                        var_26 = ((64436 ? (arr_20 [18] [17] [2]) : ((16190 ? 0 : (arr_6 [16])))));
                    }
                }
            }
            arr_24 [5] [10] = (((arr_16 [i_3 + 2]) - (!var_11)));
        }
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            var_27 ^= 25477;
            arr_28 [18] = 54535;
            var_28 -= (arr_11 [2]);
        }
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            var_29 = (((((-2539738066238185227 ? 59334 : 7679037579172804874))) ? 104 : (((!(arr_21 [16] [0]))))));
            arr_33 [18] [12] = var_9;
            var_30 = (min(var_30, (((+(((arr_23 [14] [1] [7] [8] [8] [18]) & var_9)))))));
        }
        var_31 ^= ((((!(arr_16 [8]))) ? (arr_16 [i_3 - 1]) : (arr_29 [13] [8])));
    }
    #pragma endscop
}
