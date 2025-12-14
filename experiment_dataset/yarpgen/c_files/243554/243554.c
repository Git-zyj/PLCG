/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (max(1, (((var_1 - 1050233611) + -1))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_12 [i_0 - 1] [i_1] [i_0 - 1] [i_0] = max(((((var_0 / 1) != 1))), (min(var_4, var_4)));
                            arr_13 [i_0] [i_0] [i_2] = 1306915547080015228;
                        }
                    }
                }
            }
        }
    }
    var_12 = (var_5 & 127);
    var_13 = (((min(var_9, (2801314859 > 4095)))));
    #pragma endscop
}
