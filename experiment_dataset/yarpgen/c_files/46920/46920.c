/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [11] [i_0] [i_1 - 2] [i_1 - 2] [i_3] = ((((((min((arr_5 [i_0] [i_3] [i_3] [i_3]), var_4))) ? var_14 : ((187 ? (arr_6 [i_0] [i_0] [i_0]) : 0)))) - (arr_6 [i_0] [i_1] [i_3])));
                            arr_10 [i_0] [i_1] [i_2 - 2] [i_2 - 2] [i_3] [i_3] = (((((121 / -253414231) ? -2007432849 : ((((arr_6 [21] [i_1] [1]) - (arr_7 [i_0] [i_1 + 1] [1] [i_3])))))) * 182629348));
                            arr_11 [5] [i_0] [i_0] = (max((max((min(1594264056, (arr_5 [i_0] [i_1] [i_0] [i_3]))), (arr_6 [i_0] [i_0] [i_2]))), (arr_1 [17])));
                        }
                    }
                }
                arr_12 [i_1 - 1] [19] [i_0] = 50;
            }
        }
    }
    var_17 = (var_6 ^ var_13);
    var_18 = (((max(1, ((var_2 ? var_9 : var_7)))) ^ var_4));
    #pragma endscop
}
