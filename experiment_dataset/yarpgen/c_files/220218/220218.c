/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_11 = ((1 ? 12770051256231741258 : 811413608));
                var_12 += 1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        {
                            arr_14 [i_3] [1] [i_1] [i_0] = 56;
                            arr_15 [i_0] [i_1] [i_2] [i_3 - 2] [1] = max((((8918010444771008099 ? 0 : 1))), (min((var_5 - var_0), ((max(var_8, var_10))))));
                            var_13 = ((!((max(var_4, -45)))));
                        }
                    }
                }
            }
        }
    }
    var_14 = (((~(min(12770051256231741249, var_7)))));
    #pragma endscop
}
