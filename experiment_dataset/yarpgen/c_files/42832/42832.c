/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_1] = ((!(~25)));
                    arr_9 [i_0] [i_1] [i_0] = arr_5 [i_0] [i_0] [0];

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_20 = var_11;
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = var_13;

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_21 = (((((((max((arr_1 [i_0]), (arr_2 [i_1])))) ? var_14 : 88))) ? (arr_13 [4] [i_1] [i_1] [i_1] [4]) : var_16));
                            var_22 = 7864;
                            arr_15 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [9] = min((arr_6 [i_2 - 2] [i_1] [i_2 - 1]), (arr_6 [i_2 - 2] [i_1] [i_2 - 1]));
                            arr_16 [i_1] = (!var_12);
                        }
                        arr_17 [i_0] [i_0] [i_0] [i_1] = (arr_11 [1] [i_1] [i_1]);
                        arr_18 [i_1] = var_8;
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_21 [i_0] [i_0] [i_1] = (arr_20 [i_1] [i_1] [i_1] [i_1]);

                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            var_23 = ((((min((arr_24 [i_2] [i_1] [i_2 - 2] [i_2]), (arr_13 [i_2 - 2] [i_2] [i_2 + 2] [i_2 - 2] [i_2])))) ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_19 [i_0] [i_0] [i_0] [i_0] [i_1])));
                            var_24 = ((((min(((var_16 ? (arr_19 [i_0] [i_0] [i_0] [i_0] [i_6]) : (arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]))), ((-(arr_19 [i_0] [i_0] [i_0] [i_0] [i_6]))))) + 2147483647)) << (((((max(var_5, var_12)) + 2669008328607726463)) - 22)));
                            var_25 = var_7;
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            arr_28 [i_1] [i_1] [i_1] [16] [i_1] = arr_4 [i_0] [i_0] [i_1];
                            var_26 &= ((!((25 && ((max((arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]), var_3)))))));
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = (max(((var_18 + ((-7865 + (arr_24 [i_0] [i_1] [i_0] [i_0]))))), -7865));
                        }
                        for (int i_8 = 2; i_8 < 15;i_8 += 1)
                        {
                            var_27 = (((((max(var_5, (arr_14 [i_0] [i_0] [i_0] [i_0] [10] [i_0]))) ? (arr_13 [i_8 - 1] [i_8 - 1] [i_8 - 2] [i_8] [i_8 - 2]) : var_11))));
                            var_28 = var_4;
                        }
                    }
                }
            }
        }
    }
    var_29 -= var_3;
    var_30 &= (max(-7865, (((var_1 >= ((max(var_16, var_9))))))));
    #pragma endscop
}
