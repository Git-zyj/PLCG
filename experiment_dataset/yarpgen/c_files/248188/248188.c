/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = var_6;
                arr_5 [i_0] = (((arr_1 [i_0]) - (((arr_3 [4]) ? 10 : (arr_0 [i_0] [i_1])))));
            }
        }
    }
    var_19 *= (22407 - var_10);
    #pragma endscop
}
