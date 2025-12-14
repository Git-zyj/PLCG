/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((var_7 ? var_6 : ((var_2 ? ((4095 ? var_9 : var_5)) : (var_7 || 8924158089243448171))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {

                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        var_15 = (((var_12 && var_7) ? var_4 : 127));
                        var_16 = (var_4 / 112);
                        var_17 = (((arr_9 [i_3 - 3] [i_3] [i_1] [i_1] [i_3 - 1] [i_3 - 1]) / (arr_10 [i_1] [i_3 + 2] [i_0] [i_1])));

                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            var_18 = (max(var_18, var_11));
                            arr_15 [i_1] [i_1] [i_1] [10] [1] = ((66977792 > (arr_11 [i_1] [i_4 - 1])));
                            arr_16 [7] [8] [i_1] [1] [i_4 - 1] = var_7;
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_19 = (min(var_19, (((var_4 ? var_4 : var_8)))));
                            var_20 = (min(var_20, (((var_13 / (arr_10 [14] [14] [i_3 - 3] [i_3 - 3]))))));
                        }
                    }
                    var_21 = ((-(arr_11 [i_1] [7])));
                    var_22 ^= var_0;
                    var_23 = -var_4;
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            arr_25 [i_1] [i_6] [i_1] [14] [i_1] = ((var_4 & ((var_7 ? (127 <= var_6) : var_4))));

                            for (int i_8 = 2; i_8 < 13;i_8 += 1)
                            {
                                var_24 = (max(var_24, -127));
                                arr_28 [i_8] [i_8 - 2] [i_1] [i_1] [i_0] [i_0] = ((((var_6 > (arr_27 [i_8 + 3] [i_8 - 2] [i_8 - 2] [i_1] [i_8 - 2]))) ? (~-69) : ((var_3 | (min((arr_13 [i_0] [i_0] [0] [i_7] [i_8 + 3]), var_8))))));
                            }
                            var_25 = (((~var_7) / (((arr_8 [i_0] [i_0]) & (arr_8 [i_6] [i_6])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
