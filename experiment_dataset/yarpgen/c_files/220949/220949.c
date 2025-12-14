/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_13 = (((((max(-19672, 46015)) - (1 - var_6)))));
                            arr_11 [i_3] [i_2] [i_2] [i_1] [0] = (arr_9 [11] [i_3] [i_2] [11]);
                        }
                    }
                }
                arr_12 [9] [i_0] [i_0] = (((-((max(var_10, var_1))))));
                var_14 = (max((((var_3 << (((arr_7 [i_1] [3] [i_0] [i_0]) + 1035))))), 13188130698526852683));
            }
        }
    }
    #pragma endscop
}
