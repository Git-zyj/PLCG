/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_1] [9] [i_0] = ((((!(arr_5 [8] [1] [i_3])))));
                            var_21 = (arr_7 [i_3] [i_2] [i_1] [10] [i_1] [i_0]);
                            arr_10 [i_0] [i_0] [i_1] [i_2] [1] [i_3] = var_8;
                        }
                    }
                }
                var_22 = ((!(((min(var_9, 1))))));
            }
        }
    }
    #pragma endscop
}
