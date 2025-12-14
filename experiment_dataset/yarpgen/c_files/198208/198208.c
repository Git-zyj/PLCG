/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] = (((((12197894238881583227 + 4002638442) + (var_13 - var_14))) + (((var_10 + var_3) - (var_0 / var_2)))));
                    var_15 = (((4002638442 % 1170237842) < var_7));
                }
            }
        }
    }
    var_16 = (var_5 || var_10);
    #pragma endscop
}
