/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= (max(var_10, (!var_1)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (arr_1 [i_1])));
                    var_15 |= (arr_3 [i_1 - 3] [i_1 + 1]);
                }
            }
        }
    }
    #pragma endscop
}
