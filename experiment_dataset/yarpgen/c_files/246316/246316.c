/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (var_1 ? (min((arr_1 [i_0]), ((253 ? 1 : (arr_7 [i_0]))))) : (arr_5 [i_0] [i_1] [i_0]));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_16 = (arr_9 [10] [i_1] [3] [3]);
                            var_17 = (min(var_17, ((min((min((((var_6 - (arr_7 [i_0])))), ((var_8 ? (arr_5 [i_3] [i_3] [i_2]) : (arr_5 [i_0 - 1] [i_0 - 1] [3]))))), (((var_0 + (arr_12 [i_0])))))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_18 += (((((((((arr_12 [i_0]) ? 18 : (arr_14 [i_0] [i_1] [i_1] [i_1])))) ? ((max((arr_12 [i_6]), var_8))) : var_3))) ? (arr_6 [i_6] [i_5] [i_6]) : var_2));
                                var_19 = (max(var_19, (((((max((max((arr_1 [i_0]), var_13)), 15))) ? ((var_2 ? (((arr_5 [i_0] [6] [i_5]) / (arr_12 [i_6]))) : 192)) : ((((1 > (arr_8 [i_0] [8] [i_0]))))))))));
                                var_20 = (min(var_20, ((min((max((arr_9 [i_5] [i_0] [i_0] [i_0]), ((((-2147483646 + 2147483647) >> (200 - 187)))))), ((((arr_7 [i_0]) << (arr_10 [i_0] [i_6] [i_4 + 1] [i_5])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 ^= ((!(!var_5)));
    #pragma endscop
}
