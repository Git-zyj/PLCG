/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 *= var_0;
        var_13 = -120;
        var_14 = (((arr_1 [i_0] [i_0]) ? (((arr_1 [i_0] [i_0]) ? var_6 : (arr_0 [i_0]))) : (arr_1 [i_0] [i_0])));
    }

    /* vectorizable */
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_15 = arr_5 [i_1];
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_16 = (((arr_6 [i_1 + 3] [i_1] [i_1 + 3]) ? (arr_15 [i_1] [i_1] [i_1] [i_1 + 3] [i_2]) : 120));
                            var_17 = 124;
                            var_18 = ((0 << (127 - 123)));
                            var_19 -= arr_2 [i_1 - 1];
                        }
                        for (int i_6 = 3; i_6 < 15;i_6 += 1)
                        {
                            var_20 *= ((!(arr_13 [i_1 + 3] [i_2] [i_3] [i_4])));
                            var_21 = ((-121 ? (arr_2 [i_1 + 2]) : (arr_2 [i_1 + 2])));
                            arr_23 [i_6] [i_1] [i_3] [i_1] [i_1] = ((6 ? var_10 : (arr_19 [i_1 - 1])));
                            var_22 = (-1 / -10);
                            arr_24 [i_1] [i_2] [i_3] [i_4] [i_1] [i_1] [5] = (((arr_16 [i_6 - 3] [i_6 - 1] [i_6 + 1] [i_1 + 1] [i_1 + 2]) ? (arr_16 [i_6 - 3] [i_6 + 1] [i_6 + 1] [i_1 + 1] [i_1 + 2]) : (arr_16 [i_6 - 3] [i_6 + 1] [i_6 + 1] [i_1 + 1] [i_1 + 2])));
                        }
                        var_23 = (i_1 % 2 == zero) ? (((var_3 >> (((arr_12 [i_1 + 2] [i_1] [i_1 + 1] [i_1] [i_1 + 1]) - 92))))) : (((var_3 >> (((((arr_12 [i_1 + 2] [i_1] [i_1 + 1] [i_1] [i_1 + 1]) - 92)) + 92)))));

                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_24 = (max(var_24, ((((arr_3 [i_7]) | (arr_3 [i_7]))))));
                            var_25 = ((!(arr_4 [i_4])));
                            arr_27 [14] [i_4] [i_1] [i_2] [i_1] = ((~(arr_22 [i_1 + 1] [i_1 + 1] [i_1 + 3] [i_1 + 2])));
                        }
                    }
                }
            }
        }
    }
    for (int i_8 = 1; i_8 < 20;i_8 += 1)
    {
        var_26 = -3;
        var_27 = (max((((!(!-1)))), ((0 ? ((-2 ? var_1 : 109)) : -1))));
    }
    var_28 = ((~(((!127) ? ((var_3 ? var_1 : 3)) : var_6))));
    #pragma endscop
}
