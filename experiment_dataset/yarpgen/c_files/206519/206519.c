/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    var_14 = (max(var_14, ((((5136723333623856362 ? 11 : 11))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = ((~(((arr_2 [i_0 + 1]) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 - 1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_9 [i_0 - 2] [i_0 - 2] [i_2] [i_0] [i_0 - 2] [i_3] = ((5136723333623856356 | 50353) ? (((~1) % var_2)) : ((((arr_2 [i_0 - 1]) && (arr_1 [i_0] [i_1])))));
                            var_16 = (min((arr_1 [i_0] [i_0]), (min((arr_1 [i_0] [i_1]), (arr_1 [i_0] [i_1])))));
                            var_17 = (arr_5 [i_0] [i_1] [i_2] [i_0]);
                            arr_10 [4] [i_0] [i_1] [i_2] [i_3] = ((!((((arr_8 [i_0 - 1] [i_1] [i_2] [i_2]) ? (arr_8 [i_0 + 1] [i_1] [i_2] [i_3]) : (arr_8 [i_0 - 2] [i_0 - 2] [i_2] [i_3]))))));
                        }
                    }
                }
                var_18 = (arr_6 [i_1] [i_1] [i_1] [i_1]);
            }
        }
    }
    var_19 = ((((max(((min(56037, var_1))), (max(8, 13310020740085695254))))) ? var_0 : var_4));
    #pragma endscop
}
