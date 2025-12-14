/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (min(var_16, var_6));
                var_17 = 82;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_18 |= (arr_3 [i_2] [12]);
                            var_19 = max(var_9, (arr_8 [i_0] [i_2]));
                        }
                    }
                }
            }
        }
    }
    var_20 = var_5;
    #pragma endscop
}
