/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = (min(var_14, var_12));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_10 [i_2] [0] [i_2 - 1] [i_3] = (0 & 1438017865586165578);
                            var_15 -= (min((max((max(955469615661694372, 1438017865586165578)), (((~(arr_5 [i_0] [i_1] [i_0])))))), (~-937241452)));
                            var_16 = ((((-(arr_8 [i_0] [i_0]))) / var_3));
                            arr_11 [i_0] [i_1] [i_2] [2] [i_1] [i_2] = (!(((((var_11 == (arr_7 [i_0] [i_2 - 1] [i_3]))) ? (max(var_1, (arr_8 [5] [5]))) : ((var_10 ? (arr_9 [i_0] [6] [i_2 + 1] [i_3 - 1]) : (arr_7 [i_0] [i_2] [i_3 - 1])))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
