/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_3] [i_3] [i_2] [i_3] = (!9390746353709975821);
                            var_15 = (arr_1 [i_3] [i_0 + 2]);
                            var_16 = 14;
                            arr_11 [i_0 - 2] [i_1] [i_2] [i_3] = (max((min(var_11, var_8)), ((max(var_11, (arr_0 [i_0 + 1]))))));
                        }
                    }
                }
                arr_12 [i_0] [i_1] [i_0] = (max((9390746353709975793 && 9390746353709975799), (((var_2 / (arr_5 [i_1] [i_1] [i_1] [i_0]))))));
            }
        }
    }
    var_17 *= var_9;
    var_18 = -var_0;
    #pragma endscop
}
