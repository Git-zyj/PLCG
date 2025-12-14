/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((var_2 ? -99 : ((((var_2 / var_15) != var_8))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_17 = (max((max((arr_1 [i_0] [i_1]), (((arr_3 [i_0] [7] [i_1]) ? (arr_4 [i_1] [i_0]) : -1001696579)))), (arr_2 [i_1] [i_0] [i_0])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_18 = ((((((var_6 ^ -4650697005972871459) ? var_0 : (arr_9 [i_0] [i_1] [i_3] [11])))) ? ((~(arr_12 [5] [i_1] [0] [i_1] [i_1] [i_1]))) : ((max((arr_1 [i_1] [i_2]), var_0)))));
                                var_19 -= arr_1 [i_1] [i_1];
                                var_20 = (min(var_20, (-2147483647 - 1)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (max(var_21, ((((((var_7 ? (((min(var_7, var_8)))) : 2310302481621114467))) ? var_15 : var_10)))));
    #pragma endscop
}
