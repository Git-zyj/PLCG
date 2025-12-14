/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!(((~(~var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (~-65);
                var_14 = ((~((~(~var_2)))));
                var_15 = -30160;
            }
        }
    }
    var_16 = (min(var_16, ((~((-(~var_4)))))));
    #pragma endscop
}
