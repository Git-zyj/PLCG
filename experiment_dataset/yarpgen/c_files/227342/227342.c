/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (((!((max(-16, (arr_4 [i_0 + 1] [i_0 - 1] [i_0 - 1])))))))));
                arr_5 [i_1] = ((~(arr_4 [i_0] [i_1] [i_1 - 1])));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_19 = (max(var_19, ((max(((26704 ? var_9 : var_6)), ((((((arr_2 [4] [4] [i_3]) ? 25601 : -30))) ? -var_2 : ((var_13 ? var_13 : var_0)))))))));
                            arr_10 [i_2] [i_1] [i_1] [i_1] = ((39776 <= (max(16184038583559527331, 2147483647))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
