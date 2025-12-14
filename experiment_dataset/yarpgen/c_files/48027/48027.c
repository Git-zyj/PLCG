/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 1055941771;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = (((-1055941771 % -1) & (((!(!65))))));
                    var_20 = -4615891314685272978;
                    var_21 = -7281920884468131818;
                }
            }
        }
    }
    var_22 = var_8;
    #pragma endscop
}
