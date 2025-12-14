/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((((min(((max(57768, var_6))), ((25285 ? var_5 : var_8))))) ? -1974442230 : var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (-(~var_3));
                var_13 = (min(var_13, ((-(7768 - 1973487092)))));
            }
        }
    }
    var_14 = var_10;
    #pragma endscop
}
