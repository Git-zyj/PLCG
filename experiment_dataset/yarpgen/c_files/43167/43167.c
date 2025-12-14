/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_8 ? ((-((var_7 ? 4196073448 : var_9)))) : (((98893848 >> (4196073456 - 4196073447)))));
    var_11 &= var_8;
    var_12 = (((((~((min(var_4, var_3)))))) ? (((!var_6) ? var_3 : 15895585735771300639)) : (var_9 - -var_9)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (((!((((max(1, 5346568873469977545)) / 98893847))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_14 = ((((max(var_9, (-1 * 0)))) ? (arr_10 [14] [i_1] [i_1] [i_1] [i_1]) : (arr_8 [i_0])));
                                arr_13 [i_0 - 1] [i_0] [i_1] [i_2 + 1] [i_0] [9] = (1 ^ 22389);
                                var_15 = (((!28672) / (arr_3 [i_0 + 1] [i_1] [i_4])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
