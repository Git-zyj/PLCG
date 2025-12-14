/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_10 = (((arr_0 [i_1 - 1]) >= (((arr_0 [i_1 + 1]) | (arr_0 [i_1 + 1])))));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        var_11 |= var_0;
                        var_12 = (arr_0 [i_0]);
                    }
                }
            }
        }
    }
    var_13 = 0;
    var_14 = -57;
    #pragma endscop
}
