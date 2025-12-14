/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, 8327));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (((((max(((min((arr_4 [i_0] [i_0]), -8357))), var_2)))) + (arr_1 [i_0] [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_15 = (min(var_15, ((max((max((max(var_4, var_9)), (arr_7 [i_0] [i_0 - 1] [i_3]))), (((-(arr_7 [i_0] [i_0 - 1] [i_3])))))))));
                            arr_13 [i_2] [i_0] [i_0] [i_0] = ((((-(arr_10 [i_0])))));
                        }
                    }
                }
                var_16 += (((((-(arr_10 [i_0])))) || (((min((arr_0 [i_0]), 120))))));
            }
        }
    }
    var_17 = var_13;
    #pragma endscop
}
