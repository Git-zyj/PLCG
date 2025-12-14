/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= var_8;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((-(~var_0)));
                arr_5 [i_1] = (-(arr_0 [i_0]));
            }
        }
    }
    #pragma endscop
}
