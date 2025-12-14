/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_13 = ((((((~1532534465877285097) ? (min(3457, (arr_4 [i_0 + 1] [i_0] [i_0 + 1]))) : 1))) ? 21573 : (~2790368844)));
                    arr_8 [i_0] [i_1] [i_1] [i_0] = (arr_4 [i_0] [i_0] [i_0]);
                    arr_9 [i_0] [i_0] [i_0] [i_0 + 1] = (max((arr_1 [i_0] [i_1]), var_1));
                }
            }
        }
    }
    var_14 = var_8;
    #pragma endscop
}
