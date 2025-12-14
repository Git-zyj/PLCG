/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!(((61186 ? 6763992715389951043 : (((min(35, 29500)))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = ((((((arr_1 [i_1 + 3] [i_1 + 2]) ? (arr_1 [i_1 + 2] [i_1 - 1]) : var_7))) ? (var_3 / var_9) : (max((arr_4 [i_1 - 2] [i_1 + 3] [i_1 + 3]), 1456988262))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_1] [i_0] [12] [i_1] &= ((((((min((arr_0 [i_0]), 969)) + 28318))) ? ((((((max(var_8, (arr_0 [i_0])))) == (arr_3 [i_1 + 2]))))) : (((29500 ? (arr_5 [i_3] [i_0] [i_0] [i_0]) : 99)))));
                            var_19 = (((((-((min(var_2, (arr_6 [i_0] [i_0] [i_0]))))))) ? (arr_9 [i_1] [i_1]) : var_9));
                        }
                    }
                }
            }
        }
    }
    var_20 = ((-(((min(20, 133))))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            {
                arr_17 [i_5] = (((((!var_14) ? ((min((arr_15 [i_4] [i_4] [i_4]), var_9))) : (arr_2 [i_5]))) < (((var_7 << (var_4 + 4709))))));
                var_21 = (min((min(var_3, var_10)), var_4));
            }
        }
    }
    var_22 = (min((min(var_16, 5)), ((((min(var_7, -693587141))) ? -var_9 : var_3))));
    #pragma endscop
}
