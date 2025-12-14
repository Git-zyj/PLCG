/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [14] = (arr_0 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((-1105704817 * (24364 / 4611615649683210240)));
                                var_12 = 1101408900;
                                var_13 = 4611615649683210236;
                                var_14 = (max((arr_0 [i_2]), 92));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = var_7;
    #pragma endscop
}
