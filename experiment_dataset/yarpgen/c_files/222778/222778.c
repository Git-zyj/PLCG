/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= var_4;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 *= (min((((((var_11 | (arr_9 [i_0] [1] [i_2])))) ? -5370 : (arr_1 [i_0 - 1]))), (arr_0 [i_0] [i_0])));
                    var_14 = (~(arr_3 [i_0 - 2] [i_0 - 2] [i_0 - 2]));
                }
            }
        }
    }
    #pragma endscop
}
