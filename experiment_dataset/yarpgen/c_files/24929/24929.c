/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((((((var_3 ? (var_3 > var_8) : var_7))) > (-541498653 - var_8))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_11 |= var_7;
                    var_12 ^= (arr_7 [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
