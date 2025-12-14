/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-(((235 / 12) ? ((min(-1333125264, (-2147483647 - 1)))) : 0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2 + 3] = 4;
                            var_16 = -1498301000;
                        }
                    }
                }
                arr_11 [i_0] = (!-298704017);
            }
        }
    }
    #pragma endscop
}
