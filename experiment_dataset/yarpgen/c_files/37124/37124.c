/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 234881024;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 = 0;
                    var_16 &= 2147483639;
                    var_17 = (-(((!((!(arr_5 [i_0])))))));
                }
            }
        }
    }
    var_18 = ((!((min((!-2147483644), (var_5 ^ 14))))));
    #pragma endscop
}
