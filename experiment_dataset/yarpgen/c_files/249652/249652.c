/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_13, var_5));
    var_15 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] [2] = 76;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_16 *= -77;
                                var_17 = (min((arr_6 [i_1] [11]), (arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [11] [i_0])));
                                var_18 &= 26699;
                                var_19 = (min((min((min(65535, (arr_0 [i_0] [9]))), (arr_13 [i_0] [i_1] [i_2] [i_1] [7] [i_0]))), (min((arr_6 [i_0] [9]), (arr_6 [i_0] [i_0])))));
                            }
                        }
                    }
                }
                arr_20 [i_0] = (((arr_12 [i_0] [i_0] [i_1]) ? (((min(var_11, (arr_11 [i_0] [i_1] [i_0]))))) : (~8616)));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                arr_27 [i_0] [i_7] [i_0] [i_6] [0] = (max((-8616 * 248), (min((arr_25 [i_0] [i_1] [i_5] [i_6] [i_6] [i_5] [i_7]), (arr_2 [i_6])))));
                                arr_28 [i_0] [i_7] [i_5] [i_7] [i_6] [i_6] = ((~(~1066338690)));
                                arr_29 [i_0] [0] [i_5] [i_6] [i_7] [i_7] = (min(((((arr_19 [i_0] [10] [8]) > -8620))), var_12));
                            }
                        }
                    }
                }
                var_20 *= ((((min((arr_6 [11] [i_1]), ((var_2 ? (arr_25 [i_0] [i_0] [0] [0] [12] [12] [i_1]) : (arr_11 [i_0] [i_0] [6])))))) ? var_0 : (((((var_4 ? (arr_7 [1] [i_1]) : (arr_15 [i_0] [3] [i_1] [i_1])))) ? 20480 : -var_0))));
            }
        }
    }
    #pragma endscop
}
