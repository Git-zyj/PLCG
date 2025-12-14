/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_15 += ((!((max((var_6 + var_12), (arr_5 [i_1] [i_1 + 1] [i_2 + 2]))))));
                    arr_8 [i_0] [i_1] [i_2] = var_3;
                    var_16 = (max((((((arr_2 [6]) > (arr_0 [i_2] [i_0]))) ? var_11 : (arr_1 [i_1] [i_2 - 1]))), ((min((arr_1 [i_0] [i_1 + 1]), ((var_1 ? (arr_7 [i_1] [i_1]) : (arr_1 [i_0] [i_1]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 = (((-(arr_3 [i_1 + 1] [i_2 - 1] [i_1 + 1]))));
                                var_18 *= (((min(63865, var_8)) & 4294967295));
                                arr_15 [i_3] [i_1] [1] [10] [i_4] [i_0] &= ((-(((((var_7 ? 63862 : var_10))) ? ((max(var_1, var_12))) : ((var_7 ? (arr_13 [10] [10] [i_2] [10]) : var_2))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
