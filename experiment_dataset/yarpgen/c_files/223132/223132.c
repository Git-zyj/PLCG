/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((min(1915840243, 2379127053))) ^ ((((var_3 ? -18 : var_6)) - var_12))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, (arr_7 [i_1 + 2] [i_1 - 3] [i_1 - 1])));
                    var_15 = (min((max((arr_5 [i_1] [i_1 - 1] [i_1 + 2]), var_12)), (arr_5 [i_1] [i_1 - 3] [i_1 - 2])));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        var_16 = 247;
                        var_17 |= (((arr_9 [i_3] [i_3 + 1] [i_3 + 1] [i_3 + 1] [7] [i_1]) ? var_7 : (arr_9 [i_3 - 1] [i_3 + 1] [22] [i_3 + 1] [i_3] [i_3 + 1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
