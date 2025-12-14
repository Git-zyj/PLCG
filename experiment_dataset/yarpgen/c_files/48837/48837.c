/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 96;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = var_5;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [9] [i_3] [i_4 + 1] [10] = (-127 - 1);
                                var_15 = ((((-111 ? var_1 : 75)) + 121));
                                var_16 = (-(arr_8 [i_4 + 1] [i_4 + 1] [i_2] [i_3] [i_4] [i_2]));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_17 = ((15 ? 13179860632613900202 : 0));
                                var_18 = ((((15366 % (arr_18 [i_0] [i_6]))) + (arr_18 [i_0] [i_6])));
                                var_19 = (arr_2 [i_0]);
                            }
                        }
                    }
                }
            }
        }
        var_20 = ((var_12 == (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        var_21 = (((((var_9 | (arr_19 [i_7])))) | (max((((-(arr_20 [i_7])))), (max(2867040526741830762, (arr_20 [i_7])))))));
        var_22 = (arr_19 [i_7]);
        var_23 = 3840;
        arr_22 [i_7] = -113;
    }
    #pragma endscop
}
