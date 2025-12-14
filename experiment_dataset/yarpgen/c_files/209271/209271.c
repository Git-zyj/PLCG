/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_20 *= var_5;
                    var_21 = (arr_0 [i_2 + 1]);
                }
            }
        }
    }
    var_22 = ((min(6447395164545399569, var_8)));
    #pragma endscop
}
