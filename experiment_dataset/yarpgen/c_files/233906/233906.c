/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = (min((((((var_5 ? (arr_6 [i_1]) : 3072))) ? -234947685 : (max((arr_2 [i_0]), 12989291705081952791)))), (arr_6 [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_12 = (min((((var_9 || (arr_10 [i_2] [i_4 - 1] [i_4 - 1] [i_1] [i_4 + 1])))), (arr_10 [i_0] [i_4 - 1] [i_4 - 1] [i_1] [i_4 - 1])));
                                var_13 = (arr_2 [i_2]);
                                var_14 = ((((-234947685 > (min((arr_0 [i_2] [i_2]), -77125200)))) ? (arr_6 [i_1]) : -77125200));
                                var_15 += (max(12989291705081952791, (((+((min((arr_6 [i_0]), 210))))))));
                                var_16 *= (arr_8 [i_0] [8] [i_0] [0]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    var_17 = 31;
                    var_18 = ((((((arr_15 [i_5 - 2] [i_5 + 1]) << (((arr_15 [i_5 + 1] [i_5 + 1]) - 10265266810451083725))))) ? ((min(3072, 25))) : var_11));
                }
            }
        }
    }
    var_19 += 101;
    #pragma endscop
}
