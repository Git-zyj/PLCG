/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= 8593;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = -56943;
                var_15 = ((!(~var_4)));
                var_16 *= (((arr_1 [i_1 - 3] [i_1 - 3]) > (((arr_1 [i_1 - 2] [i_1 - 1]) ? (arr_1 [i_1 - 2] [i_1 - 2]) : (arr_1 [i_1 - 1] [i_1 + 1])))));
                var_17 = 7;
            }
        }
    }
    var_18 = var_8;
    #pragma endscop
}
