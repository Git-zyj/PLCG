/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    var_19 -= (((((((arr_1 [i_1]) ^ 0)))) & (0 ^ 9787)));
                    var_20 = (min(var_20, 126));
                }
            }
        }
    }
    var_21 = var_15;
    #pragma endscop
}
