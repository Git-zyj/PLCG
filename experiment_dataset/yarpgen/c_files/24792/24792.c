/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = (((~(((arr_3 [i_0] [i_0]) ? (arr_3 [i_0] [i_1]) : 275426921)))));
                var_14 = (max(var_14, (arr_3 [i_0] [i_0])));
                var_15 = var_3;
                var_16 = 2849841367;
                var_17 = (((arr_2 [i_0 - 1] [i_0 + 2]) ? (arr_0 [i_0 + 2]) : (arr_2 [i_0 + 2] [i_0 + 2])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {

                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    var_18 = var_2;
                    var_19 = (max((-2147483647 - 1), 5848240327785724977));
                    var_20 = var_1;
                    var_21 = (arr_11 [i_2] [i_2] [i_3] [i_4 + 1]);
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_22 += -1;
                                var_23 = 1664460694;
                            }
                        }
                    }

                    for (int i_8 = 4; i_8 < 15;i_8 += 1)
                    {
                        var_24 = ((4 ? (arr_15 [i_3] [i_3] [i_3] [i_8]) : (max((arr_15 [i_2] [i_3] [i_2] [i_8]), 1664460694))));
                        var_25 = ((((min(4, 0))) ^ (((arr_18 [i_8 + 1] [i_8 + 2] [i_8] [i_8] [i_8] [i_5]) ? var_0 : 877297605))));
                        var_26 += (((arr_2 [i_3] [i_3]) ? -4 : (arr_2 [i_3] [i_3])));
                        var_27 = (!20);
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        var_28 = (arr_18 [i_2] [i_2] [i_3] [i_3] [i_3] [i_3]);
                        var_29 = ((-11366 ? (arr_4 [i_2] [i_5] [i_9]) : (arr_7 [i_9])));
                    }
                    var_30 = ((((min((arr_17 [i_2] [i_2] [i_2] [i_2]), (arr_17 [i_2] [i_2] [i_2] [i_2])))) ? 3967005729309152242 : (((var_8 & ((((arr_5 [i_2] [i_3]) ? 11366 : -5))))))));
                    var_31 = -4;
                    var_32 = 18446744073709551615;
                }
                /* LoopNest 3 */
                for (int i_10 = 2; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            {
                                var_33 = var_10;
                                var_34 = (min(((((1 ? (arr_25 [i_2] [i_3] [i_10] [i_3] [i_3]) : var_6)) >> (2630506601 - 2630506543))), (((~(~11390))))));
                            }
                        }
                    }
                }
                var_35 = (min(var_35, -4));
            }
        }
    }
    #pragma endscop
}
