/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, -27539));

    for (int i_0 = 2; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_18 = (min(var_18, (arr_1 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_19 = (max(var_19, -1378396437));
                        arr_9 [22] [22] [22] [i_0] [6] [18] = (((min((max(var_5, (arr_8 [i_0]))), ((-(arr_2 [i_0] [i_1]))))) != (arr_7 [i_0] [i_1])));
                        var_20 -= (arr_8 [i_0]);
                        var_21 = -1378396460;
                    }
                }
            }
        }
        var_22 = ((min((arr_7 [i_0 - 1] [i_0]), (arr_7 [i_0 + 1] [i_0]))));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 23;i_4 += 1) /* same iter space */
    {
        var_23 += -1378396436;
        var_24 = (((arr_7 [i_4] [i_4]) ? (arr_8 [i_4 - 2]) : (arr_6 [i_4 + 1] [i_4] [i_4 - 1] [i_4] [9])));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    arr_21 [i_4] [i_4 - 2] [i_4] [i_4] = (arr_16 [i_4]);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_25 -= (((((-(arr_14 [i_4] [i_5] [i_6])))) ? (((arr_13 [i_4]) ? var_13 : (arr_25 [i_4] [i_4] [i_4] [i_4]))) : (arr_7 [i_4] [i_4 - 1])));
                                var_26 += 943168939;
                                var_27 = var_15;
                            }
                        }
                    }
                    var_28 |= (--1935788903);
                }
            }
        }
        var_29 &= (((-770143413 < var_8) ? (arr_13 [i_4 - 2]) : ((-26519 ? 1377300909 : 229))));
    }
    var_30 = (min(202, 255));
    #pragma endscop
}
